/* WARNING! This file is generated by the mk-const-info.c.sh program.
 * Do not edit manually!
 */
#include <stdlib.h>
#include "getdns/getdns.h"
#include "getdns/getdns_extra.h"
#include "const-info.h"
#include <string.h>

static struct const_info consts_info[] = {
	{   -1, NULL, "/* <unknown getdns value> */" },
	{    0, "GETDNS_RETURN_GOOD", GETDNS_RETURN_GOOD_TEXT },
	{    1, "GETDNS_RETURN_GENERIC_ERROR", GETDNS_RETURN_GENERIC_ERROR_TEXT },
	{  300, "GETDNS_RETURN_BAD_DOMAIN_NAME", GETDNS_RETURN_BAD_DOMAIN_NAME_TEXT },
	{  301, "GETDNS_RETURN_BAD_CONTEXT", GETDNS_RETURN_BAD_CONTEXT_TEXT },
	{  302, "GETDNS_RETURN_CONTEXT_UPDATE_FAIL", GETDNS_RETURN_CONTEXT_UPDATE_FAIL_TEXT },
	{  303, "GETDNS_RETURN_UNKNOWN_TRANSACTION", GETDNS_RETURN_UNKNOWN_TRANSACTION_TEXT },
	{  304, "GETDNS_RETURN_NO_SUCH_LIST_ITEM", GETDNS_RETURN_NO_SUCH_LIST_ITEM_TEXT },
	{  305, "GETDNS_RETURN_NO_SUCH_DICT_NAME", GETDNS_RETURN_NO_SUCH_DICT_NAME_TEXT },
	{  306, "GETDNS_RETURN_WRONG_TYPE_REQUESTED", GETDNS_RETURN_WRONG_TYPE_REQUESTED_TEXT },
	{  307, "GETDNS_RETURN_NO_SUCH_EXTENSION", GETDNS_RETURN_NO_SUCH_EXTENSION_TEXT },
	{  308, "GETDNS_RETURN_EXTENSION_MISFORMAT", GETDNS_RETURN_EXTENSION_MISFORMAT_TEXT },
	{  309, "GETDNS_RETURN_DNSSEC_WITH_STUB_DISALLOWED", GETDNS_RETURN_DNSSEC_WITH_STUB_DISALLOWED_TEXT },
	{  310, "GETDNS_RETURN_MEMORY_ERROR", GETDNS_RETURN_MEMORY_ERROR_TEXT },
	{  311, "GETDNS_RETURN_INVALID_PARAMETER", GETDNS_RETURN_INVALID_PARAMETER_TEXT },
	{  312, "GETDNS_RETURN_NOT_IMPLEMENTED", GETDNS_RETURN_NOT_IMPLEMENTED_TEXT },
	{  398, "GETDNS_RETURN_NO_UPSTREAM_AVAILABLE", GETDNS_RETURN_NO_UPSTREAM_AVAILABLE_TEXT },
	{  399, "GETDNS_RETURN_NEED_MORE_SPACE", GETDNS_RETURN_NEED_MORE_SPACE_TEXT },
	{  400, "GETDNS_DNSSEC_SECURE", GETDNS_DNSSEC_SECURE_TEXT },
	{  401, "GETDNS_DNSSEC_BOGUS", GETDNS_DNSSEC_BOGUS_TEXT },
	{  402, "GETDNS_DNSSEC_INDETERMINATE", GETDNS_DNSSEC_INDETERMINATE_TEXT },
	{  403, "GETDNS_DNSSEC_INSECURE", GETDNS_DNSSEC_INSECURE_TEXT },
	{  404, "GETDNS_DNSSEC_NOT_PERFORMED", GETDNS_DNSSEC_NOT_PERFORMED_TEXT },
	{  500, "GETDNS_NAMESPACE_DNS", GETDNS_NAMESPACE_DNS_TEXT },
	{  501, "GETDNS_NAMESPACE_LOCALNAMES", GETDNS_NAMESPACE_LOCALNAMES_TEXT },
	{  502, "GETDNS_NAMESPACE_NETBIOS", GETDNS_NAMESPACE_NETBIOS_TEXT },
	{  503, "GETDNS_NAMESPACE_MDNS", GETDNS_NAMESPACE_MDNS_TEXT },
	{  504, "GETDNS_NAMESPACE_NIS", GETDNS_NAMESPACE_NIS_TEXT },
	{  520, "GETDNS_RESOLUTION_STUB", GETDNS_RESOLUTION_STUB_TEXT },
	{  521, "GETDNS_RESOLUTION_RECURSING", GETDNS_RESOLUTION_RECURSING_TEXT },
	{  530, "GETDNS_REDIRECTS_FOLLOW", GETDNS_REDIRECTS_FOLLOW_TEXT },
	{  531, "GETDNS_REDIRECTS_DO_NOT_FOLLOW", GETDNS_REDIRECTS_DO_NOT_FOLLOW_TEXT },
	{  540, "GETDNS_TRANSPORT_UDP_FIRST_AND_FALL_BACK_TO_TCP", GETDNS_TRANSPORT_UDP_FIRST_AND_FALL_BACK_TO_TCP_TEXT },
	{  541, "GETDNS_TRANSPORT_UDP_ONLY", GETDNS_TRANSPORT_UDP_ONLY_TEXT },
	{  542, "GETDNS_TRANSPORT_TCP_ONLY", GETDNS_TRANSPORT_TCP_ONLY_TEXT },
	{  543, "GETDNS_TRANSPORT_TCP_ONLY_KEEP_CONNECTIONS_OPEN", GETDNS_TRANSPORT_TCP_ONLY_KEEP_CONNECTIONS_OPEN_TEXT },
	{  544, "GETDNS_TRANSPORT_TLS_ONLY_KEEP_CONNECTIONS_OPEN", GETDNS_TRANSPORT_TLS_ONLY_KEEP_CONNECTIONS_OPEN_TEXT },
	{  545, "GETDNS_TRANSPORT_TLS_FIRST_AND_FALL_BACK_TO_TCP_KEEP_CONNECTIONS_OPEN", GETDNS_TRANSPORT_TLS_FIRST_AND_FALL_BACK_TO_TCP_KEEP_CONNECTIONS_OPEN_TEXT },
	{  550, "GETDNS_APPEND_NAME_ALWAYS", GETDNS_APPEND_NAME_ALWAYS_TEXT },
	{  551, "GETDNS_APPEND_NAME_ONLY_TO_SINGLE_LABEL_AFTER_FAILURE", GETDNS_APPEND_NAME_ONLY_TO_SINGLE_LABEL_AFTER_FAILURE_TEXT },
	{  552, "GETDNS_APPEND_NAME_ONLY_TO_MULTIPLE_LABEL_NAME_AFTER_FAILURE", GETDNS_APPEND_NAME_ONLY_TO_MULTIPLE_LABEL_NAME_AFTER_FAILURE_TEXT },
	{  553, "GETDNS_APPEND_NAME_NEVER", GETDNS_APPEND_NAME_NEVER_TEXT },
	{  554, "GETDNS_APPEND_NAME_TO_SINGLE_LABEL_FIRST", GETDNS_APPEND_NAME_TO_SINGLE_LABEL_FIRST_TEXT },
	{  600, "GETDNS_CONTEXT_CODE_NAMESPACES", GETDNS_CONTEXT_CODE_NAMESPACES_TEXT },
	{  601, "GETDNS_CONTEXT_CODE_RESOLUTION_TYPE", GETDNS_CONTEXT_CODE_RESOLUTION_TYPE_TEXT },
	{  602, "GETDNS_CONTEXT_CODE_FOLLOW_REDIRECTS", GETDNS_CONTEXT_CODE_FOLLOW_REDIRECTS_TEXT },
	{  603, "GETDNS_CONTEXT_CODE_UPSTREAM_RECURSIVE_SERVERS", GETDNS_CONTEXT_CODE_UPSTREAM_RECURSIVE_SERVERS_TEXT },
	{  604, "GETDNS_CONTEXT_CODE_DNS_ROOT_SERVERS", GETDNS_CONTEXT_CODE_DNS_ROOT_SERVERS_TEXT },
	{  605, "GETDNS_CONTEXT_CODE_DNS_TRANSPORT", GETDNS_CONTEXT_CODE_DNS_TRANSPORT_TEXT },
	{  606, "GETDNS_CONTEXT_CODE_LIMIT_OUTSTANDING_QUERIES", GETDNS_CONTEXT_CODE_LIMIT_OUTSTANDING_QUERIES_TEXT },
	{  607, "GETDNS_CONTEXT_CODE_APPEND_NAME", GETDNS_CONTEXT_CODE_APPEND_NAME_TEXT },
	{  608, "GETDNS_CONTEXT_CODE_SUFFIX", GETDNS_CONTEXT_CODE_SUFFIX_TEXT },
	{  609, "GETDNS_CONTEXT_CODE_DNSSEC_TRUST_ANCHORS", GETDNS_CONTEXT_CODE_DNSSEC_TRUST_ANCHORS_TEXT },
	{  610, "GETDNS_CONTEXT_CODE_EDNS_MAXIMUM_UDP_PAYLOAD_SIZE", GETDNS_CONTEXT_CODE_EDNS_MAXIMUM_UDP_PAYLOAD_SIZE_TEXT },
	{  611, "GETDNS_CONTEXT_CODE_EDNS_EXTENDED_RCODE", GETDNS_CONTEXT_CODE_EDNS_EXTENDED_RCODE_TEXT },
	{  612, "GETDNS_CONTEXT_CODE_EDNS_VERSION", GETDNS_CONTEXT_CODE_EDNS_VERSION_TEXT },
	{  613, "GETDNS_CONTEXT_CODE_EDNS_DO_BIT", GETDNS_CONTEXT_CODE_EDNS_DO_BIT_TEXT },
	{  614, "GETDNS_CONTEXT_CODE_DNSSEC_ALLOWED_SKEW", GETDNS_CONTEXT_CODE_DNSSEC_ALLOWED_SKEW_TEXT },
	{  615, "GETDNS_CONTEXT_CODE_MEMORY_FUNCTIONS", GETDNS_CONTEXT_CODE_MEMORY_FUNCTIONS_TEXT },
	{  616, "GETDNS_CONTEXT_CODE_TIMEOUT", GETDNS_CONTEXT_CODE_TIMEOUT_TEXT },
	{  617, "GETDNS_CONTEXT_CODE_IDLE_TIMEOUT", GETDNS_CONTEXT_CODE_IDLE_TIMEOUT_TEXT },
	{  618, "GETDNS_CONTEXT_CODE_TLS_AUTHENTICATION", GETDNS_CONTEXT_CODE_TLS_AUTHENTICATION_TEXT },
	{  619, "GETDNS_CONTEXT_CODE_EDNS_CLIENT_SUBNET_PRIVATE", GETDNS_CONTEXT_CODE_EDNS_CLIENT_SUBNET_PRIVATE_TEXT },
	{  620, "GETDNS_CONTEXT_CODE_TLS_QUERY_PADDING_BLOCKSIZE", GETDNS_CONTEXT_CODE_TLS_QUERY_PADDING_BLOCKSIZE_TEXT },
	{  621, "GETDNS_CONTEXT_CODE_PUBKEY_PINSET", GETDNS_CONTEXT_CODE_PUBKEY_PINSET_TEXT },
	{  622, "GETDNS_CONTEXT_CODE_TLS_USE_ALL_UPSTREAMS", GETDNS_CONTEXT_CODE_TLS_USE_ALL_UPSTREAMS_TEXT },
	{  700, "GETDNS_CALLBACK_COMPLETE", GETDNS_CALLBACK_COMPLETE_TEXT },
	{  701, "GETDNS_CALLBACK_CANCEL", GETDNS_CALLBACK_CANCEL_TEXT },
	{  702, "GETDNS_CALLBACK_TIMEOUT", GETDNS_CALLBACK_TIMEOUT_TEXT },
	{  703, "GETDNS_CALLBACK_ERROR", GETDNS_CALLBACK_ERROR_TEXT },
	{  800, "GETDNS_NAMETYPE_DNS", GETDNS_NAMETYPE_DNS_TEXT },
	{  801, "GETDNS_NAMETYPE_WINS", GETDNS_NAMETYPE_WINS_TEXT },
	{  900, "GETDNS_RESPSTATUS_GOOD", GETDNS_RESPSTATUS_GOOD_TEXT },
	{  901, "GETDNS_RESPSTATUS_NO_NAME", GETDNS_RESPSTATUS_NO_NAME_TEXT },
	{  902, "GETDNS_RESPSTATUS_ALL_TIMEOUT", GETDNS_RESPSTATUS_ALL_TIMEOUT_TEXT },
	{  903, "GETDNS_RESPSTATUS_NO_SECURE_ANSWERS", GETDNS_RESPSTATUS_NO_SECURE_ANSWERS_TEXT },
	{  904, "GETDNS_RESPSTATUS_ALL_BOGUS_ANSWERS", GETDNS_RESPSTATUS_ALL_BOGUS_ANSWERS_TEXT },
	{ 1000, "GETDNS_EXTENSION_TRUE", GETDNS_EXTENSION_TRUE_TEXT },
	{ 1001, "GETDNS_EXTENSION_FALSE", GETDNS_EXTENSION_FALSE_TEXT },
	{ 1100, "GETDNS_BAD_DNS_CNAME_IN_TARGET", GETDNS_BAD_DNS_CNAME_IN_TARGET_TEXT },
	{ 1101, "GETDNS_BAD_DNS_ALL_NUMERIC_LABEL", GETDNS_BAD_DNS_ALL_NUMERIC_LABEL_TEXT },
	{ 1102, "GETDNS_BAD_DNS_CNAME_RETURNED_FOR_OTHER_TYPE", GETDNS_BAD_DNS_CNAME_RETURNED_FOR_OTHER_TYPE_TEXT },
	{ 1200, "GETDNS_TRANSPORT_UDP", GETDNS_TRANSPORT_UDP_TEXT },
	{ 1201, "GETDNS_TRANSPORT_TCP", GETDNS_TRANSPORT_TCP_TEXT },
	{ 1202, "GETDNS_TRANSPORT_TLS", GETDNS_TRANSPORT_TLS_TEXT },
	{ 1300, "GETDNS_AUTHENTICATION_NONE", GETDNS_AUTHENTICATION_NONE_TEXT },
	{ 1301, "GETDNS_AUTHENTICATION_REQUIRED", GETDNS_AUTHENTICATION_REQUIRED_TEXT },
};

