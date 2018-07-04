
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
#define nginx_version      1012002
#define NGINX_VERSION      "1.12.2"
>>>>>>> 72e435241a9351d5140d50975cbb741e4ba8b93f
#define NGINX_VER          "nginx/" NGINX_VERSION

#ifdef NGX_BUILD
#define NGINX_VER_BUILD    NGINX_VER " (" NGX_BUILD ")"
#else
#define NGINX_VER_BUILD    NGINX_VER
#endif

#define NGINX_VAR          "NGINX"
#define NGX_OLDPID_EXT     ".oldbin"


#endif /* _NGINX_H_INCLUDED_ */
