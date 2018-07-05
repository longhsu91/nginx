
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */


#include <ngx_config.h>
#include <ngx_core.h>


#if (NGX_CRYPT)

#if (NGX_HAVE_GNU_CRYPT_R)

ngx_int_t
ngx_libc_crypt(ngx_pool_t *pool, u_char *key, u_char *salt, u_char **encrypted)
{
    char               *value;
    size_t              len;
    struct crypt_data   cd;

    cd.initialized = 0;

    value = crypt_r((char *) key, (char *) salt, &cd);

    if (value) {
        len = ngx_strlen(value) + 1;

        *encrypted = ngx_pnalloc(pool, len);
        if (*encrypted == NULL) {
            return NGX_ERROR;
        }

        ngx_memcpy(*encrypted, value, len);
        return NGX_OK;
    }

    ngx_log_error(NGX_LOG_CRIT, pool->log, ngx_errno, "crypt_r() failed");

    return NGX_ERROR;
}

#else

ngx_int_t
ngx_libc_crypt(ngx_pool_t *pool, u_char *key, u_char *salt, u_char **encrypted)
{
    char       *value;
    size_t      len;
    ngx_err_t   err;

<<<<<<< HEAD
=======
#if (NGX_THREADS && NGX_NONREENTRANT_CRYPT)

    /* crypt() is a time consuming function, so we only try to lock */

    if (ngx_mutex_trylock(ngx_crypt_mutex) != NGX_OK) {
        return NGX_AGAIN;
    }

#endif

>>>>>>> 8889e00f335b588a51a2d1f0e5352b3ef5a4dff9
    value = crypt((char *) key, (char *) salt);

    if (value) {
        len = ngx_strlen(value) + 1;

        *encrypted = ngx_pnalloc(pool, len);
        if (*encrypted == NULL) {
<<<<<<< HEAD
=======
#if (NGX_THREADS && NGX_NONREENTRANT_CRYPT)
            ngx_mutex_unlock(ngx_crypt_mutex);
#endif
>>>>>>> 8889e00f335b588a51a2d1f0e5352b3ef5a4dff9
            return NGX_ERROR;
        }

        ngx_memcpy(*encrypted, value, len);
<<<<<<< HEAD
=======
#if (NGX_THREADS && NGX_NONREENTRANT_CRYPT)
        ngx_mutex_unlock(ngx_crypt_mutex);
#endif
>>>>>>> 8889e00f335b588a51a2d1f0e5352b3ef5a4dff9
        return NGX_OK;
    }

    err = ngx_errno;

    ngx_log_error(NGX_LOG_CRIT, pool->log, err, "crypt() failed");

    return NGX_ERROR;
}

#endif

#endif /* NGX_CRYPT */
