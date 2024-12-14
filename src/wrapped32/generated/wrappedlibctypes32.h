/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedlibcTYPES32_H_
#define __wrappedlibcTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vEv_t)(void);
typedef void (*vEp_t)(void*);
typedef void (*vFp_t)(void*);
typedef int32_t (*iEv_t)(void);
typedef int32_t (*iEi_t)(int32_t);
typedef int32_t (*iEL_t)(uintptr_t);
typedef int32_t (*iEp_t)(void*);
typedef int32_t (*iEO_t)(int32_t);
typedef uint32_t (*uEp_t)(void*);
typedef uint32_t (*uES_t)(void*);
typedef uint64_t (*UEp_t)(void*);
typedef intptr_t (*lEi_t)(int32_t);
typedef intptr_t (*lEp_t)(void*);
typedef intptr_t (*lES_t)(void*);
typedef uintptr_t (*LEL_t)(uintptr_t);
typedef void* (*pEv_t)(void);
typedef void* (*pFv_t)(void);
typedef void* (*pEu_t)(uint32_t);
typedef void* (*pFu_t)(uint32_t);
typedef void* (*pEL_t)(uintptr_t);
typedef void* (*pFL_t)(uintptr_t);
typedef void* (*pEp_t)(void*);
typedef void* (*pFp_t)(void*);
typedef void* (*pES_t)(void*);
typedef char* (*tEp_t)(void*);
typedef int32_t (*iEbp__t)(struct_p_t*);
typedef void* (*pErl__t)(struct_l_t*);
typedef void* (*pEriiiiiiiiilt__t)(struct_iiiiiiiiilt_t*);
typedef void (*vEip_t)(int32_t, void*);
typedef void (*vEpi_t)(void*, int32_t);
typedef void (*vEpu_t)(void*, uint32_t);
typedef void (*vEpp_t)(void*, void*);
typedef int32_t (*iFip_t)(int32_t, void*);
typedef int32_t (*iEip_t)(int32_t, void*);
typedef int32_t (*iEup_t)(uint32_t, void*);
typedef int32_t (*iEpi_t)(void*, int32_t);
typedef int32_t (*iEpL_t)(void*, uintptr_t);
typedef int32_t (*iEpp_t)(void*, void*);
typedef int32_t (*iFpp_t)(void*, void*);
typedef int32_t (*iEpV_t)(void*, ...);
typedef int64_t (*IEII_t)(int64_t, int64_t);
typedef uint64_t (*UEUU_t)(uint64_t, uint64_t);
typedef double (*KFKi_t)(double, int32_t);
typedef double (*KFKp_t)(double, void*);
typedef intptr_t (*lEuV_t)(uint32_t, ...);
typedef void* (*pEip_t)(int32_t, void*);
typedef void* (*pELL_t)(uintptr_t, uintptr_t);
typedef void* (*pEpi_t)(void*, int32_t);
typedef void* (*pEpp_t)(void*, void*);
typedef void* (*SEpp_t)(void*, void*);
typedef int32_t (*iErLL_BLL__t)(struct_LL_t*, struct_LL_t*);
typedef void (*vEipp_t)(int32_t, void*, void*);
typedef void (*vEipV_t)(int32_t, void*, ...);
typedef void (*vEpuu_t)(void*, uint32_t, uint32_t);
typedef void (*vEpup_t)(void*, uint32_t, void*);
typedef void (*vEppu_t)(void*, void*, uint32_t);
typedef int32_t (*iEiip_t)(int32_t, int32_t, void*);
typedef int32_t (*iEiiN_t)(int32_t, int32_t, ...);
typedef int32_t (*iEipp_t)(int32_t, void*, void*);
typedef int32_t (*iEipV_t)(int32_t, void*, ...);
typedef int32_t (*iEpii_t)(void*, int32_t, int32_t);
typedef int32_t (*iEpLi_t)(void*, uintptr_t, int32_t);
typedef int32_t (*iEppi_t)(void*, void*, int32_t);
typedef int32_t (*iEppp_t)(void*, void*, void*);
typedef int32_t (*iEppV_t)(void*, void*, ...);
typedef int32_t (*iEpON_t)(void*, int32_t, ...);
typedef int32_t (*iESpp_t)(void*, void*, void*);
typedef int32_t (*iESpV_t)(void*, void*, ...);
typedef intptr_t (*lEipi_t)(int32_t, void*, int32_t);
typedef intptr_t (*lEipL_t)(int32_t, void*, uintptr_t);
typedef intptr_t (*lEppL_t)(void*, void*, uintptr_t);
typedef void* (*pEipi_t)(int32_t, void*, int32_t);
typedef void* (*pEpii_t)(void*, int32_t, int32_t);
typedef void* (*pEpII_t)(void*, int64_t, int64_t);
typedef void* (*pFpui_t)(void*, uint32_t, int32_t);
typedef void* (*pEpLL_t)(void*, uintptr_t, uintptr_t);
typedef void* (*pEppi_t)(void*, void*, int32_t);
typedef int64_t (*IEpBp_i_t)(void*, struct_p_t*, int32_t);
typedef uint64_t (*UEpBp_i_t)(void*, struct_p_t*, int32_t);
typedef double (*KEpBp_a_t)(void*, struct_p_t*, void*);
typedef intptr_t (*lEpBp_i_t)(void*, struct_p_t*, int32_t);
typedef uintptr_t (*LEpBp_i_t)(void*, struct_p_t*, int32_t);
typedef void (*vEiipp_t)(int32_t, int32_t, void*, void*);
typedef void (*vEiipV_t)(int32_t, int32_t, void*, ...);
typedef void (*vEpLLp_t)(void*, uintptr_t, uintptr_t, void*);
typedef void (*vEppiV_t)(void*, void*, int32_t, ...);
typedef int32_t (*iEiiip_t)(int32_t, int32_t, int32_t, void*);
typedef int32_t (*iEiipV_t)(int32_t, int32_t, void*, ...);
typedef int32_t (*iEipii_t)(int32_t, void*, int32_t, int32_t);
typedef int32_t (*iEipuu_t)(int32_t, void*, uint32_t, uint32_t);
typedef int32_t (*iEippi_t)(int32_t, void*, void*, int32_t);
typedef int32_t (*iEippL_t)(int32_t, void*, void*, uintptr_t);
typedef int32_t (*iEpipp_t)(void*, int32_t, void*, void*);
typedef int32_t (*iEpipV_t)(void*, int32_t, void*, ...);
typedef int32_t (*iEpuiL_t)(void*, uint32_t, int32_t, uintptr_t);
typedef int32_t (*iEpLpp_t)(void*, uintptr_t, void*, void*);
typedef int32_t (*iEpLpV_t)(void*, uintptr_t, void*, ...);
typedef int32_t (*iEppii_t)(void*, void*, int32_t, int32_t);
typedef int32_t (*iEpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iESipp_t)(void*, int32_t, void*, void*);
typedef int32_t (*iESipV_t)(void*, int32_t, void*, ...);
typedef uint32_t (*uEippu_t)(int32_t, void*, void*, uint32_t);
typedef uintptr_t (*LEpBp_ii_t)(void*, struct_p_t*, int32_t, int32_t);
typedef int32_t (*iEiippi_t)(int32_t, int32_t, void*, void*, int32_t);
typedef int32_t (*iEipiup_t)(int32_t, void*, int32_t, uint32_t, void*);
typedef int32_t (*iEipppp_t)(int32_t, void*, void*, void*, void*);
typedef int32_t (*iEuppLp_t)(uint32_t, void*, void*, uintptr_t, void*);
typedef int32_t (*iEpiipV_t)(void*, int32_t, int32_t, void*, ...);
typedef int32_t (*iEpiLpp_t)(void*, int32_t, uintptr_t, void*, void*);
typedef int32_t (*iEpipOi_t)(void*, int32_t, void*, int32_t, int32_t);
typedef int32_t (*iEppupi_t)(void*, void*, uint32_t, void*, int32_t);
typedef int32_t (*iEpppLp_t)(void*, void*, void*, uintptr_t, void*);
typedef void* (*pEpLLiN_t)(void*, uintptr_t, uintptr_t, int32_t, ...);
typedef void* (*pEppLLp_t)(void*, void*, uintptr_t, uintptr_t, void*);
typedef void* (*pEppbL_Lp_t)(void*, void*, struct_L_t*, uintptr_t, void*);
typedef int32_t (*iEipuurLL__t)(int32_t, void*, uint32_t, uint32_t, struct_LL_t*);
typedef int32_t (*iEpLiipp_t)(void*, uintptr_t, int32_t, int32_t, void*, void*);
typedef int32_t (*iEpLiipV_t)(void*, uintptr_t, int32_t, int32_t, void*, ...);
typedef int32_t (*iEpLiLpV_t)(void*, uintptr_t, int32_t, uintptr_t, void*, ...);
typedef int32_t (*iFpppupp_t)(void*, void*, void*, uint32_t, void*, void*);
typedef int32_t (*iEpppppp_t)(void*, void*, void*, void*, void*, void*);
typedef intptr_t (*lEipLpLL_t)(int32_t, void*, uintptr_t, void*, uintptr_t, uintptr_t);
typedef void* (*pEpLiiiI_t)(void*, uintptr_t, int32_t, int32_t, int32_t, int64_t);
typedef void* (*pEpLiiil_t)(void*, uintptr_t, int32_t, int32_t, int32_t, intptr_t);
typedef int32_t (*iEpippppp_t)(void*, int32_t, void*, void*, void*, void*, void*);
typedef int32_t (*iEpLiLppp_t)(void*, uintptr_t, int32_t, uintptr_t, void*, void*, void*);
typedef int32_t (*iFpuippupp_t)(void*, uint32_t, int32_t, void*, void*, uint32_t, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(freeaddrinfo, vEp_t) \
	GO(regfree, vEp_t) \
	GO(_ZGTtdlPv, vFp_t) \
	GO(__close_nocancel, iEi_t) \
	GO(posix_spawn_file_actions_destroy, iEp_t) \
	GO(posix_spawn_file_actions_init, iEp_t) \
	GO(shmdt, iEp_t) \
	GO(sysinfo, iEp_t) \
	GO(getwc, uES_t) \
	GO(__sysconf, lEi_t) \
	GO(sysconf, lEi_t) \
	GO(atol, lEp_t) \
	GO(ftell, lES_t) \
	GO(__ctype_b_loc, pEv_t) \
	GO(__ctype_tolower_loc, pEv_t) \
	GO(__ctype_toupper_loc, pEv_t) \
	GO(__errno_location, pEv_t) \
	GO(__res_state, pEv_t) \
	GO(getpwent, pEv_t) \
	GO(localeconv, pEv_t) \
	GO(__h_errno_location, pFv_t) \
	GO(getpwuid, pEu_t) \
	GO(_ZGTtnaj, pFu_t) \
	GO(_ZGTtnaX, pFL_t) \
	GO(_ZGTtnam, pFL_t) \
	GO(getgrnam, pEp_t) \
	GO(getprotobyname, pEp_t) \
	GO(getpwnam, pEp_t) \
	GO(gmtime, pEp_t) \
	GO(localtime, pEp_t) \
	GO(gethostbyname, pFp_t) \
	GO(getmntent, pES_t) \
	GO(__secure_getenv, tEp_t) \
	GO(getifaddrs, iEbp__t) \
	GO(ctime, pErl__t) \
	GO(asctime, pEriiiiiiiiilt__t) \
	GO(_obstack_newchunk, vEpi_t) \
	GO(fstatvfs, iEip_t) \
	GO(fstatvfs64, iEip_t) \
	GO(futimens, iEip_t) \
	GO(futimes, iEip_t) \
	GO(getrlimit, iEup_t) \
	GO(setrlimit, iEup_t) \
	GO(backtrace, iEpi_t) \
	GO(posix_spawn_file_actions_addclose, iEpi_t) \
	GO(alphasort64, iEpp_t) \
	GO(execvp, iEpp_t) \
	GO(statvfs, iEpp_t) \
	GO(statvfs64, iEpp_t) \
	GO(utimes, iEpp_t) \
	GO(execl, iEpV_t) \
	GO(execlp, iEpV_t) \
	GO(ldexpl, KFKi_t) \
	GO(frexpl, KFKp_t) \
	GO(signal, pEip_t) \
	GO(aligned_alloc, pELL_t) \
	GO(backtrace_symbols, pEpi_t) \
	GO(__cmsg_nxthdr, pEpp_t) \
	GO(__gmtime_r, pEpp_t) \
	GO(getservbyname, pEpp_t) \
	GO(gmtime_r, pEpp_t) \
	GO(localtime_r, pEpp_t) \
	GO(vsyslog, vEipp_t) \
	GO(syslog, vEipV_t) \
	GO(_ITM_addUserCommitAction, vEpup_t) \
	GO(posix_spawn_file_actions_adddup2, iEpii_t) \
	GO(regcomp, iEppi_t) \
	GO(__isoc23_vsscanf, iEppp_t) \
	GO(execvpe, iEppp_t) \
	GO(vswscanf, iEppp_t) \
	GO(__isoc23_sscanf, iEppV_t) \
	GO(swscanf, iEppV_t) \
	GO(__isoc23_fscanf, iESpV_t) \
	GO(__isoc99_fscanf, iESpV_t) \
	GO(fscanf, iESpV_t) \
	GO(readv, lEipi_t) \
	GO(recvmsg, lEipi_t) \
	GO(sendmsg, lEipi_t) \
	GO(writev, lEipi_t) \
	GO(shmat, pEipi_t) \
	GO(gethostbyaddr, pFpui_t) \
	GO(__realpath_chk, pEppi_t) \
	GO(__isoc23_strtoll, IEpBp_i_t) \
	GO(__isoc23_strtoull, UEpBp_i_t) \
	GO(__strtold_l, KEpBp_a_t) \
	GO(strtold_l, KEpBp_a_t) \
	GO(__isoc23_strtol, lEpBp_i_t) \
	GO(__isoc23_wcstol, lEpBp_i_t) \
	GO(wcstol, lEpBp_i_t) \
	GO(__isoc23_strtoul, LEpBp_i_t) \
	GO(wcstoul, LEpBp_i_t) \
	GO(__vsyslog_chk, vEiipp_t) \
	GO(__syslog_chk, vEiipV_t) \
	GO(sendmmsg, iEipuu_t) \
	GO(utimensat, iEippi_t) \
	GO(readlinkat, iEippL_t) \
	GO(getaddrinfo, iEpppp_t) \
	GO(regerror, uEippu_t) \
	GO(statx, iEipiup_t) \
	GO(getopt_long, iEipppp_t) \
	GO(getgrgid_r, iEuppLp_t) \
	GO(getpwuid_r, iEuppLp_t) \
	GO(posix_spawn_file_actions_addopen, iEpipOi_t) \
	GO(regexec, iEppupi_t) \
	GO(getgrnam_r, iEpppLp_t) \
	GO(getpwnam_r, iEpppLp_t) \
	GO(recvmmsg, iEipuurLL__t) \
	GO(gethostbyname_r, iFpppupp_t) \
	GO(posix_spawn, iEpppppp_t) \
	GO(process_vm_readv, lEipLpLL_t) \
	GO(process_vm_writev, lEipLpLL_t) \
	GO(gethostbyaddr_r, iFpuippupp_t)

#endif // __wrappedlibcTYPES32_H_
