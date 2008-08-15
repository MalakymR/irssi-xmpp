/* $Id$ */

#ifndef __PROTOCOL_H
#define __PROTOCOL_H

#include "xmpp-servers.h"

__BEGIN_DECLS
void	xmpp_send_message(XMPP_SERVER_REC *, const char *, const char *);

void	xmpp_protocol_init(void);
void	xmpp_protocol_deinit(void);
__END_DECLS

#endif
