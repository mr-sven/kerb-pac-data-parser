Kerberos Privilege Attribute Certificate for Apache or NGINX
====================

Implementation of a PAC parser using GSSAPI.
It contains two paches one for Apache mod_auth_kerb-5.4 and one for [stnoonan/spnego-http-auth-nginx-module](https://github.com/stnoonan/spnego-http-auth-nginx-module).

* [A Generalized PAC for Kerberos V5](https://tools.ietf.org/id/draft-sorce-krbwg-general-pac-02.txt)
* [Privilege Attribute Certificate Data Structure](http://msdn.microsoft.com/en-us/library/cc237917.aspx)

The result will be a XML file containing the PAC data.
