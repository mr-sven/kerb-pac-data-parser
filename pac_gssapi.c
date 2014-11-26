/*
 * Copyright (C) 2014 Sven Fabricius <sven.fabricius{at}livediesel[dot]de>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 */

#include <gssapi/gssapi.h>
#include <gssapi/gssapi_krb5.h>

#include <stdio.h>

int gssapi_obtain_pac(OM_uint32 * gss_min, gss_ctx_id_t ctx, gss_name_t client_name, gss_buffer_desc *pac_buffer)
{
    OM_uint32 gss_maj;

    gss_buffer_desc pac_display_buffer = {
        .value = NULL,
        .length = 0
    };
    gss_buffer_desc pac_name = {
        .value = (void *)((uintptr_t)("urn:mspac:")),
        .length = sizeof("urn:mspac:")-1
    };

    int more = -1;
    int authenticated = 0;
    int complete = 0;

    gss_maj = gss_get_name_attribute(gss_min, client_name, &pac_name, &authenticated, &complete, pac_buffer, &pac_display_buffer, &more);
    if (gss_maj != 0)
    {
        return gss_maj;
    }
    else if (authenticated && complete)
    {
        gss_maj = gss_release_buffer(gss_min, &pac_display_buffer);
    }
    else
    {
        return gss_maj;
    }
    return 0;
}
