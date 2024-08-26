const char ssid[] = "Mad68_Testing";
const char pass[] = "td546MMMsXUsuXJyGYB4";

const char* TKid = "M9T2_b3c23d40b4b076f";

const char* serverCA = R"EOF(-----BEGIN CERTIFICATE-----
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy
rqXRfboQnoZsG4q5WTP468SQvvG5
-----END CERTIFICATE-----
)EOF";

const char* clientCert = R"KEY(-----BEGIN CERTIFICATE-----
MIIE2jCCAsICFCjAl/BnFSRfOYgkrY3rBpyvjkXlMA0GCSqGSIb3DQEBCwUAMIGr
MQswCQYDVQQGEwJFUzEPMA0GA1UECAwGTWFkcmlkMRkwFwYDVQQHDBBDb2xsYWRv
IFZpbGxhbGJhMREwDwYDVQQKDAhNYWQ2OCZDbzEXMBUGA1UECwwOQ2liZXJzZWd1
cmlkYWQxHTAbBgNVBAMMFE1vZHVsbyBTZWd1cmlkYWQgSW9UMSUwIwYJKoZIhvcN
AQkBFhZtYWQ2OG5ldHdvcmtAZ21haWwuY29tMB4XDTI0MDgyNTExMTEwM1oXDTI1
MDgyNTExMTEwM1owgaYxCzAJBgNVBAYTAkVTMQ8wDQYDVQQIDAZNYWRyaWQxGTAX
BgNVBAcMEENvbGxhZG8gVmlsbGFsYmExETAPBgNVBAoMCE1hZDY4JkNvMRcwFQYD
VQQLDA5MYWJvcmF0b3J5X1RGTTEYMBYGA1UEAwwPYjNjMjNkNDBiNGIwNzZmMSUw
IwYJKoZIhvcNAQkBFhZtYWQ2OG5ldHdvcmtAZ21haWwuY29tMIIBIjANBgkqhkiG
9w0BAQEFAAOCAQ8AMIIBCgKCAQEA5w4C4z6UQNaPI+b0v2AH0BRG9yXvxOiW/STZ
m81YBzvCsRK8mAMdnkY2QA3YMRv2zPd7jcOZN2bQSuc2TamV1UzlDb0a1A8UZQEn
lJ6l3RZ3RKvsEyUudzPJsyA33U99TPHML8+EUnarkJnZggarJABozQ9FcB7UeQES
0CtIJ7fso5uIc/gAJNeyMa+ohPbSh8vrVzphG2A1E8tsbcHGUnDJ27IicIBhpPc7
IG7nuilBMl7XM43mnjMv+nZTjOWUPh4ygbheEV2bRAuAuDBflnumcbtVD7nsDP5s
bitQN0Oo0hE7rd++lRqES+PMVfwj7uyS4FthEv6Ibrc4cxcoTQIDAQABMA0GCSqG
SIb3DQEBCwUAA4ICAQAbiTVmdcaOHIzIlDKS/AYFuFuutpKIvLJLYl6cU/QP0kZY
BFxQRh/JhuzzdK6k/CECypIY1TUelDJzzeQnpmqcZQqEgJzO1BBtvr1/AghudlMu
jOCmL9hd5oDTaDoStAFiuXhB7OrJqoY3lB5TH0Ve7coVpH6S3yAX2ncdN2Xc8qut
T89qVoT7U0q+lgVwZPyl0TjsLJeBjLZl4xPNObIkCzZ/6CxiZjEJUNttzP7jsjGb
+wvpL2RCAITHk3Fnj1p9OLxavmE6czeNY0SNIVrLp+ndsM6ItI0dejmhugvGN1h2
vL6AOXi84LolFIr19bhbX4MVH8/TT3Egy6KuR2xD6Su5xERIW6R2rlyzFikGcuMm
ikd4RVllonBHPhzhVUlWL3dcDDCtHNnADMsKd2NtK1JQNszMIEod42SMJ3+comPf
ckg9Do8FzWtJCnPuKV2OBg42FyBpjueLaUI+kAq7PdPvTV58QsAh4SorrQqdILmJ
6FG7kVQh0oPuqx24VpU1/n1Bdy4Xvl8/wjLWXqJ2kNe0LX8tCAwmYAzHyWUsj9qO
Z3metFL/LeLa+5UIf841JrD7r9RBr3uYpkco/FygMe/LKnNJIqMm/GKX9yYSM/nO
n702TuDRU/FJZq1YmNgy3JH7cfK/ka0vplp437FyOoufEFO2osiL1vbbIStNfQ==
-----END CERTIFICATE-----
-----BEGIN CERTIFICATE-----
MIIGOTCCBCGgAwIBAgIUc0miQf9lJra7yWBf3IAO/BXzvkkwDQYJKoZIhvcNAQEL
BQAwgasxCzAJBgNVBAYTAkVTMQ8wDQYDVQQIDAZNYWRyaWQxGTAXBgNVBAcMEENv
bGxhZG8gVmlsbGFsYmExETAPBgNVBAoMCE1hZDY4JkNvMRcwFQYDVQQLDA5DaWJl
cnNlZ3VyaWRhZDEdMBsGA1UEAwwUTW9kdWxvIFNlZ3VyaWRhZCBJb1QxJTAjBgkq
hkiG9w0BCQEWFm1hZDY4bmV0d29ya0BnbWFpbC5jb20wHhcNMjQwNTMxMDg0NTQ2
WhcNNDQwNTI2MDg0NTQ2WjCBqzELMAkGA1UEBhMCRVMxDzANBgNVBAgMBk1hZHJp
ZDEZMBcGA1UEBwwQQ29sbGFkbyBWaWxsYWxiYTERMA8GA1UECgwITWFkNjgmQ28x
FzAVBgNVBAsMDkNpYmVyc2VndXJpZGFkMR0wGwYDVQQDDBRNb2R1bG8gU2VndXJp
ZGFkIElvVDElMCMGCSqGSIb3DQEJARYWbWFkNjhuZXR3b3JrQGdtYWlsLmNvbTCC
AiIwDQYJKoZIhvcNAQEBBQADggIPADCCAgoCggIBAJ2vV81WLqAn8XpNnBoKKFyf
7XPsg3dW4m7NhBKMdi2dXttw4HzGwXaC3aJme7gEPPV0y9iWcP0wInP/12lCwonT
1aVv53cd25rQ/96FKNdodpIICJ/dhHEG0f9fNzCXN3IkWz8pZNaFWFA0CeMfrF6K
5cC5A01J1ES/wAqLBvXgrwFvHHyLtgwwHBTIfZ96U/13K3vzHHTbiq76wQflMeOV
lXE/lEmFLhy2NRRV5kjECteK3MXDQX6OgPGX9zOTPOlC8e5AzTY2ldMpmr38Rs3u
Mv74mURA5Wd3zsVW/NP2M4nh5s9Jlmv+ceqN0zn0bbvjVavRClD50jSb3bXlnf2w
hp9XXnKsuoOBMnyeIe9AmElZ2CwRsbMVDbuaR+MddAcdQRtkspK3VpmiKFq4fUyB
cLajkmYZdoH5uNGGcIsN4E2jZI8p3wuZq/Nr8BtHVjpx+6xV9suKHXONSqypEfR6
QbhiBI2fzZ9qHur5ipkOTJuSGJOYG/iDHymEYYxmFPI2DgVmgJMzLSlSA7wPXPHE
Ymqu/FiaSMKclHgugiAI7DFVz/PnnjsoQe6a6C89rA8a95mvOJXP+CV4lX42Mp+y
JLTC1FOFJiXuuHzYtEJcTwJua4HgIyg0zjeiK8jv8x97D7mPYlF8RpeG2WrxgQpn
iThnKS7308mciO6EwG+PAgMBAAGjUzBRMB0GA1UdDgQWBBTmpkohP2pbMxl32j+O
W5CN9BbTBzAfBgNVHSMEGDAWgBTmpkohP2pbMxl32j+OW5CN9BbTBzAPBgNVHRMB
Af8EBTADAQH/MA0GCSqGSIb3DQEBCwUAA4ICAQBDUzfn4pIy5vtfQZOsVL2htO7H
QZCFfNsSNHe3ZRWrDZUZ8lp3ZI7JiATbIW1tuXzaXukniZ8Gk0D8Zojm0BUPRpLd
yfXnD+hSOHdd3c+W7+hMjTeVaftoTVdycl4exls8j7DhE6dw7QAfULM/dB8JnYsq
3MgiRQEb/4jUMIesihE3h9HRlSowyyTJgI2vJMILjekB2EJCyCTD2d3GMbmYLFhX
sVAmlTxWium22EZNms2JRlhbWdp+6+nSu/xp6lP/191Fp3cxo605aExERpnpzY2W
R7I9qgIxl7lzYiBe3sqQvHb/4hIQE9S04zqk0QaUreZ/LnTfMAEjkDhEB/HKHlfr
K3QKuiFw4HCX3MO6IKyRM3mDS9p3vASHM/x2nsGKuCHt6KPH9cl1NeOiJzskaQ/Y
uE2CK/1TEjdgCRKmPs8WADmtyp0rJtD8mtE1Zh4HoTsaB0zxvop3byXQ9QeYz3+1
nj5zTuUk6hDoJ+okFFq95Qtez5P8C11wqNi5hIY5RdVx+0aqSPd36PG+9ZU/tCpn
4XJzE8nmJM/zJ5WVocfSCOhiA6d+vWuos6wAal94P0q+bmoyGiUna6hdE/P8TbME
1I9PV1kbAl7R8ejKkqxomyoMw11i17ND/kSX7yxGVwlKfFZgT/at2Dtu4S8S7DbP
hrn486n/O0q270oDuw==
-----END CERTIFICATE-----
)KEY";

