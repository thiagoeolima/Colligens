#define _IO_CURRENTLY_PUTTING 0x800
#define __DBL_MIN_EXP__ (-1021)
#define _IO_peekc_unlocked(_fp) (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) && __underflow (_fp) == EOF ? EOF : *(unsigned char *) (_fp)->_IO_read_ptr)
#define __UINT_LEAST16_MAX__ 65535
#define __ATOMIC_ACQUIRE 2
#define __FLT_MIN__ 1.17549435082228750797e-38F
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define __uid_t_defined 
#define _IO_UNITBUF 020000
#define __bswap_16(x) (__extension__ ({ register unsigned short int __v, __x = (unsigned short int) (x); if (__builtin_constant_p (__x)) __v = __bswap_constant_16 (__x); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))
#define __UINT_LEAST8_TYPE__ unsigned char
#define _T_WCHAR_ 
#define __flexarr []
#define _IO_FLAGS2_USER_WBUF 8
#define __S64_TYPE long int
#define __stub_fchflags 
#define __SQUAD_TYPE long int
#define __INTMAX_C(c) c ## L
#define _BSD_SIZE_T_DEFINED_ 
#define __TIME_T_TYPE __SYSCALL_SLONG_TYPE
#define __CHAR_BIT__ 8
#define __FSWORD_T_TYPE __SYSCALL_SLONG_TYPE
#define _G_HAVE_MREMAP 1
#define makedev(maj,min) gnu_dev_makedev (maj, min)
#define __UINT8_MAX__ 255
#define __WINT_MAX__ 4294967295U
#define __sigset_t_defined 
#define __SIZEOF_PTHREAD_ATTR_T 56
#define stderr stderr
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define __OFF_T_MATCHES_OFF64_T 1
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 18446744073709551615UL
#define __stub_putmsg 
#define __WCHAR_MAX__ 2147483647
#define __WAIT_INT(status) (__extension__ (((union { __typeof(status) __in; int __i; }) { .__in = (status) }).__i))
#define __clock_t_defined 1
#define __BLKCNT_T_TYPE __SYSCALL_SLONG_TYPE
#define WIFEXITED(status) __WIFEXITED (__WAIT_INT (status))
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544177e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define _IO_flockfile(_fp) 
#define _IOFBF 0
#define __USE_BSD 1
#define __FLT_EVAL_METHOD__ 0
#define _IO_USER_LOCK 0x8000
#define _IO_NO_WRITES 8
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define __unix__ 1
#define _G_HAVE_ST_BLKSIZE defined (_STATBUF_ST_BLKSIZE)
#define __stub_setlogin 
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __SYSCALL_WORDSIZE 64
#define w_termsig __wait_terminated.__w_termsig
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define __x86_64 1
#define __UINT_FAST64_MAX__ 18446744073709551615UL
#define __SIG_ATOMIC_TYPE__ int
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define __DBL_MIN_10_EXP__ (-307)
#define __FINITE_MATH_ONLY__ 0
#define __id_t_defined 
#define __u_char_defined 
#define __pid_t_defined 
#define __GNUC_PATCHLEVEL__ 1
#define _IO_pid_t __pid_t
#define __UINT_FAST8_MAX__ 255
#define __LEAF , __leaf__
#define __LDBL_REDIR1(name,proto,alias) name proto
#define __size_t 
#define __DEC64_MAX_EXP__ 385
#define _WCHAR_T_DEFINED 
#define __SIZEOF_PTHREAD_CONDATTR_T 4
#define __INT8_C(c) c
#define __UINT_LEAST64_MAX__ 18446744073709551615UL
#define _IO_FLAGS2_MMAP 1
#define htobe16(x) __bswap_16 (x)
#define __always_inline __inline __attribute__ ((__always_inline__))
#define NFDBITS __NFDBITS
#define __SHRT_MAX__ 32767
#define w_stopval __wait_stopped.__w_stopval
#define __LDBL_MAX__ 1.18973149535723176502e+4932L
#define __daddr_t_defined 
#define _IOS_BIN 128
#define __fortify_function __extern_always_inline __attribute_artificial__
#define _IO_MAGIC_MASK 0xFFFF0000
#define __UINT_LEAST8_MAX__ 255
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define htobe64(x) __bswap_64 (x)
#define __UINTMAX_TYPE__ long unsigned int
#define __linux 1
#define __DEC32_EPSILON__ 1E-6DF
#define __stub_sigreturn 
#define _BITS_TYPES_H 1
#define _IO_cleanup_region_end(_Doit) 
#define _IO_DONT_CLOSE 0100000
#define __unix 1
#define __UINT32_MAX__ 4294967295U
#define __UID_T_TYPE __U32_TYPE
#define getc(_fp) _IO_getc (_fp)
#define __SIZE_T 
#define FD_SETSIZE __FD_SETSIZE
#define __LDBL_MAX_EXP__ 16384
#define _ATFILE_SOURCE 1
#define _IO_ssize_t __ssize_t
#define __WINT_MIN__ 0U
#define WUNTRACED 2
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define __linux__ 1
#define _IOS_OUTPUT 2
#define EXIT_FAILURE 1
#define _SIZE_T_DEFINED_ 
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define __SCHAR_MAX__ 127
#define __USING_NAMESPACE_STD(name) 
#define _IO_UNIFIED_JUMPTABLES 1
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define __KERNEL_STRICT_NAMES 
#define _IO_stderr ((_IO_FILE*)(&_IO_2_1_stderr_))
#define _IO_ferror_unlocked(__fp) (((__fp)->_flags & _IO_ERR_SEEN) != 0)
#define __INT64_C(c) c ## L
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define __DBL_DIG__ 15
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define WSTOPPED 2
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define __SIZEOF_POINTER__ 8
#define __attribute_used__ __attribute__ ((__used__))
#define _STDIO_USES_IOSTREAM 
#define _IO_IN_BACKUP 0x100
#define __USER_LABEL_PREFIX__ 
#define __GLIBC__ 2
#define __END_DECLS 
#define __CONCAT(x,y) x ## y
#define WCONTINUED 8
#define __STDC_HOSTED__ 1
#define __WAIT_STATUS_DEFN int *
#define __LDBL_HAS_INFINITY__ 1
#define __SLONG32_TYPE int
#define _SYS_SELECT_H 1
#define _IO_LINE_BUF 0x200
#define _IOS_NOCREATE 32
#define __GNU_LIBRARY__ 6
#define _G_BUFSIZ 8192
#define __FLT_EPSILON__ 1.19209289550781250000e-7F
#define _IO_EOF_SEEN 0x10
#define TMP_MAX 238328
#define __SSIZE_T_TYPE __SWORD_TYPE
#define __DEV_T_TYPE __UQUAD_TYPE
#define _IO_SKIPWS 01
#define _IO_SCIENTIFIC 04000
#define __LDBL_MIN__ 3.36210314311209350626e-4932L
#define __STDC_UTF_16__ 1
#define __nonnull(params) __attribute__ ((__nonnull__ params))
#define le32toh(x) (x)
#define __DEC32_MAX__ 9.999999E96DF
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define _IO_SHOWPOS 02000
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define _WCHAR_T_ 
#define __INT32_MAX__ 2147483647
#define __SIZEOF_PTHREAD_COND_T 48
#define __SIZEOF_LONG__ 8
#define _IONBF 2
#define _IO_getc_unlocked(_fp) (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define __STDC_IEC_559__ 1
#define __STDC_ISO_10646__ 201103L
#define __UINT16_C(c) c
#define _PREDEFS_H
#define w_retcode __wait_terminated.__w_retcode
#define _IO_PENDING_OUTPUT_COUNT(_fp) ((_fp)->_IO_write_ptr - (_fp)->_IO_write_base)
#define __DECIMAL_DIG__ 21
#define __USE_FORTIFY_LEVEL 0
#define __gnu_linux__ 1
#define _ENDIAN_H 1
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define _IO_LEFT 02
#define __LDBL_HAS_QUIET_NAN__ 1
#define __attribute_const__ __attribute__ ((__const__))
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define htobe32(x) __bswap_32 (x)
#define __GLIBC_HAVE_LONG_LONG 1
#define L_tmpnam 20
#define ___int_wchar_t_h 
#define WIFCONTINUED(status) __WIFCONTINUED (__WAIT_INT (status))
#define __GNUC__ 4
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define __MMX__ 1
#define __timespec_defined 1
#define L_ctermid 9
#define __OFF64_T_TYPE __SQUAD_TYPE
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __USE_SVID 1
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define __BIGGEST_ALIGNMENT__ 16
#define __USE_ISOC95 1
#define __USE_ISOC99 1
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define WTERMSIG(status) __WTERMSIG (__WAIT_INT (status))
#define _IO_uid_t __uid_t
#define _GCC_WCHAR_T 
#define __DBL_MAX__ ((double)1.79769313486231570815e+308L)
#define __INT_FAST32_MAX__ 9223372036854775807L
#define __DBL_HAS_INFINITY__ 1
#define __SIZEOF_PTHREAD_MUTEX_T 40
#define __intN_t(N,MODE) typedef int int ##N ##_t __attribute__ ((__mode__ (MODE)))
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define stdin stdin
#define __USE_XOPEN2K 1
#define w_stopsig __wait_stopped.__w_stopsig
#define __DEC32_MIN_EXP__ (-94)
#define __DADDR_T_TYPE __S32_TYPE
#define __END_NAMESPACE_C99 
#define __FD_SETSIZE 1024
#define be32toh(x) __bswap_32 (x)
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define _IO_MAGIC 0xFBAD0000
#define __INT_FAST16_TYPE__ long int
#define _SIZE_T_DEFINED 
#define _WCHAR_T_DEFINED_ 
#define __USE_POSIX199506 1
#define _FEATURES_H 1
#define __LDBL_HAS_DENORM__ 1
#define __stub_getmsg 
#define _IO_FIXED 010000
#define __stub_fattach 
#define __DEC128_MAX__ 9.999999999999999999999999999999999E6144DL
#define _STRUCT_TIMEVAL 1
#define __INT_LEAST32_MAX__ 2147483647
#define _IO_UNBUFFERED 2
#define _IO_INTERNAL 010
#define __DEC32_MIN__ 1E-95DF
#define __dev_t_defined 
#define __S32_TYPE int
#define __glibc_unlikely(cond) __builtin_expect((cond), 0)
#define __DBL_MAX_EXP__ 1024
#define __DEC128_EPSILON__ 1E-33DL
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define __FSFILCNT_T_TYPE __SYSCALL_ULONG_TYPE
#define PDP_ENDIAN __PDP_ENDIAN
#define __PTRDIFF_MAX__ 9223372036854775807L
#define __amd64 1
#define _IO_LINKED 0x80
#define _IO_HAVE_ST_BLKSIZE _G_HAVE_ST_BLKSIZE
#define __STDC_NO_THREADS__ 1
#define __bounded 
#define __USECONDS_T_TYPE __U32_TYPE
#define _IO_DELETE_DONT_CLOSE 0x40
#define __BEGIN_NAMESPACE_STD 
#define __OFF_T_TYPE __SYSCALL_SLONG_TYPE
#define __ATOMIC_HLE_ACQUIRE 65536
#define _T_WCHAR 
#define __LONG_LONG_MAX__ 9223372036854775807LL
#define __SIZEOF_SIZE_T__ 8
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define _WCHAR_T 
#define __FD_ZERO(fdsp) do { int __d0, __d1; __asm__ __volatile__ ("cld; rep; " __FD_ZERO_STOS : "=c" (__d0), "=D" (__d1) : "a" (0), "0" (sizeof (fd_set) / sizeof (__fd_mask)), "1" (&__FDS_BITS (fdsp)[0]) : "memory"); } while (0)
#define __SIZEOF_WINT_T__ 4
#define __stub_bdflush 
#define __u_intN_t(N,MODE) typedef unsigned int u_int ##N ##_t __attribute__ ((__mode__ (MODE)))
#define __U16_TYPE unsigned short int
#define _STDIO_H 1
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __ptrvalue 
#define __GXX_ABI_VERSION 1002
#define __WTERMSIG(status) ((status) & 0x7f)
#define __FLT_MIN_EXP__ (-125)
#define __FD_CLR(d,set) ((void) (__FDS_BITS (set)[__FD_ELT (d)] &= ~__FD_MASK (d)))
#define WEXITED 4
#define WNOHANG 1
#define alloca(size) __builtin_alloca (size)
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define __INT_FAST64_TYPE__ long int
#define __DBL_MIN__ ((double)2.22507385850720138309e-308L)
#define __LITTLE_ENDIAN 1234
#define __WCOREFLAG 0x80
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define __LP64__ 1
#define _IO_off64_t __off64_t
#define __MODE_T_TYPE __U32_TYPE
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define __DECIMAL_BID_FORMAT__ 1
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define _IOS_ATEND 4
#define _IO_BOOLALPHA 0200000
#define __FDS_BITS(set) ((set)->__fds_bits)
#define __DEC128_MIN__ 1E-6143DL
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 65535
#define _IOS_NOREPLACE 64
#define __DBL_HAS_DENORM__ 1
#define _IO_TIED_PUT_GET 0x400
#define __USE_POSIX2 1
#define __UINT8_TYPE__ unsigned char
#define __SLONGWORD_TYPE long int
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define __NO_INLINE__ 1
#define __warndecl(name,msg) extern void name (void) __attribute__((__warning__ (msg)))
#define __FLT_MANT_DIG__ 24
#define __VERSION__ "4.8.1"
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define __UINT64_C(c) c ## UL
#define _SYS_CDEFS_H 1
#define _STDC_PREDEF_H 1
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define __INT_WCHAR_T_H
#define _IO_file_flags _flags
#define __USE_XOPEN2K8 1
#define _ALLOCA_H 1
#define WEXITSTATUS(status) __WEXITSTATUS (__WAIT_INT (status))
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define _BSD_SOURCE 1
#define __STRING(x) #x
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __unbounded 
#define __INO_T_TYPE __SYSCALL_ULONG_TYPE
#define __ssize_t_defined 
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define _SYS_SIZE_T_H
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define _IO_feof_unlocked(__fp) (((__fp)->_flags & _IO_EOF_SEEN) != 0)
#define __SUSECONDS_T_TYPE __SYSCALL_SLONG_TYPE
#define __SIZE_T__ 
#define __stub_gtty 
#define __NLINK_T_TYPE __SYSCALL_ULONG_TYPE
#define __need_clockid_t 
#define __nlink_t_defined 
#define _IO_SHOWPOINT 0400
#define __stub_sstk 
#define __wur 
#define __STDC_IEC_559_COMPLEX__ 1
#define _G_HAVE_MMAP 1
#define _IO_OCT 040
#define __INT32_C(c) c
#define __DEC64_EPSILON__ 1E-15DD
#define __ORDER_PDP_ENDIAN__ 3412
#define __DEC128_MIN_EXP__ (-6142)
#define __PDP_ENDIAN 3412
#define BYTE_ORDER __BYTE_ORDER
#define __INT_FAST32_TYPE__ long int
#define __have_pthread_attr_t 1
#define _BITS_TYPESIZES_H 1
#define htole32(x) (x)
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define WSTOPSIG(status) __WSTOPSIG (__WAIT_INT (status))
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define RAND_MAX 2147483647
#define unix 1
#define __FD_ZERO_STOS "stosq"
#define __INT16_MAX__ 32767
#define __THROWNL __attribute__ ((__nothrow__))
#define _BSD_SIZE_T_ 
#define __SIZE_TYPE__ long unsigned int
#define __UINT64_MAX__ 18446744073709551615UL
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define _IO_SHOWBASE 0200
#define __INT8_TYPE__ signed char
#define __ELF__ 1
#define _SIGSET_H_types 1
#define _BITS_BYTESWAP_H 1
#define __ID_T_TYPE __U32_TYPE
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define _IO_funlockfile(_fp) 
#define __FLT_RADIX__ 2
#define __INT_LEAST16_TYPE__ short int
#define __LDBL_EPSILON__ 1.08420217248550443401e-19L
#define __UINTMAX_C(c) c ## UL
#define minor(dev) gnu_dev_minor (dev)
#define _POSIX_C_SOURCE 200809L
#define _G_IO_IO_FILE_VERSION 0x20001
#define __SSE_MATH__ 1
#define __long_double_t long double
#define __k8 1
#define __SIZEOF_PTHREAD_BARRIERATTR_T 4
#define __LDBL_REDIR(name,proto) name proto
#define __SIG_ATOMIC_MAX__ 2147483647
#define __blksize_t_defined 
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define _IO_IS_FILEBUF 0x2000
#define __bswap_constant_16(x) ((unsigned short int) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __SIZEOF_PTRDIFF_T__ 8
#define SEEK_SET 0
#define __bswap_constant_32(x) ((((x) & 0xff000000) >> 24) | (((x) & 0x00ff0000) >> 8) | (((x) & 0x0000ff00) << 8) | (((x) & 0x000000ff) << 24))
#define _IO_FLAGS2_NOTCANCEL 2
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define __restrict_arr __restrict
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define __UWORD_TYPE unsigned long int
#define __x86_64__ 1
#define _SIZE_T_ 
#define __bswap_constant_64(x) (__extension__ ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56)))
#define __PTHREAD_RWLOCK_INT_FLAGS_SHARED 1
#define __DEC32_SUBNORMAL_MIN__ 0.000001E-95DF
#define _IO_iconv_t _G_iconv_t
#define _IO_USER_BUF 1
#define _WCHAR_T_H
#define __INT_FAST16_MAX__ 9223372036854775807L
#define __stub_revoke 
#define __timer_t_defined 1
#define __WCLONE 0x80000000
#define major(dev) gnu_dev_major (dev)
#define _IO_off_t __off_t
#define __UINT_FAST32_MAX__ 18446744073709551615UL
#define __UINT_LEAST64_TYPE__ long unsigned int
#define __U64_TYPE unsigned long int
#define __FLT_HAS_QUIET_NAN__ 1
#define _IO_STDIO_H
#define __FLT_MAX_10_EXP__ 38
#define __FD_MASK(d) ((__fd_mask) 1 << ((d) % __NFDBITS))
#define __LONG_MAX__ 9223372036854775807L
#define __WCHAR_T__ 
#define __DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000000000001E-6143DL
#define __FLT_HAS_INFINITY__ 1
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define __UINT_FAST16_TYPE__ long unsigned int
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define __DEC64_MAX__ 9.999999999999999E384DD
#define WIFSTOPPED(status) __WIFSTOPPED (__WAIT_INT (status))
#define NULL ((void *)0)
#define __CHAR16_TYPE__ short unsigned int
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __USING_NAMESPACE_C99(name) 
#define BIG_ENDIAN __BIG_ENDIAN
#define _VA_LIST_DEFINED 
#define __BLKSIZE_T_TYPE __SYSCALL_SLONG_TYPE
#define _IO_size_t size_t
#define __INT_LEAST16_MAX__ 32767
#define __stub_lchmod 
#define __DEC64_MANT_DIG__ 16
#define __INT64_MAX__ 9223372036854775807L
#define __UINT_LEAST32_MAX__ 4294967295U
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __INT_LEAST64_TYPE__ long int
#define htole16(x) (x)
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define __STDC_VERSION__ 199901L
#define __DEC32_MAX_EXP__ 97
#define __INT_FAST8_MAX__ 127
#define __PMT(args) args
#define __INTPTR_MAX__ 9223372036854775807L
#define _SYS_TYPES_H 1
#define _OLD_STDIO_MAGIC 0xFABC0000
#define linux 1
#define _IOS_APPEND 8
#define __int8_t_defined 
#define ____FILE_defined 1
#define _IOLBF 1
#define htole64(x) (x)
#define _IO_UPPERCASE 01000
#define WIFSIGNALED(status) __WIFSIGNALED (__WAIT_INT (status))
#define __SSE2__ 1
#define __KEY_T_TYPE __S32_TYPE
#define __WORDSIZE 64
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define __USE_ANSI 1
#define __SIZEOF_PTHREAD_MUTEXATTR_T 4
#define __DBL_HAS_QUIET_NAN__ 1
#define _IO_BAD_SEEN 0x4000
#define __GNUC_VA_LIST 
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __RLIM_T_TYPE __SYSCALL_ULONG_TYPE
#define le64toh(x) (x)
#define FILENAME_MAX 4096
#define __ino_t_defined 
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define __CLOCKID_T_TYPE __S32_TYPE
#define __SIZEOF_FLOAT__ 4
#define _IOS_TRUNC 16
#define __HAVE_COLUMN 
#define __stub_fdetach 
#define __UINTPTR_MAX__ 18446744073709551615UL
#define __DEC64_MIN_EXP__ (-382)
#define __stub_chflags 
#define putc(_ch,_fp) _IO_putc (_ch, _fp)
#define __UQUAD_TYPE unsigned long int
#define __BYTE_ORDER __LITTLE_ENDIAN
#define __USE_POSIX 1
#define __INT_FAST64_MAX__ 9223372036854775807L
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define BUFSIZ _IO_BUFSIZ
#define __FLT_DIG__ 6
#define __FSID_T_TYPE struct { int __val[2]; }
#define __malloc_and_calloc_defined 
#define _WCHAR_T_DECLARED 
#define __UINT_FAST64_TYPE__ long unsigned int
#define _IO_putc_unlocked(_ch,_fp) (_IO_BE ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end, 0) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define WNOWAIT 0x01000000
#define EXIT_SUCCESS 0
#define __LDBL_REDIR_DECL(name) 
#define __mode_t_defined 
#define __INT_MAX__ 2147483647
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define __amd64__ 1
#define w_coredump __wait_terminated.__w_coredump
#define __S16_TYPE short int
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define _T_SIZE_ 
#define __WNOTHREAD 0x20000000
#define _G_va_list __gnuc_va_list
#define _IOS_INPUT 1
#define __INT64_TYPE__ long int
#define __FLT_MAX_EXP__ 128
#define __gid_t_defined 
#define __ORDER_BIG_ENDIAN__ 4321
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __TIMER_T_TYPE void *
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define __INT_LEAST64_MAX__ 9223372036854775807L
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __GLIBC_MINOR__ 17
#define __DEC64_MIN__ 1E-383DD
#define __WINT_TYPE__ unsigned int
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define __SSE__ 1
#define __LDBL_MIN_EXP__ (-16381)
#define _IO_va_list __gnuc_va_list
#define __BIT_TYPES_DEFINED__ 1
#define stdout stdout
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define EOF (-1)
#define __INT_LEAST8_MAX__ 127
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define __USE_POSIX199309 1
#define __SSP__ 1
#define ____mbstate_t_defined 1
#define __SIZEOF_INT128__ 16
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __LDBL_MAX_10_EXP__ 4932
#define __W_CONTINUED 0xffff
#define __ATOMIC_RELAXED 0
#define __FSBLKCNT_T_TYPE __SYSCALL_ULONG_TYPE
#define __DBL_EPSILON__ ((double)2.22044604925031308085e-16L)
#define __stub_stty 
#define le16toh(x) (x)
#define _SIZET_ 
#define _SVID_SOURCE 1
#define _LP64 1
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define __UINT8_C(c) c
#define __INT_LEAST32_TYPE__ int
#define __wchar_t__ 
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define __USE_POSIX_IMPLICITLY 1
#define __UINT64_TYPE__ long unsigned int
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define _IO_RIGHT 04
#define __END_NAMESPACE_STD 
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define be64toh(x) __bswap_64 (x)
#define __INT_FAST8_TYPE__ signed char
#define __PID_T_TYPE __S32_TYPE
#define __GNUC_STDC_INLINE__ 1
#define P_tmpdir "/tmp"
#define __attribute_pure__ __attribute__ ((__pure__))
#define __WORDSIZE_TIME64_COMPAT32 1
#define _IO_stdin ((_IO_FILE*)(&_IO_2_1_stdin_))
#define _IO_cleanup_region_start(_fct,_fp) 
#define _IO_NO_READS 4
#define _IO_DEC 020
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define __FXSR__ 1
#define __DEC_EVAL_METHOD__ 2
#define _SIZE_T 
#define _IO_ERR_SEEN 0x20
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define __ULONG32_TYPE unsigned int
#define _G_config_h 1
#define FOPEN_MAX 16
#define __BIG_ENDIAN 4321
#define __suseconds_t_defined 
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define _IO_STDIO 040000
#define __off_t_defined 
#define _IO_IS_APPENDING 0x1000
#define _GCC_SIZE_T 
#define __INO64_T_TYPE __UQUAD_TYPE
#define __UINT32_C(c) c ## U
#define __INTMAX_MAX__ 9223372036854775807L
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __size_t__ 
#define _IO_BUFSIZ _G_BUFSIZ
#define __FLT_DENORM_MIN__ 1.40129846432481707092e-45F
#define __BEGIN_NAMESPACE_C99 
#define __INT8_MAX__ 127
#define __UINT_FAST32_TYPE__ long unsigned int
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define __INO_T_MATCHES_INO64_T 1
#define _IO_fpos_t _G_fpos_t
#define __CHAR32_TYPE__ unsigned int
#define __FLT_MAX__ 3.40282346638528859812e+38F
#define __fsfilcnt_t_defined 
#define __blkcnt_t_defined 
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define __lldiv_t_defined 1
#define __INT32_TYPE__ int
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MIN_10_EXP__ (-37)
#define __time_t_defined 1
#define _SYS_SYSMACROS_H 1
#define _IO_BE(expr,res) __builtin_expect ((expr), res)
#define __SWORD_TYPE long int
#define __INTMAX_TYPE__ long int
#define be16toh(x) __bswap_16 (x)
#define __DEC128_MAX_EXP__ 6145
#define _T_SIZE 
#define __va_arg_pack() __builtin_va_arg_pack ()
#define __ATOMIC_CONSUME 1
#define _IO_stdout ((_IO_FILE*)(&_IO_2_1_stdout_))
#define __GNUC_MINOR__ 8
#define __UINTMAX_MAX__ 18446744073709551615UL
#define __DEC32_MANT_DIG__ 7
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __key_t_defined 
#define __DBL_MAX_10_EXP__ 308
#define __FILE_defined 1
#define _BITS_PTHREADTYPES_H 1
#define __LDBL_DENORM_MIN__ 3.64519953188247460253e-4951L
#define __INT16_C(c) c
#define __U32_TYPE unsigned int
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define __STDC__ 1
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define __PTRDIFF_TYPE__ long int
#define __clockid_t_defined 1
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define __FD_SET(d,set) ((void) (__FDS_BITS (set)[__FD_ELT (d)] |= __FD_MASK (d)))
#define _IO_HEX 0100
#define __ATOMIC_SEQ_CST 5
#define __CLOCK_T_TYPE __SYSCALL_SLONG_TYPE
#define _IO_fpos64_t _G_fpos64_t
#define __UINT32_TYPE__ unsigned int
#define __UINTPTR_TYPE__ long unsigned int
#define __DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define __DEC128_MANT_DIG__ 34
#define __LDBL_MIN_10_EXP__ (-4931)
#define __FD_ELT(d) ((d) / __NFDBITS)
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define _IO_wint_t wint_t
#define __SIZEOF_LONG_LONG__ 8
#define __USE_ATFILE 1
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __LDBL_DIG__ 18
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 18446744073709551615UL
#define __WALL 0x40000000
#define __ldiv_t_defined 1
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define _IO_ftrylockfile(_fp) 
#define __FD_ISSET(d,set) ((__FDS_BITS (set)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define __UINT_FAST8_TYPE__ unsigned char
#define __P(args) args
#define __ATOMIC_ACQ_REL 4
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
#define __fsblkcnt_t_defined 
#define _STDLIB_H 1
#define _IO_peekc(_fp) _IO_peekc_unlocked (_fp)
