/**
 * @file demo.h  Baresip WebRTC demo
 *
 * Copyright (C) 2010 Alfred E. Heggestad
 */


/*
 * NOTE: API under development
 */


/*
 * Demo
 */

int  demo_init(const char *ice_server,
	       const char *stun_user, const char *stun_pass);
void demo_close(void);
