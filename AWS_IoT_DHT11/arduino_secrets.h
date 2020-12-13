// Fill in  your WiFi networks SSID and password
#define SECRET_SSID "mjhotspot"
#define SECRET_PASS "12345678a"

// Fill in the hostname of your AWS IoT broker
#define SECRET_BROKER "a1prrcg7mqxhp6-ats.iot.ap-northeast-2.amazonaws.com"

// Fill in the boards public certificate
const char SECRET_CERTIFICATE[] = R"(
-----BEGIN CERTIFICATE-----
MIICiTCCAXGgAwIBAgIUMPtZqBnN7yFn4lRsHNdIMUxBtiowDQYJKoZIhvcNAQEL
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g
SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIwMTIwOTE3MjM1
NVoXDTQ5MTIzMTIzNTk1OVowGTEXMBUGA1UEAxMOTXlNS1JXaUZpMTAxMCAwWTAT
BgcqhkjOPQIBBggqhkjOPQMBBwNCAAR/EN+0Ep14Nk4e3L4qBbe4Dgm7Oo6wsuqC
Mba1slOAZBkDZltgythMBZRMIUP42IW8ET5JfwA0gl04G2cV+JZLo2AwXjAfBgNV
HSMEGDAWgBTmpb/6v9fcwdd7MnIVWZ/Q4akKvTAdBgNVHQ4EFgQUM8j6ARRE1/Uw
ePbJSSWtGjT1nWswDAYDVR0TAQH/BAIwADAOBgNVHQ8BAf8EBAMCB4AwDQYJKoZI
hvcNAQELBQADggEBANXT3qN5VRm0ATZg2CiKSoANP14FpM+GvcLToISdM0tRiaFh
1nA2CthEs8U9vH3WaBHhr9HWF4faPK7E7cIzPnQEyXh1pUl1oXtZSn5xm+A2wB71
/jvhziAEaykcx++aozz+/cnaZOKOZTe5Md+jmeu6/+bYcy9ErDg1KXyPLsMud4ml
Yh7Vr2sRnxklumVjHys3F9H0znN1i7tr1L0r8Vui+8QjQsWACTPYJEshWz3nXJZ3
2iw/jWLiKihE+m0ucXRnUTpD6gzELkg0TPj+uliBA4qSlz7+n84PtUJ5Bg48bDCJ
ILBKPWMq9RbC+BMKjX+T+arx4tacJZUb1DPEFJI=
-----END CERTIFICATE-----
)";
