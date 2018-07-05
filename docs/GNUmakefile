
VER=	$(shell grep 'define NGINX_VERSION' src/core/nginx.h		\
		| sed -e 's/^.*"\(.*\)".*/\1/')
NGINX=	nginx-$(VER)
TEMP=	tmp
<<<<<<< HEAD
XSLS?=	xslscript.pl
=======
CP=	$(HOME)/java
>>>>>>> 8889e00f335b588a51a2d1f0e5352b3ef5a4dff9


all:		changes

changes:	$(TEMP)/$(NGINX)/CHANGES.ru				\
		$(TEMP)/$(NGINX)/CHANGES


$(TEMP)/$(NGINX)/CHANGES.ru:	docs/dtd/changes.dtd			\
				docs/xml/nginx/changes.xml		\
				docs/xml/change_log_conf.xml		\
				docs/xslt/changes.xslt

	mkdir -p $(TEMP)/$(NGINX)

	xmllint --noout --valid docs/xml/nginx/changes.xml
	xsltproc --stringparam lang ru					\
		-o $@ docs/xslt/changes.xslt docs/xml/nginx/changes.xml


$(TEMP)/$(NGINX)/CHANGES:	docs/dtd/changes.dtd			\
				docs/xml/nginx/changes.xml		\
				docs/xml/change_log_conf.xml		\
				docs/xslt/changes.xslt

	mkdir -p $(TEMP)/$(NGINX)

	xmllint --noout --valid docs/xml/nginx/changes.xml
	xsltproc --stringparam lang en					\
		-o $@ docs/xslt/changes.xslt docs/xml/nginx/changes.xml
<<<<<<< HEAD
=======

>>>>>>> 8889e00f335b588a51a2d1f0e5352b3ef5a4dff9

docs/xslt/changes.xslt:		docs/xsls/changes.xsls docs/xsls/dump.xsls

	java -cp $(CP)/xsls/saxon.jar:$(CP)/xsls/xsls.jar		\
		com.pault.StyleSheet					\
		-x com.pault.XX -y com.pault.XX				\
		$< docs/xsls/dump.xsls					\
	| sed 's/ *$$//;/^ *$$/N;/\n *$$/D' > $@

<<<<<<< HEAD
	$(XSLS) -o $@ $<
=======
	if [ ! -s $@ ]; then rm $@; fi; test -s $@
>>>>>>> 8889e00f335b588a51a2d1f0e5352b3ef5a4dff9
