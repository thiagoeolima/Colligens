int test () {

int test;

#if defined(APR_USE_FLOCK_SERIALIZE)
test = (mech != APR_LOCK_FLOCK && mech != APR_LOCK_FCNTL && mech != APR_LOCK_DEFAULT);
#endif

#if !defined(APR_USE_FLOCK_SERIALIZE)
test = (mech != APR_LOCK_FLOCK && mech != APR_LOCK_FCNTL);
#endif

if ((test)){

return 0;
}
}