static int const_info_cmp(const void *a, const void *b)
{
	return ((struct const_info *) a)->code - ((struct const_info *) b)->code;
}
struct const_info *
_getdns_get_const_info(int value)
{
	struct const_info key = { value, "", "" };
	struct const_info *i = bsearch(&key, consts_info,
	    sizeof(consts_info) / sizeof(struct const_info),
	    sizeof(struct const_info), const_info_cmp);
	if (i)
		return i;
	return consts_info;
}

const char *
getdns_get_errorstr_by_id(uint16_t err)
{
	struct const_info key = { (int)err, "", "" };
	struct const_info *i = bsearch(&key, consts_info,
	    sizeof(consts_info) / sizeof(struct const_info),
	    sizeof(struct const_info), const_info_cmp);
	if (i)
		return i->text;
	else
		return NULL;
}

static struct const_name_info consts_name_info[] = {
	{ "GETDNS_APPEND_NAME_ALWAYS", 550 },
	{ "GETDNS_APPEND_NAME_NEVER", 553 },
	{ "GETDNS_APPEND_NAME_ONLY_TO_MULTIPLE_LABEL_NAME_AFTER_FAILURE", 552 },
	{ "GETDNS_APPEND_NAME_ONLY_TO_SINGLE_LABEL_AFTER_FAILURE", 551 },
	{ "GETDNS_APPEND_NAME_TO_SINGLE_LABEL_FIRST", 554 },
	{ "GETDNS_AUTHENTICATION_NONE", 1300 },
	{ "GETDNS_AUTHENTICATION_REQUIRED", 1301 },
	{ "GETDNS_BAD_DNS_ALL_NUMERIC_LABEL", 1101 },
	{ "GETDNS_BAD_DNS_CNAME_IN_TARGET", 1100 },
	{ "GETDNS_BAD_DNS_CNAME_RETURNED_FOR_OTHER_TYPE", 1102 },
	{ "GETDNS_CALLBACK_CANCEL", 701 },
	{ "GETDNS_CALLBACK_COMPLETE", 700 },
	{ "GETDNS_CALLBACK_ERROR", 703 },
	{ "GETDNS_CALLBACK_TIMEOUT", 702 },
	{ "GETDNS_CONTEXT_CODE_APPEND_NAME", 607 },
	{ "GETDNS_CONTEXT_CODE_DNSSEC_ALLOWED_SKEW", 614 },
	{ "GETDNS_CONTEXT_CODE_DNSSEC_TRUST_ANCHORS", 609 },
	{ "GETDNS_CONTEXT_CODE_DNS_ROOT_SERVERS", 604 },
	{ "GETDNS_CONTEXT_CODE_DNS_TRANSPORT", 605 },
	{ "GETDNS_CONTEXT_CODE_EDNS_CLIENT_SUBNET_PRIVATE", 619 },
	{ "GETDNS_CONTEXT_CODE_EDNS_DO_BIT", 613 },
	{ "GETDNS_CONTEXT_CODE_EDNS_EXTENDED_RCODE", 611 },
	{ "GETDNS_CONTEXT_CODE_EDNS_MAXIMUM_UDP_PAYLOAD_SIZE", 610 },
	{ "GETDNS_CONTEXT_CODE_EDNS_VERSION", 612 },
	{ "GETDNS_CONTEXT_CODE_FOLLOW_REDIRECTS", 602 },
	{ "GETDNS_CONTEXT_CODE_IDLE_TIMEOUT", 617 },
	{ "GETDNS_CONTEXT_CODE_LIMIT_OUTSTANDING_QUERIES", 606 },
	{ "GETDNS_CONTEXT_CODE_MEMORY_FUNCTIONS", 615 },
	{ "GETDNS_CONTEXT_CODE_NAMESPACES", 600 },
	{ "GETDNS_CONTEXT_CODE_PUBKEY_PINSET", 621 },
	{ "GETDNS_CONTEXT_CODE_RESOLUTION_TYPE", 601 },
	{ "GETDNS_CONTEXT_CODE_SUFFIX", 608 },
	{ "GETDNS_CONTEXT_CODE_TIMEOUT", 616 },
	{ "GETDNS_CONTEXT_CODE_TLS_AUTHENTICATION", 618 },
	{ "GETDNS_CONTEXT_CODE_TLS_QUERY_PADDING_BLOCKSIZE", 620 },
	{ "GETDNS_CONTEXT_CODE_TLS_USE_ALL_UPSTREAMS", 622 },
	{ "GETDNS_CONTEXT_CODE_UPSTREAM_RECURSIVE_SERVERS", 603 },
	{ "GETDNS_DNSSEC_BOGUS", 401 },
	{ "GETDNS_DNSSEC_INDETERMINATE", 402 },
	{ "GETDNS_DNSSEC_INSECURE", 403 },
	{ "GETDNS_DNSSEC_NOT_PERFORMED", 404 },
	{ "GETDNS_DNSSEC_SECURE", 400 },
	{ "GETDNS_EXTENSION_FALSE", 1001 },
	{ "GETDNS_EXTENSION_TRUE", 1000 },
	{ "GETDNS_NAMESPACE_DNS", 500 },
	{ "GETDNS_NAMESPACE_LOCALNAMES", 501 },
	{ "GETDNS_NAMESPACE_MDNS", 503 },
	{ "GETDNS_NAMESPACE_NETBIOS", 502 },
	{ "GETDNS_NAMESPACE_NIS", 504 },
	{ "GETDNS_NAMETYPE_DNS", 800 },
	{ "GETDNS_NAMETYPE_WINS", 801 },
	{ "GETDNS_OPCODE_IQUERY", 1 },
	{ "GETDNS_OPCODE_NOTIFY", 4 },
	{ "GETDNS_OPCODE_QUERY", 0 },
	{ "GETDNS_OPCODE_STATUS", 2 },
	{ "GETDNS_OPCODE_UPDATE", 5 },
	{ "GETDNS_RCODE_BADALG", 21 },
	{ "GETDNS_RCODE_BADKEY", 17 },
	{ "GETDNS_RCODE_BADMODE", 19 },
	{ "GETDNS_RCODE_BADNAME", 20 },
	{ "GETDNS_RCODE_BADSIG", 16 },
	{ "GETDNS_RCODE_BADTIME", 18 },
	{ "GETDNS_RCODE_BADTRUNC", 22 },
	{ "GETDNS_RCODE_BADVERS", 16 },
	{ "GETDNS_RCODE_COOKIE", 23 },
	{ "GETDNS_RCODE_FORMERR", 1 },
	{ "GETDNS_RCODE_NOERROR", 0 },
	{ "GETDNS_RCODE_NOTAUTH", 9 },
	{ "GETDNS_RCODE_NOTIMP", 4 },
	{ "GETDNS_RCODE_NOTZONE", 10 },
	{ "GETDNS_RCODE_NXDOMAIN", 3 },
	{ "GETDNS_RCODE_NXRRSET", 8 },
	{ "GETDNS_RCODE_REFUSED", 5 },
	{ "GETDNS_RCODE_SERVFAIL", 2 },
	{ "GETDNS_RCODE_YXDOMAIN", 6 },
	{ "GETDNS_RCODE_YXRRSET", 7 },
	{ "GETDNS_REDIRECTS_DO_NOT_FOLLOW", 531 },
	{ "GETDNS_REDIRECTS_FOLLOW", 530 },
	{ "GETDNS_RESOLUTION_RECURSING", 521 },
	{ "GETDNS_RESOLUTION_STUB", 520 },
	{ "GETDNS_RESPSTATUS_ALL_BOGUS_ANSWERS", 904 },
	{ "GETDNS_RESPSTATUS_ALL_TIMEOUT", 902 },
	{ "GETDNS_RESPSTATUS_GOOD", 900 },
	{ "GETDNS_RESPSTATUS_NO_NAME", 901 },
	{ "GETDNS_RESPSTATUS_NO_SECURE_ANSWERS", 903 },
	{ "GETDNS_RETURN_BAD_CONTEXT", 301 },
	{ "GETDNS_RETURN_BAD_DOMAIN_NAME", 300 },
	{ "GETDNS_RETURN_CONTEXT_UPDATE_FAIL", 302 },
	{ "GETDNS_RETURN_DNSSEC_WITH_STUB_DISALLOWED", 309 },
	{ "GETDNS_RETURN_EXTENSION_MISFORMAT", 308 },
	{ "GETDNS_RETURN_GENERIC_ERROR", 1 },
	{ "GETDNS_RETURN_GOOD", 0 },
	{ "GETDNS_RETURN_INVALID_PARAMETER", 311 },
	{ "GETDNS_RETURN_MEMORY_ERROR", 310 },
	{ "GETDNS_RETURN_NEED_MORE_SPACE", 399 },
	{ "GETDNS_RETURN_NOT_IMPLEMENTED", 312 },
	{ "GETDNS_RETURN_NO_SUCH_DICT_NAME", 305 },
	{ "GETDNS_RETURN_NO_SUCH_EXTENSION", 307 },
	{ "GETDNS_RETURN_NO_SUCH_LIST_ITEM", 304 },
	{ "GETDNS_RETURN_NO_UPSTREAM_AVAILABLE", 398 },
	{ "GETDNS_RETURN_UNKNOWN_TRANSACTION", 303 },
	{ "GETDNS_RETURN_WRONG_TYPE_REQUESTED", 306 },
	{ "GETDNS_RRCLASS_ANY", 255 },
	{ "GETDNS_RRCLASS_CH", 3 },
	{ "GETDNS_RRCLASS_HS", 4 },
	{ "GETDNS_RRCLASS_IN", 1 },
	{ "GETDNS_RRCLASS_NONE", 254 },
	{ "GETDNS_RRTYPE_A", 1 },
	{ "GETDNS_RRTYPE_AAAA", 28 },
	{ "GETDNS_RRTYPE_AFSDB", 18 },
	{ "GETDNS_RRTYPE_ANY", 255 },
	{ "GETDNS_RRTYPE_APL", 42 },
	{ "GETDNS_RRTYPE_ATMA", 34 },
	{ "GETDNS_RRTYPE_AXFR", 252 },
	{ "GETDNS_RRTYPE_CAA", 257 },
	{ "GETDNS_RRTYPE_CDNSKEY", 60 },
	{ "GETDNS_RRTYPE_CDS", 59 },
	{ "GETDNS_RRTYPE_CERT", 37 },
	{ "GETDNS_RRTYPE_CNAME", 5 },
	{ "GETDNS_RRTYPE_CSYNC", 62 },
	{ "GETDNS_RRTYPE_DHCID", 49 },
	{ "GETDNS_RRTYPE_DLV", 32769 },
	{ "GETDNS_RRTYPE_DNAME", 39 },
	{ "GETDNS_RRTYPE_DNSKEY", 48 },
	{ "GETDNS_RRTYPE_DS", 43 },
	{ "GETDNS_RRTYPE_EID", 31 },
	{ "GETDNS_RRTYPE_GID", 102 },
	{ "GETDNS_RRTYPE_GPOS", 27 },
	{ "GETDNS_RRTYPE_HINFO", 13 },
	{ "GETDNS_RRTYPE_HIP", 55 },
	{ "GETDNS_RRTYPE_IPSECKEY", 45 },
	{ "GETDNS_RRTYPE_ISDN", 20 },
	{ "GETDNS_RRTYPE_IXFR", 251 },
	{ "GETDNS_RRTYPE_KEY", 25 },
	{ "GETDNS_RRTYPE_KX", 36 },
	{ "GETDNS_RRTYPE_LOC", 29 },
	{ "GETDNS_RRTYPE_LP", 107 },
	{ "GETDNS_RRTYPE_MAILA", 254 },
	{ "GETDNS_RRTYPE_MAILB", 253 },
	{ "GETDNS_RRTYPE_MB", 7 },
	{ "GETDNS_RRTYPE_MD", 3 },
	{ "GETDNS_RRTYPE_MF", 4 },
	{ "GETDNS_RRTYPE_MG", 8 },
	{ "GETDNS_RRTYPE_MINFO", 14 },
	{ "GETDNS_RRTYPE_MR", 9 },
	{ "GETDNS_RRTYPE_MX", 15 },
	{ "GETDNS_RRTYPE_NAPTR", 35 },
	{ "GETDNS_RRTYPE_NID", 104 },
	{ "GETDNS_RRTYPE_NIMLOC", 32 },
	{ "GETDNS_RRTYPE_NINFO", 56 },
	{ "GETDNS_RRTYPE_NS", 2 },
	{ "GETDNS_RRTYPE_NSAP", 22 },
	{ "GETDNS_RRTYPE_NSEC", 47 },
	{ "GETDNS_RRTYPE_NULL", 10 },
	{ "GETDNS_RRTYPE_NXT", 30 },
	{ "GETDNS_RRTYPE_OPENPGPKEY", 61 },
	{ "GETDNS_RRTYPE_OPT", 41 },
	{ "GETDNS_RRTYPE_PTR", 12 },
	{ "GETDNS_RRTYPE_PX", 26 },
	{ "GETDNS_RRTYPE_RKEY", 57 },
	{ "GETDNS_RRTYPE_RP", 17 },
	{ "GETDNS_RRTYPE_RRSIG", 46 },
	{ "GETDNS_RRTYPE_RT", 21 },
	{ "GETDNS_RRTYPE_SIG", 24 },
	{ "GETDNS_RRTYPE_SINK", 40 },
	{ "GETDNS_RRTYPE_SOA", 6 },
	{ "GETDNS_RRTYPE_SPF", 99 },
	{ "GETDNS_RRTYPE_SRV", 33 },
	{ "GETDNS_RRTYPE_SSHFP", 44 },
	{ "GETDNS_RRTYPE_TA", 32768 },
	{ "GETDNS_RRTYPE_TALINK", 58 },
	{ "GETDNS_RRTYPE_TKEY", 249 },
	{ "GETDNS_RRTYPE_TLSA", 52 },
	{ "GETDNS_RRTYPE_TSIG", 250 },
	{ "GETDNS_RRTYPE_TXT", 16 },
	{ "GETDNS_RRTYPE_UID", 101 },
	{ "GETDNS_RRTYPE_UINFO", 100 },
	{ "GETDNS_RRTYPE_UNSPEC", 103 },
	{ "GETDNS_RRTYPE_URI", 256 },
	{ "GETDNS_RRTYPE_WKS", 11 },
	{ "GETDNS_TRANSPORT_TCP", 1201 },
	{ "GETDNS_TRANSPORT_TCP_ONLY", 542 },
	{ "GETDNS_TRANSPORT_TCP_ONLY_KEEP_CONNECTIONS_OPEN", 543 },
	{ "GETDNS_TRANSPORT_TLS", 1202 },
	{ "GETDNS_TRANSPORT_TLS_FIRST_AND_FALL_BACK_TO_TCP_KEEP_CONNECTIONS_OPEN", 545 },
	{ "GETDNS_TRANSPORT_TLS_ONLY_KEEP_CONNECTIONS_OPEN", 544 },
	{ "GETDNS_TRANSPORT_UDP", 1200 },
	{ "GETDNS_TRANSPORT_UDP_FIRST_AND_FALL_BACK_TO_TCP", 540 },
	{ "GETDNS_TRANSPORT_UDP_ONLY", 541 },
};

static int const_name_info_cmp(const void *a, const void *b)
{
	return strcmp( ((struct const_name_info *) a)->name
	             , ((struct const_name_info *) b)->name );
}

int
_getdns_get_const_name_info(const char *name, uint32_t *code)
{
	struct const_name_info key = { name, 0 };
	struct const_name_info *i = bsearch(&key, consts_name_info,
	    sizeof(consts_name_info) / sizeof(struct const_name_info),
	    sizeof(struct const_name_info), const_name_info_cmp);
	if (!i)
		return 0;
	if (code)
		*code = i->code;
	return 1;
}
