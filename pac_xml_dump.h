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

#ifndef PAC_XML_DUMP_H_
#define PAC_XML_DUMP_H_

#define PAC_DUMP_OK                                       0

/* NET_USER_INFO_3 version mismatch */
#define PAC_DUMP_USER_INFO_VERSION_MISMATCH               -1

/* NET_USER_INFO_3 endianess mismatch */
#define PAC_DUMP_USER_INFO_ENDIANESS_MISMATCH             -2

/* NET_USER_INFO_3 common header length mismatch */
#define PAC_DUMP_USER_INFO_COMMON_HEADER_LENGTH_MISMATCH  -3

/* NET_USER_INFO_3 filler mismatch */
#define PAC_DUMP_USER_INFO_FILLER_MISMATCH                -4

/* Unable to open file */
#define PAC_DUMP_UNABLE_TO_OPEN_FILE                      -5

int pac_to_xml_file(size_t length, void *buffer, const char *filename, int32_t cache_time);

#endif /* PAC_XML_DUMP_H_ */
