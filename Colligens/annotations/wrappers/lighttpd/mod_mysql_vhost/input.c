int test(){

#ifdef MYSQL_VERSION_ID
if (!mysql_real_connect(s->mysql, FOO(hostname), FOO(myuser), FOO(mypass),
						FOO(mydb), s->port, FOO(mysock), CLIENT_MULTI_STATEMENTS)) {
#else
			if (!mysql_real_connect(s->mysql, FOO(hostname), FOO(myuser), FOO(mypass),
						FOO(mydb), s->port, FOO(mysock), 0)) {
#endif
				log_error_write(srv, __FILE__, __LINE__, "s", mysql_error(s->mysql));

				return HANDLER_ERROR;
			}


}
