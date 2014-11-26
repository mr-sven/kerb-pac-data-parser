Patch for Apache mod_auth_kerb-5.4
==================================

This patch adds support to export the Privilege Attribute Certificate, which is shipped via Kerberos Header.

* [A Generalized PAC for Kerberos V5](https://tools.ietf.org/id/draft-sorce-krbwg-general-pac-02.txt)
* [Privilege Attribute Certificate Data Structure](http://msdn.microsoft.com/en-us/library/cc237917.aspx)

The result will be a XML file containing the PAC data.


Configuration reference
-----------------------

    KrbPacDump [on|off] : this will enable the parsing of the pac data
	
    KrbPacCacheDir [path + trailing slash] : the path where to cache the PAC XML (default: /tmp/)
	
    KrbPacCacheTime [number] : time in seconds, were the cache file will not be updated, to save performance (default: 1 hour - 3600 seconds)
	
Parameter reference
-----------------------

This patch will return also a Server Variable `KRB5PACNAME? which contains the full path to the XML file.