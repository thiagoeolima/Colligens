int test(){

	return stat1->st_ino   == stat2->st_ino && stat1->st_dev   == stat2->st_dev
	#ifdef NO_ST_INO
	        /* Can't rely on st_ino and st_dev, use other fields: */
		&& stat1->st_mode  == stat2->st_mode && stat1->st_uid   == stat2->st_uid && stat1->st_gid   == stat2->st_gid && stat1->st_size  == stat2->st_size && stat1->st_atime == stat2->st_atime && stat1->st_mtime == stat2->st_mtime && stat1->st_ctime == stat2->st_ctime
	#endif
		    ;

}
