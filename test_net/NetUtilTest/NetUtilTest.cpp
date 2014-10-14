#include <iostream>
#include "net/NetUtil.h"
using namespace std;

int main()
{
	printf("is little endian: %d\n",   zl::net::NetUtil::IsLittleEndian());
	printf("is valid ipaddress: %d\n", zl::net::NetUtil::IsValidIpv4("1.2.3.4"));
	printf("is valid ipaddress: %d\n", zl::net::NetUtil::IsValidIpv4("1x.2.3.4"));
	printf("is valid ipaddress: %d\n", zl::net::NetUtil::IsValidIpv4("11711.2.3.4"));
	printf("is valid ipaddress: %d\n", zl::net::NetUtil::IsValidIpv4("11.2.3.4345"));
	return 0;
}
