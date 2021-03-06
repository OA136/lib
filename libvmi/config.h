/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define for the ARM32 architecture. */
/* #undef ARM32 */

/* Define for the ARM64 architecture. */
/* #undef ARM64 */

/* Enable or disable the address cache (v2p, pid, etc) */
#define ENABLE_ADDRESS_CACHE 1

/* Enable libvmi.conf */
#define ENABLE_CONFIGFILE 1

/* Define to 1 to enable file support. */
#define ENABLE_FILE 1

/* Define to 1 to FreeBSD support. */
#define ENABLE_FREEBSD 1

/* Define to 1 to enable KVM support. */
#define ENABLE_KVM 1

/* Define to 1 to Linux support. */
#define ENABLE_LINUX 1

/* Enable or disable the page cache */
#define ENABLE_PAGE_CACHE 1

/* Define to 1 to enable shm-snapshot support. */
#define ENABLE_SHM_SNAPSHOT 1

/* Define to 1 to build VMIFS. */
#define ENABLE_VMIFS 1

/* Define to 1 to Windows support. */
#define ENABLE_WINDOWS 1

/* Define to 1 to enable Xen support. */
/* #undef ENABLE_XEN */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* xen headers define hvmmem_access_t */
/* #undef HAVE_HVMMEM_ACCESS_T */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <json-c/json.h> header file. */
#define HAVE_JSON_C_JSON_H 1

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* Define to 1 if you have the `json-c' library (-ljson-c). */
#define HAVE_LIBJSON_C 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `rt' library (-lrt). */
#define HAVE_LIBRT 1

/* Define to 1 if you have <qemu/libvmi_request.h>. */
#define HAVE_LIBVMI_REQUEST 1

/* Define to 1 to enable Xenstore support. */
/* #undef HAVE_LIBXENSTORE */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <xenctrl.h> header file. */
/* #undef HAVE_XENCTRL_H */

/* xen headers define xenmem_access_t */
/* #undef HAVE_XENMEM_ACCESS_T */

/* Define to 1 if you have the <xenstore.h> header file. */
/* #undef HAVE_XENSTORE_H */

/* Define to 1 if you have the <xen/io/ring.h> header file. */
/* #undef HAVE_XEN_IO_RING_H */

/* Define to 1 if you have the <xs.h> header file. */
/* #undef HAVE_XS_H */

/* Define for the i386 architecture. */
/* #undef I386 */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Max number of pages held in page cache */
#define MAX_PAGE_CACHE_SIZE 512

/* Name of package */
#define PACKAGE "libvmi"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "libvmi"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libvmi 0.13.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libvmi"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.13.0"

/* Defined to 1 when working JSON-C library was found to parse Rekall
   profiles. */
#define REKALL_PROFILES 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "0.13.0"

/* Define for the AMD x86-64 architecture. */
#define X86_64 1

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1
