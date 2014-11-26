Patch for spnego-http-auth-nginx-module NGINX Module
====================================================

This patch adds support to export the Privilege Attribute Certificate, which is shipped via Kerberos Header.

* [A Generalized PAC for Kerberos V5](https://tools.ietf.org/id/draft-sorce-krbwg-general-pac-02.txt)
* [Privilege Attribute Certificate Data Structure](http://msdn.microsoft.com/en-us/library/cc237917.aspx)

The result will be a XML file containing the PAC data.


Configuration reference
-----------------------

    auth_gss_pac [on|off] : this will enable the parsing of the pac data
	
    auth_gss_pac_cache_dir [path + trailing slash] : the path where to cache the PAC XML (default: /tmp/)
	
    auth_gss_pac_cache_time [number] : time in seconds, were the cache file will not be updated, to save performance (default: 1 hour - 3600 seconds)
	