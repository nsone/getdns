getdns API  {#mainpage}
==========

* Date:    2013-11-03
* GitHub:  <https://github.com/verisign/getdns>

getdns is a [modern asynchronous DNS API](http://www.vpnc.org/getdns-api/) intended to make all types of DNS information easily available as described by Paul Hoffman.  This implementation is licensed under the New BSD License (BSD-new).

The [getdns-api mailing list](http://www.vpnc.org/mailman/listinfo/getdns-api) is a good place to engage in discussions regarding the design of the API.

This file captures the goals and direction of the project and the current state of the implementation.

The goals of this implementation of the getdns API are:

* Provide an open source implementation, in C, of the formally described getdns API by Paul Hoffman at <http://www.vpnc.org/getdns-api/>
* Initial support for FreeBSD x.y, MS-Windows Ver. X, OSX 10.x, Linux (CentOS/RHEL R6uX, Ubuntu Ver X) via functional "configure" script
* Initial support to include the Android platform
* Include examples and tests as part of the build
* Document code using doxygen
* Leverage github as much as possible for project coordination
* Coding style/standards follow the BSD coding style <ftp://ftp.netbsd.org/pub/NetBSD/NetBSD-current/src/share/misc/style>
* Follow the git flow branching model described at <http://nvie.com/posts/a-successful-git-branching-model/>
** the master branch is always in a production ready state
** the develop branch contains the latest development changes which are merged from develop into master once they are considered production ready
* Both synchronous and asynchronous entry points with an early focus on the asynchronous model

Non-goals (things we will not be doing) include:
* implementation of the traditional DNS related routines (gethostbyname, etc.)

Releases
========
Release numbering follows the [Semantic Versioning](http://semver.org/) approach.  We are currently in the early stages of building the API so the code should be considered incomplete.

The 0.1.0 release will be issued when the repository is opened to the public, our goal is to meet the following requirements prior to opening the repository:

* code compiles cleanly on at least the primary target platforms: RHEL/CentOS 6.3 Linux, FreeBSD 9.2
* examples must compile and be clean
* clearly document supported/unsupported elements of the API

Tickets/Bug Reports
===================
Tickets and bug reports from external contacts are received via a mailing list and managed in the git issues list.

TBD: mailing list address


External Dependencies
=====================
External dependencies are linked outside the getdns API build tree (we rely on configure to find them).  We would like to keep the dependency tree short.

* [libevent](http://libevent.org) version 2.0.21 stable
Sometimes called libevent2
* [libldns from NL](https://www.nlnetlabs.nl/projects/ldns/) version 1.6.16 (ldns may require openssl headers and libraries)
* [libunbound from NL](http://www.nlnetlabs.nl/projects/unbound/) svn revision 3012, configure must be run with the --with-libevent option (recommended to also use --with-libunbound-only).
* [libexpat](http://expat.sourceforge.net/) for libunbound.
* [libidn from the FSF](http://www.gnu.org/software/libidn/) version 1.
* Doxygen is used to generate documentation, while this is not technically necessary for the build it makes things a lot more pleasant.

You have to install the library and also the library-devel (or -dev) for your
package management system to install the compile time files.  If you checked
out our git; the configure script is built with autoreconf --install.

Assuming that the getdns sources are in a diretory named getdns in your home directory, to build libunbound:
```
# mkdir unbound
# cd unbound
# svn export -r 3023 http://unbound.nlnetlabs.nl/svn/trunk
# cd trunk
# ./configure --with-libevent --with-libunbound-only
### add --disable-gost --disable-ecdsa if elliptic curves are disabled for you.
# make
# make install
```

Unsupported Features
====================

The following API calls are documented in getDNS but *not supported* by the implementation at this time:

* Support for OPT Records in `getdns_general` and variants via the `extensions` parameter.
* `getdns_convert_dns_name_to_fqdn` and `getdns_convert_fqdn_to_dns_name`
* EDNS options
  * `getdns_context_set_edns_do_bit`
  * `getdns_context_set_edns_version`
  * `getdns_context_set_edns_extended_rcode`
* `GETDNS_CONTEXT_TCP_ONLY_KEEP_CONNECTIONS_OPEN` with `getdns_context_set_dns_transport`
* DNS Search suffixes in stub mode
* DNSSEC
  * `getdns_context_set_dnssec_trust_anchors`
  * `getdns_validate_dnssec`
* Detecting changes to resolv.conf and hosts

Spec Differences
================

This implementation makes a few modifications to the spec by adding the following methods to the public API:

* `getdns_context_set_memory_functions` replaces `getdns_context_set_memory_allocator`, `getdns_context_set_memory_deallocator`, and `getdns_context_set_memory_reallocator`
* `getdns_list_create_with_context, `getdns_list_create_with_memory_functions`, `getdns_dict_create_with_context`, and `getdns_dict_create_with_memory_functions` to create lists and dictionaries with context or user supplied memory management functions.

#Supported Platforms

The primary platforms targeted are Linux and FreeBSD, other platform are supported as we get time.  The names listed here are intended to help ensure that we catch platform specific breakage, not to limit the work that folks are doing.

Where at all possible we need to make sure that both 32 and 64 bit implementations work.

* Android, Neel
* FreeBSD 9.2, gcc/clang Melinda
* FreeBSD 10.0 (not yet released), gcc/clang Melinda
* Linux RHEL/CentOS 6.x, Glen
* MS-Windows 8, cygwin, Neel
* NetBSD x.x, Wouter
* OpenBSD 5.3, Wouter
* OSX 10.8, Glen
* OSX 10.9, Allison
* Ubuntu 12.x, Melinda

The NLNet folks offered to build on a number of legacy platforms as well to help ensure that the code is clean.  These include some big endian hardware and a few more obscure operating systems which will not be publicly supported but might work if someone wants to try them.

##Build Reports

TBD

Contributors
============
* Neel Goyal, Verisign, Inc.
* Allison Mankin, Verisign, Inc.
* Melinda Shore, No Mountain Software LLC
* Willem Toorop, NLNet Labs
* Glen Wiley, Verisign, Inc.
* Wouter Wijngaards, NLNet Labs

--
end README