const char* clientKey = R"KEY(-----BEGIN PRIVATE KEY-----
MIIEvwIBADANBgkqhkiG9w0BAQEFAASCBKkwggSlAgEAAoIBAQDnDgLjPpRA1o8j
5vS/YAfQFEb3Je/E6Jb9JNmbzVgHO8KxEryYAx2eRjZADdgxG/bM93uNw5k3ZtBK
5zZNqZXVTOUNvRrUDxRlASeUnqXdFndEq+wTJS53M8mzIDfdT31M8cwvz4RSdquQ
mdmCBqskAGjND0VwHtR5ARLQK0gnt+yjm4hz+AAk17Ixr6iE9tKHy+tXOmEbYDUT
y2xtwcZScMnbsiJwgGGk9zsgbue6KUEyXtczjeaeMy/6dlOM5ZQ+HjKBuF4RXZtE
C4C4MF+We6Zxu1UPuewM/mxuK1A3Q6jSETut376VGoRL48xV/CPu7JLgW2ES/ohu
tzhzFyhNAgMBAAECggEAD3uFXwPY/FVERzQZL1+4dk19id8dZ3TsdS8Mc9+5J9bt
z17Bi3AeAnaS+QzUcUn96jMlMNUsBaXajEJdBaw48Y+TA64px47xH2mJ5PASjjOM
r2nTyl6h8/Pg7qNYivhiHY9QTt3ZcIsqKOjeRdO7kRCD9UWyMfam5yrWv2M/FQYh
+QS/4Qq3PqiuGJWZB8SbO0NBS7tDO1H/BIKtjunW94MpAmOpEZ2ryC6fe3e9qfuk
bJ3XSoucjvoPsvfOBZPCiSDCzj3GF4jya8g+d3mBONJxBzWt8nwyfvz+0Ovrna4F
j2QZRR89pJL5ZNj9UuGf7R75sLwDpAbzynmmWkLpYwKBgQDwSORuDzLoEdMAIGsX
prxTqmaVYZiDpcXd5Y/FFgwhP/lEVIki4RZFhGcHxW6MwUSDkkDuZiMop88UfIvN
+LMYocEkwsHDIjOKVwtGO/8ACM4q3rH7HmInlPUHzG5k6Hz1w0SXkcnwKh7vPLk9
tET4rCHGOCps/QnGIA7bF8pH1wKBgQD2KpSKXDlnZCOxf4yy1RjyeGbKK5STeppZ
mXRIYCsOiQ87SYD/BPr6PM/+iRHz3ZCRqAeHmmLHXzKL/5eC2I9lyTugLnJfv1Tb
Vv/sJ2BJ77CymHIgXg20mhw7zSdN6CuBdE9T6bBjQR7aLXxzam0d/A7Aqk6afByV
r+VwKWn8ewKBgQDqAgM9UF4CdsFoISpKuV41mQEYwBh5NWuzA8t1ZFhh1Vzb9/wq
VM2M3Do+7j8Qo3QnMrs7sYrSIENjLzw0Vt2MwpNISsfLUzagps7bErjv/qNSStlI
t7ld1QqhEq38ZhK0gfv+JMRmuY6w7RF2j2aQS4sE8VQYGoJ3SmdNZijgtwKBgQDg
ZFga945sLOBMgJRkv9OJ0y7/w1IgTXY9jqBtCRy2l0GHLa2kyYluadi/kXsH7URH
Qf/7IERCsQiGjWozH+03P4RWs4AWv3Y+qsOHJS2kuBU997CwyIt9wa1S5eOaJLTj
wH4/Y5oiH85b23LCUpU86/MWtSgJsnDsEfb3kwjF2QKBgQCsn6CcarbJFi3ijF9m
OShrZrm+emgxXsz+u8mG6nT44CJZB0f0UCQqDyTKCGoJa8S+8aIphmevbizP2EU1
9PNcTAk9ZA7CPAMkSbrJDYeuSGhT7hJLH5USeTcb6T6oFHGfHmsopeVO/6gBydOX
jOCWFkxY6UG7vRa++h2zshNctw==
-----END PRIVATE KEY-----
)KEY";

