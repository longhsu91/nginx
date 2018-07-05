
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */


#ifndef _NGINX_H_INCLUDED_
#define _NGINX_H_INCLUDED_


<<<<<<< HEAD
#define nginx_version      1015001
#define NGINX_VERSION      "1.15.1"
=======
#define nginx_version      1002009
#define NGINX_VERSION      "1.2.9"
>>>>>>> 8889e00f335b588a51a2d1f0e5352b3ef5a4dff9
#define NGINX_VER          "nginx/" NGINX_VERSION

#ifdef NGX_BUILD
#define NGINX_VER_BUILD    NGINX_VER " (" NGX_BUILD ")"
#else
#define NGINX_VER_BUILD    NGINX_VER
#endif

#define NGINX_VAR          "NGINX"
#define NGX_OLDPID_EXT     ".oldbin"


#endif /* _NGINX_H_INCLUDED_ */
