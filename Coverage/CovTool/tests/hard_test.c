# 1 "Instrumentation code beginning"
struct __CvT__module_info____                                   
{                                                               
    char const **file;                                          
    int files;                                                  
    void const **str;   // string version of file names above   
    int *  line;  // pairs of ints stored here                  
                  // the first is the index into file           
                  // the second is the line number in that file 
    int lines;    // count of PAIRS not ints at line            
                                                                
    int struct_size;    // validates this struct                
    int * inst;   // counts of instrumented lines per file      
                                                                
    void construct();                                           
                                                                
    __CvT__module_info____(char const **f, int fs,              
                           int   *l, int ls,                    
                           int *i                               
                          )                                     
    : file(f), files(fs), str(0), line(l), lines(ls),           
      struct_size(sizeof(__CvT__module_info____)), inst(i)      
    {                                                           
      construct();                                              
    }                                                           
                                                                
    ~__CvT__module_info____();                                  
                                                                
};

static __CvT__module_info____* __CvT_miT;
extern void __CvT__record_line____(__CvT__module_info____ const*, int,int);
# 1 "hard.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "/usr/include/stdc-predef.h" 1 3 4 
# 1 "<command-line>" 2 
# 1 "hard.c" 
# 1 "/usr/include/c++/5/string" 1 3 
# 36 "/usr/include/c++/5/string" 3 

# 37 "/usr/include/c++/5/string" 3 

# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 1 3 
# 194 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3 

# 194 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3 
namespace std 
{ 
typedef long unsigned int size_t ; 
typedef long int ptrdiff_t ; 




} 
# 216 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3 
namespace std 
{ 
inline namespace __cxx11 { } 
} 
namespace __gnu_cxx 
{ 
inline namespace __cxx11 { __CvT__record_line____(__CvT_miT,5,222);} 
} 
# 482 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3 
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/os_defines.h" 1 3 
# 39 "/usr/include/x86_64-linux-gnu/c++/5/bits/os_defines.h" 3 
# 1 "/usr/include/features.h" 1 3 4 
# 367 "/usr/include/features.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4 
# 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4 
# 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4 
# 368 "/usr/include/features.h" 2 3 4 
# 391 "/usr/include/features.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4 
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4 
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4 
# 392 "/usr/include/features.h" 2 3 4 
# 40 "/usr/include/x86_64-linux-gnu/c++/5/bits/os_defines.h" 2 3 
# 483 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 2 3 


# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/cpu_defines.h" 1 3 
# 486 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 2 3 
# 39 "/usr/include/c++/5/string" 2 3 
# 1 "/usr/include/c++/5/bits/stringfwd.h" 1 3 
# 37 "/usr/include/c++/5/bits/stringfwd.h" 3 

# 38 "/usr/include/c++/5/bits/stringfwd.h" 3 


# 1 "/usr/include/c++/5/bits/memoryfwd.h" 1 3 
# 46 "/usr/include/c++/5/bits/memoryfwd.h" 3 

# 47 "/usr/include/c++/5/bits/memoryfwd.h" 3 



namespace std 
{ 

# 63 "/usr/include/c++/5/bits/memoryfwd.h" 3 
template < typename > 
class allocator ; 

template <> 
class allocator < void > ; 


template < typename , typename > 
struct uses_allocator ; 




} 
# 41 "/usr/include/c++/5/bits/stringfwd.h" 2 3 

namespace std 
{ 








template < class _CharT > 
struct char_traits ; 

template <> struct char_traits < char > ; 


template <> struct char_traits < wchar_t > ; 
# 67 "/usr/include/c++/5/bits/stringfwd.h" 3 
namespace __cxx11 { 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_string ; 


typedef basic_string < char > string ; 



typedef basic_string < wchar_t > wstring ; 
# 90 "/usr/include/c++/5/bits/stringfwd.h" 3 
} 




} 
# 40 "/usr/include/c++/5/string" 2 3 
# 1 "/usr/include/c++/5/bits/char_traits.h" 1 3 
# 37 "/usr/include/c++/5/bits/char_traits.h" 3 

# 38 "/usr/include/c++/5/bits/char_traits.h" 3 

# 1 "/usr/include/c++/5/bits/stl_algobase.h" 1 3 
# 60 "/usr/include/c++/5/bits/stl_algobase.h" 3 
# 1 "/usr/include/c++/5/bits/functexcept.h" 1 3 
# 40 "/usr/include/c++/5/bits/functexcept.h" 3 
# 1 "/usr/include/c++/5/bits/exception_defines.h" 1 3 
# 41 "/usr/include/c++/5/bits/functexcept.h" 2 3 

namespace std 
{ 



void 
__throw_bad_exception ( void ) ; 


void 
__throw_bad_alloc ( void ) ; 


void 
__throw_bad_cast ( void ) ; 

void 
__throw_bad_typeid ( void ) ; 


void 
__throw_logic_error ( const char * ) ; 

void 
__throw_domain_error ( const char * ) ; 

void 
__throw_invalid_argument ( const char * ) ; 

void 
__throw_length_error ( const char * ) ; 

void 
__throw_out_of_range ( const char * ) ; 

void 
__throw_out_of_range_fmt ( const char * , ... ) 
; 

void 
__throw_runtime_error ( const char * ) ; 

void 
__throw_range_error ( const char * ) ; 

void 
__throw_overflow_error ( const char * ) ; 

void 
__throw_underflow_error ( const char * ) ; 


void 
__throw_ios_failure ( const char * ) ; 

void 
__throw_system_error ( int ) ; 

void 
__throw_future_error ( int ) ; 


void 
__throw_bad_function_call ( ) ; 


} 
# 61 "/usr/include/c++/5/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/5/bits/cpp_type_traits.h" 1 3 
# 35 "/usr/include/c++/5/bits/cpp_type_traits.h" 3 

# 36 "/usr/include/c++/5/bits/cpp_type_traits.h" 3 
# 68 "/usr/include/c++/5/bits/cpp_type_traits.h" 3 
namespace __gnu_cxx 
{ 


template < typename _Iterator , typename _Container > 
class __normal_iterator ; 


} 

namespace std 
{ 


struct __true_type { } ; 
struct __false_type { } ; 

template < bool > 
struct __truth_type 
{ typedef __false_type __type ; } ; 

template <> 
struct __truth_type < true > 
{ typedef __true_type __type ; } ; 



template < class _Sp , class _Tp > 
struct __traitor 
{ 
enum { __value = bool ( _Sp :: __value ) || bool ( _Tp :: __value ) } ; 
typedef typename __truth_type < __value >:: __type __type ; 
} ; 


template < typename , typename > 
struct __are_same 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template < typename _Tp > 
struct __are_same < _Tp , _Tp > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 


template < typename _Tp > 
struct __is_void 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template <> 
struct __is_void < void > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_integer 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 





template <> 
struct __is_integer < bool > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < signed char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 


template <> 
struct __is_integer < wchar_t > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 
# 199 "/usr/include/c++/5/bits/cpp_type_traits.h" 3 
template <> 
struct __is_integer < short > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned short > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < int > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned int > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < long > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned long > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < long long > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned long long > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 
# 270 "/usr/include/c++/5/bits/cpp_type_traits.h" 3 
template <> struct __is_integer < __int128 > { enum { __value = 1 } ; typedef __true_type __type ; } ; template <> struct __is_integer < unsigned __int128 > { enum { __value = 1 } ; typedef __true_type __type ; } ; 
# 287 "/usr/include/c++/5/bits/cpp_type_traits.h" 3 
template < typename _Tp > 
struct __is_floating 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 


template <> 
struct __is_floating < float > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_floating < double > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_floating < long double > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_pointer 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template < typename _Tp > 
struct __is_pointer < _Tp *> 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_normal_iterator 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template < typename _Iterator , typename _Container > 
struct __is_normal_iterator < __gnu_cxx :: __normal_iterator < _Iterator , 
_Container > > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_arithmetic 
: public __traitor < __is_integer < _Tp > , __is_floating < _Tp > > 
{ } ; 




template < typename _Tp > 
struct __is_scalar 
: public __traitor < __is_arithmetic < _Tp > , __is_pointer < _Tp > > 
{ } ; 




template < typename _Tp > 
struct __is_char 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template <> 
struct __is_char < char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 


template <> 
struct __is_char < wchar_t > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 


template < typename _Tp > 
struct __is_byte 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template <> 
struct __is_byte < char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_byte < signed char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_byte < unsigned char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_move_iterator 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 
# 443 "/usr/include/c++/5/bits/cpp_type_traits.h" 3 

} 
# 62 "/usr/include/c++/5/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/5/ext/type_traits.h" 1 3 
# 32 "/usr/include/c++/5/ext/type_traits.h" 3 

# 33 "/usr/include/c++/5/ext/type_traits.h" 3 




namespace __gnu_cxx 
{ 



template < bool , typename > 
struct __enable_if 
{ } ; 

template < typename _Tp > 
struct __enable_if < true , _Tp > 
{ typedef _Tp __type ; } ; 



template < bool _Cond , typename _Iftrue , typename _Iffalse > 
struct __conditional_type 
{ typedef _Iftrue __type ; } ; 

template < typename _Iftrue , typename _Iffalse > 
struct __conditional_type < false , _Iftrue , _Iffalse > 
{ typedef _Iffalse __type ; } ; 



template < typename _Tp > 
struct __add_unsigned 
{ 
private : 
typedef __enable_if < std :: __is_integer < _Tp >:: __value , _Tp > __if_type ; 

public : 
typedef typename __if_type :: __type __type ; 
} ; 

template <> 
struct __add_unsigned < char > 
{ typedef unsigned char __type ; } ; 

template <> 
struct __add_unsigned < signed char > 
{ typedef unsigned char __type ; } ; 

template <> 
struct __add_unsigned < short > 
{ typedef unsigned short __type ; } ; 

template <> 
struct __add_unsigned < int > 
{ typedef unsigned int __type ; } ; 

template <> 
struct __add_unsigned < long > 
{ typedef unsigned long __type ; } ; 

template <> 
struct __add_unsigned < long long > 
{ typedef unsigned long long __type ; } ; 


template <> 
struct __add_unsigned < bool > ; 

template <> 
struct __add_unsigned < wchar_t > ; 



template < typename _Tp > 
struct __remove_unsigned 
{ 
private : 
typedef __enable_if < std :: __is_integer < _Tp >:: __value , _Tp > __if_type ; 

public : 
typedef typename __if_type :: __type __type ; 
} ; 

template <> 
struct __remove_unsigned < char > 
{ typedef signed char __type ; } ; 

template <> 
struct __remove_unsigned < unsigned char > 
{ typedef signed char __type ; } ; 

template <> 
struct __remove_unsigned < unsigned short > 
{ typedef short __type ; } ; 

template <> 
struct __remove_unsigned < unsigned int > 
{ typedef int __type ; } ; 

template <> 
struct __remove_unsigned < unsigned long > 
{ typedef long __type ; } ; 

template <> 
struct __remove_unsigned < unsigned long long > 
{ typedef long long __type ; } ; 


template <> 
struct __remove_unsigned < bool > ; 

template <> 
struct __remove_unsigned < wchar_t > ; 



template < typename _Type > 
inline bool 
__is_null_pointer ( _Type * __ptr ) 
{ __CvT__record_line____(__CvT_miT,20,151);return __ptr == 0 ; } 

template < typename _Type > 
inline bool 
__is_null_pointer ( _Type ) 
{ __CvT__record_line____(__CvT_miT,20,156);return false ; } 
# 165 "/usr/include/c++/5/ext/type_traits.h" 3 
template < typename _Tp , bool = std :: __is_integer < _Tp >:: __value > 
struct __promote 
{ typedef double __type ; } ; 




template < typename _Tp > 
struct __promote < _Tp , false > 
{ } ; 

template <> 
struct __promote < long double > 
{ typedef long double __type ; } ; 

template <> 
struct __promote < double > 
{ typedef double __type ; } ; 

template <> 
struct __promote < float > 
{ typedef float __type ; } ; 

template < typename _Tp , typename _Up , 
typename _Tp2 = typename __promote < _Tp >:: __type , 
typename _Up2 = typename __promote < _Up >:: __type > 
struct __promote_2 
{ 
typedef __typeof__ ( _Tp2 ( ) + _Up2 ( ) ) __type ; 
} ; 

template < typename _Tp , typename _Up , typename _Vp , 
typename _Tp2 = typename __promote < _Tp >:: __type , 
typename _Up2 = typename __promote < _Up >:: __type , 
typename _Vp2 = typename __promote < _Vp >:: __type > 
struct __promote_3 
{ 
typedef __typeof__ ( _Tp2 ( ) + _Up2 ( ) + _Vp2 ( ) ) __type ; 
} ; 

template < typename _Tp , typename _Up , typename _Vp , typename _Wp , 
typename _Tp2 = typename __promote < _Tp >:: __type , 
typename _Up2 = typename __promote < _Up >:: __type , 
typename _Vp2 = typename __promote < _Vp >:: __type , 
typename _Wp2 = typename __promote < _Wp >:: __type > 
struct __promote_4 
{ 
typedef __typeof__ ( _Tp2 ( ) + _Up2 ( ) + _Vp2 ( ) + _Wp2 ( ) ) __type ; 
} ; 


} 
# 63 "/usr/include/c++/5/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/5/ext/numeric_traits.h" 1 3 
# 32 "/usr/include/c++/5/ext/numeric_traits.h" 3 

# 33 "/usr/include/c++/5/ext/numeric_traits.h" 3 




namespace __gnu_cxx 
{ 

# 54 "/usr/include/c++/5/ext/numeric_traits.h" 3 
template < typename _Value > 
struct __numeric_traits_integer 
{ 

static const _Value __min = ( ( ( _Value ) ( - 1 ) < 0 ) ? ( _Value ) 1 << ( sizeof ( _Value ) * 8 - ( ( _Value ) ( - 1 ) < 0 ) ) : ( _Value ) 0 ) ; 
static const _Value __max = ( ( ( _Value ) ( - 1 ) < 0 ) ? ( ( ( ( ( _Value ) 1 << ( ( sizeof ( _Value ) * 8 - ( ( _Value ) ( - 1 ) < 0 ) ) - 1 ) ) - 1 ) << 1 ) + 1 ) : ~ ( _Value ) 0 ) ; 



static const bool __is_signed = ( ( _Value ) ( - 1 ) < 0 ) ; 
static const int __digits = ( sizeof ( _Value ) * 8 - ( ( _Value ) ( - 1 ) < 0 ) ) ; 
} ; 

template < typename _Value > 
const _Value __numeric_traits_integer < _Value >:: __min ; 

template < typename _Value > 
const _Value __numeric_traits_integer < _Value >:: __max ; 

template < typename _Value > 
const bool __numeric_traits_integer < _Value >:: __is_signed ; 

template < typename _Value > 
const int __numeric_traits_integer < _Value >:: __digits ; 
# 99 "/usr/include/c++/5/ext/numeric_traits.h" 3 
template < typename _Value > 
struct __numeric_traits_floating 
{ 

static const int __max_digits10 = ( 2 + ( std :: __are_same < _Value , float >:: __value ? 24 : std :: __are_same < _Value , double >:: __value ? 53 : 64 ) * 643L / 2136 ) ; 


static const bool __is_signed = true ; 
static const int __digits10 = ( std :: __are_same < _Value , float >:: __value ? 6 : std :: __are_same < _Value , double >:: __value ? 15 : 18 ) ; 
static const int __max_exponent10 = ( std :: __are_same < _Value , float >:: __value ? 38 : std :: __are_same < _Value , double >:: __value ? 308 : 4932 ) ; 
} ; 

template < typename _Value > 
const int __numeric_traits_floating < _Value >:: __max_digits10 ; 

template < typename _Value > 
const bool __numeric_traits_floating < _Value >:: __is_signed ; 

template < typename _Value > 
const int __numeric_traits_floating < _Value >:: __digits10 ; 

template < typename _Value > 
const int __numeric_traits_floating < _Value >:: __max_exponent10 ; 

template < typename _Value > 
struct __numeric_traits 
: public __conditional_type < std :: __is_integer < _Value >:: __value , 
__numeric_traits_integer < _Value > , 
__numeric_traits_floating < _Value > >:: __type 
{ } ; 


} 
# 64 "/usr/include/c++/5/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/5/bits/stl_pair.h" 1 3 
# 59 "/usr/include/c++/5/bits/stl_pair.h" 3 
# 1 "/usr/include/c++/5/bits/move.h" 1 3 
# 34 "/usr/include/c++/5/bits/move.h" 3 
# 1 "/usr/include/c++/5/bits/concept_check.h" 1 3 
# 33 "/usr/include/c++/5/bits/concept_check.h" 3 

# 34 "/usr/include/c++/5/bits/concept_check.h" 3 
# 35 "/usr/include/c++/5/bits/move.h" 2 3 

namespace std 
{ 







template < typename _Tp > 
inline _Tp * 
__addressof ( _Tp & __r ) 
{ __CvT__record_line____(__CvT_miT,23,48);
__CvT__record_line____(__CvT_miT,23,49);return reinterpret_cast < _Tp *> 
( & const_cast < char &> ( reinterpret_cast < const volatile char &> ( __r ) ) ) ; 
} 


} 
# 159 "/usr/include/c++/5/bits/move.h" 3 
namespace std 
{ 

# 174 "/usr/include/c++/5/bits/move.h" 3 
template < typename _Tp > 
inline void 
swap ( _Tp & __a , _Tp & __b ) 




{ 



_Tp __tmp = ( __a ) ; 
__a = ( __b ) ; 
__b = ( __tmp ) ; 
} 




template < typename _Tp , size_t _Nm > 
inline void 
swap ( _Tp ( & __a ) [ _Nm ] , _Tp ( & __b ) [ _Nm ] ) 



{ __CvT__record_line____(__CvT_miT,23,199);
__CvT__record_line____(__CvT_miT,23,200);for ( size_t __n = 0 ; __n < _Nm ; ++ __n ) 
{__CvT__record_line____(__CvT_miT,23,201);swap ( __a [ __n ] , __b [ __n ] ) ; 
}} 



} 
# 60 "/usr/include/c++/5/bits/stl_pair.h" 2 3 





namespace std 
{ 

# 95 "/usr/include/c++/5/bits/stl_pair.h" 3 
template < class _T1 , class _T2 > 
struct pair 
{ 
typedef _T1 first_type ; 
typedef _T2 second_type ; 

_T1 first ; 
_T2 second ; 





pair ( ) 
: first ( ) , second ( ) { __CvT__record_line____(__CvT_miT,22,109);} 


pair ( const _T1 & __a , const _T2 & __b ) 
: first ( __a ) , second ( __b ) { __CvT__record_line____(__CvT_miT,22,113);} 



template < class _U1 , class _U2 > 
pair ( const pair < _U1 , _U2 >& __p ) 
: first ( __p . first ) , second ( __p . second ) { __CvT__record_line____(__CvT_miT,22,119);} 
# 209 "/usr/include/c++/5/bits/stl_pair.h" 3 
} ; 


template < class _T1 , class _T2 > 
inline bool 
operator == ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ __CvT__record_line____(__CvT_miT,22,215);return __x . first == __y . first && __x . second == __y . second ; } 


template < class _T1 , class _T2 > 
inline bool 
operator < ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ __CvT__record_line____(__CvT_miT,22,221);return __x . first < __y . first 
|| ( ! ( __y . first < __x . first ) && __x . second < __y . second ) ; } 


template < class _T1 , class _T2 > 
inline bool 
operator != ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ __CvT__record_line____(__CvT_miT,22,228);return ! ( __x == __y ) ; } 


template < class _T1 , class _T2 > 
inline bool 
operator > ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ __CvT__record_line____(__CvT_miT,22,234);return __y < __x ; } 


template < class _T1 , class _T2 > 
inline bool 
operator <= ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ __CvT__record_line____(__CvT_miT,22,240);return ! ( __y < __x ) ; } 


template < class _T1 , class _T2 > 
inline bool 
operator >= ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ __CvT__record_line____(__CvT_miT,22,246);return ! ( __x < __y ) ; } 
# 284 "/usr/include/c++/5/bits/stl_pair.h" 3 
template < class _T1 , class _T2 > 
inline pair < _T1 , _T2 > 
make_pair ( _T1 __x , _T2 __y ) 
{ __CvT__record_line____(__CvT_miT,22,287);return pair < _T1 , _T2 > ( __x , __y ) ; } 





} 
# 65 "/usr/include/c++/5/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 1 3 
# 62 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3 

# 63 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3 







namespace std 
{ 

# 89 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3 
struct input_iterator_tag { } ; 


struct output_iterator_tag { } ; 


struct forward_iterator_tag : public input_iterator_tag { } ; 



struct bidirectional_iterator_tag : public forward_iterator_tag { } ; 



struct random_access_iterator_tag : public bidirectional_iterator_tag { } ; 
# 116 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3 
template < typename _Category , typename _Tp , typename _Distance = ptrdiff_t , 
typename _Pointer = _Tp * , typename _Reference = _Tp &> 
struct iterator 
{ 

typedef _Category iterator_category ; 

typedef _Tp value_type ; 

typedef _Distance difference_type ; 

typedef _Pointer pointer ; 

typedef _Reference reference ; 
} ; 
# 165 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3 
template < typename _Iterator > 
struct iterator_traits 
{ 
typedef typename _Iterator :: iterator_category iterator_category ; 
typedef typename _Iterator :: value_type value_type ; 
typedef typename _Iterator :: difference_type difference_type ; 
typedef typename _Iterator :: pointer pointer ; 
typedef typename _Iterator :: reference reference ; 
} ; 



template < typename _Tp > 
struct iterator_traits < _Tp *> 
{ 
typedef random_access_iterator_tag iterator_category ; 
typedef _Tp value_type ; 
typedef ptrdiff_t difference_type ; 
typedef _Tp * pointer ; 
typedef _Tp & reference ; 
} ; 


template < typename _Tp > 
struct iterator_traits < const _Tp *> 
{ 
typedef random_access_iterator_tag iterator_category ; 
typedef _Tp value_type ; 
typedef ptrdiff_t difference_type ; 
typedef const _Tp * pointer ; 
typedef const _Tp & reference ; 
} ; 





template < typename _Iter > 
inline typename iterator_traits < _Iter >:: iterator_category 
__iterator_category ( const _Iter & ) 
{ return typename iterator_traits < _Iter >:: iterator_category ( ) ; } 





template < typename _Iterator , bool _HasBase > 
struct _Iter_base 
{ 
typedef _Iterator iterator_type ; 
static iterator_type _S_base ( _Iterator __it ) 
{ return __it ; } 
} ; 

template < typename _Iterator > 
struct _Iter_base < _Iterator , true > 
{ 
typedef typename _Iterator :: iterator_type iterator_type ; 
static iterator_type _S_base ( _Iterator __it ) 
{ return __it . base ( ) ; } 
} ; 
# 235 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3 

} 
# 66 "/usr/include/c++/5/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 1 3 
# 62 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3 

# 63 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3 


# 1 "/usr/include/c++/5/debug/debug.h" 1 3 
# 46 "/usr/include/c++/5/debug/debug.h" 3 
namespace std 
{ 
namespace __debug { } 
} 




namespace __gnu_debug 
{ 
using namespace std :: __debug ; 
} 
# 66 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 2 3 

namespace std 
{ 


template < typename _InputIterator > 
inline typename iterator_traits < _InputIterator >:: difference_type 
__distance ( _InputIterator __first , _InputIterator __last , 
input_iterator_tag ) 
{ 



typename iterator_traits < _InputIterator >:: difference_type __n = 0 ; 
while ( __first != __last ) 
{ 
++ __first ; 
++ __n ; 
} 
return __n ; 
} 

template < typename _RandomAccessIterator > 
inline typename iterator_traits < _RandomAccessIterator >:: difference_type 
__distance ( _RandomAccessIterator __first , _RandomAccessIterator __last , 
random_access_iterator_tag ) 
{ 



return __last - __first ; 
} 
# 112 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3 
template < typename _InputIterator > 
inline typename iterator_traits < _InputIterator >:: difference_type 
distance ( _InputIterator __first , _InputIterator __last ) 
{ 

return std :: __distance ( __first , __last , 
std :: __iterator_category ( __first ) ) ; 
} 

template < typename _InputIterator , typename _Distance > 
inline void 
__advance ( _InputIterator & __i , _Distance __n , input_iterator_tag ) 
{ 


; 
while ( __n -- ) 
++ __i ; 
} 

template < typename _BidirectionalIterator , typename _Distance > 
inline void 
__advance ( _BidirectionalIterator & __i , _Distance __n , 
bidirectional_iterator_tag ) 
{ 



if ( __n > 0 ) 
while ( __n -- ) 
++ __i ; 
else 
while ( __n ++ ) 
-- __i ; 
} 

template < typename _RandomAccessIterator , typename _Distance > 
inline void 
__advance ( _RandomAccessIterator & __i , _Distance __n , 
random_access_iterator_tag ) 
{ 



__i += __n ; 
} 
# 171 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3 
template < typename _InputIterator , typename _Distance > 
inline void 
advance ( _InputIterator & __i , _Distance __n ) 
{ 

typename iterator_traits < _InputIterator >:: difference_type __d = __n ; 
std :: __advance ( __i , __d , std :: __iterator_category ( __i ) ) ; 
} 
# 202 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3 

} 
# 67 "/usr/include/c++/5/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/5/bits/stl_iterator.h" 1 3 
# 66 "/usr/include/c++/5/bits/stl_iterator.h" 3 
# 1 "/usr/include/c++/5/bits/ptr_traits.h" 1 3 
# 67 "/usr/include/c++/5/bits/stl_iterator.h" 2 3 

namespace std 
{ 

# 96 "/usr/include/c++/5/bits/stl_iterator.h" 3 
template < typename _Iterator > 
class reverse_iterator 
: public iterator < typename iterator_traits < _Iterator >:: iterator_category , 
typename iterator_traits < _Iterator >:: value_type , 
typename iterator_traits < _Iterator >:: difference_type , 
typename iterator_traits < _Iterator >:: pointer , 
typename iterator_traits < _Iterator >:: reference > 
{ 
protected : 
_Iterator current ; 

typedef iterator_traits < _Iterator > __traits_type ; 

public : 
typedef _Iterator iterator_type ; 
typedef typename __traits_type :: difference_type difference_type ; 
typedef typename __traits_type :: pointer pointer ; 
typedef typename __traits_type :: reference reference ; 







reverse_iterator ( ) : current ( ) { } 




explicit 
reverse_iterator ( iterator_type __x ) : current ( __x ) { } 




reverse_iterator ( const reverse_iterator & __x ) 
: current ( __x . current ) { } 





template < typename _Iter > 
reverse_iterator ( const reverse_iterator < _Iter >& __x ) 
: current ( __x . base ( ) ) { } 




iterator_type 
base ( ) const 
{ return current ; } 
# 160 "/usr/include/c++/5/bits/stl_iterator.h" 3 
reference 
operator * ( ) const 
{ 
_Iterator __tmp = current ; 
return *-- __tmp ; 
} 






pointer 
operator -> ( ) const 
{ return & ( operator * ( ) ) ; } 






reverse_iterator & 
operator ++ ( ) 
{ 
-- current ; 
return * this ; 
} 






reverse_iterator 
operator ++ ( int ) 
{ 
reverse_iterator __tmp = * this ; 
-- current ; 
return __tmp ; 
} 






reverse_iterator & 
operator -- ( ) 
{ 
++ current ; 
return * this ; 
} 






reverse_iterator 
operator -- ( int ) 
{ 
reverse_iterator __tmp = * this ; 
++ current ; 
return __tmp ; 
} 






reverse_iterator 
operator + ( difference_type __n ) const 
{ return reverse_iterator ( current - __n ) ; } 







reverse_iterator & 
operator += ( difference_type __n ) 
{ 
current -= __n ; 
return * this ; 
} 






reverse_iterator 
operator - ( difference_type __n ) const 
{ return reverse_iterator ( current + __n ) ; } 







reverse_iterator & 
operator -= ( difference_type __n ) 
{ 
current += __n ; 
return * this ; 
} 






reference 
operator [ ] ( difference_type __n ) const 
{ return * ( * this + __n ) ; } 
} ; 
# 290 "/usr/include/c++/5/bits/stl_iterator.h" 3 
template < typename _Iterator > 
inline bool 
operator == ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return __x . base ( ) == __y . base ( ) ; } 

template < typename _Iterator > 
inline bool 
operator < ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return __y . base ( ) < __x . base ( ) ; } 

template < typename _Iterator > 
inline bool 
operator != ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return ! ( __x == __y ) ; } 

template < typename _Iterator > 
inline bool 
operator > ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return __y < __x ; } 

template < typename _Iterator > 
inline bool 
operator <= ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return ! ( __y < __x ) ; } 

template < typename _Iterator > 
inline bool 
operator >= ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return ! ( __x < __y ) ; } 

template < typename _Iterator > 
inline typename reverse_iterator < _Iterator >:: difference_type 
operator - ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return __y . base ( ) - __x . base ( ) ; } 

template < typename _Iterator > 
inline reverse_iterator < _Iterator > 
operator + ( typename reverse_iterator < _Iterator >:: difference_type __n , 
const reverse_iterator < _Iterator >& __x ) 
{ return reverse_iterator < _Iterator > ( __x . base ( ) - __n ) ; } 



template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator == ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return __x . base ( ) == __y . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator < ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return __y . base ( ) < __x . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator != ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return ! ( __x == __y ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator > ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return __y < __x ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator <= ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return ! ( __y < __x ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator >= ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return ! ( __x < __y ) ; } 

template < typename _IteratorL , typename _IteratorR > 







inline typename reverse_iterator < _IteratorL >:: difference_type 
operator - ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 

{ return __y . base ( ) - __x . base ( ) ; } 
# 414 "/usr/include/c++/5/bits/stl_iterator.h" 3 
template < typename _Container > 
class back_insert_iterator 
: public iterator < output_iterator_tag , void , void , void , void > 
{ 
protected : 
_Container * container ; 

public : 

typedef _Container container_type ; 


explicit 
back_insert_iterator ( _Container & __x ) : container ( & __x ) { } 
# 441 "/usr/include/c++/5/bits/stl_iterator.h" 3 
back_insert_iterator & 
operator = ( typename _Container :: const_reference __value ) 
{ 
container -> push_back ( __value ) ; 
return * this ; 
} 
# 464 "/usr/include/c++/5/bits/stl_iterator.h" 3 
back_insert_iterator & 
operator * ( ) 
{ return * this ; } 


back_insert_iterator & 
operator ++ ( ) 
{ return * this ; } 


back_insert_iterator 
operator ++ ( int ) 
{ return * this ; } 
} ; 
# 490 "/usr/include/c++/5/bits/stl_iterator.h" 3 
template < typename _Container > 
inline back_insert_iterator < _Container > 
back_inserter ( _Container & __x ) 
{ return back_insert_iterator < _Container > ( __x ) ; } 
# 505 "/usr/include/c++/5/bits/stl_iterator.h" 3 
template < typename _Container > 
class front_insert_iterator 
: public iterator < output_iterator_tag , void , void , void , void > 
{ 
protected : 
_Container * container ; 

public : 

typedef _Container container_type ; 


explicit front_insert_iterator ( _Container & __x ) : container ( & __x ) { } 
# 531 "/usr/include/c++/5/bits/stl_iterator.h" 3 
front_insert_iterator & 
operator = ( typename _Container :: const_reference __value ) 
{ 
container -> push_front ( __value ) ; 
return * this ; 
} 
# 554 "/usr/include/c++/5/bits/stl_iterator.h" 3 
front_insert_iterator & 
operator * ( ) 
{ return * this ; } 


front_insert_iterator & 
operator ++ ( ) 
{ return * this ; } 


front_insert_iterator 
operator ++ ( int ) 
{ return * this ; } 
} ; 
# 580 "/usr/include/c++/5/bits/stl_iterator.h" 3 
template < typename _Container > 
inline front_insert_iterator < _Container > 
front_inserter ( _Container & __x ) 
{ return front_insert_iterator < _Container > ( __x ) ; } 
# 599 "/usr/include/c++/5/bits/stl_iterator.h" 3 
template < typename _Container > 
class insert_iterator 
: public iterator < output_iterator_tag , void , void , void , void > 
{ 
protected : 
_Container * container ; 
typename _Container :: iterator iter ; 

public : 

typedef _Container container_type ; 





insert_iterator ( _Container & __x , typename _Container :: iterator __i ) 
: container ( & __x ) , iter ( __i ) { } 
# 642 "/usr/include/c++/5/bits/stl_iterator.h" 3 
insert_iterator & 
operator = ( typename _Container :: const_reference __value ) 
{ 
iter = container -> insert ( iter , __value ) ; 
++ iter ; 
return * this ; 
} 
# 668 "/usr/include/c++/5/bits/stl_iterator.h" 3 
insert_iterator & 
operator * ( ) 
{ return * this ; } 


insert_iterator & 
operator ++ ( ) 
{ return * this ; } 


insert_iterator & 
operator ++ ( int ) 
{ return * this ; } 
} ; 
# 694 "/usr/include/c++/5/bits/stl_iterator.h" 3 
template < typename _Container , typename _Iterator > 
inline insert_iterator < _Container > 
inserter ( _Container & __x , _Iterator __i ) 
{ 
return insert_iterator < _Container > ( __x , 
typename _Container :: iterator ( __i ) ) ; 
} 




} 

namespace __gnu_cxx 
{ 

# 718 "/usr/include/c++/5/bits/stl_iterator.h" 3 
using std :: iterator_traits ; 
using std :: iterator ; 
template < typename _Iterator , typename _Container > 
class __normal_iterator 
{ 
protected : 
_Iterator _M_current ; 

typedef iterator_traits < _Iterator > __traits_type ; 

public : 
typedef _Iterator iterator_type ; 
typedef typename __traits_type :: iterator_category iterator_category ; 
typedef typename __traits_type :: value_type value_type ; 
typedef typename __traits_type :: difference_type difference_type ; 
typedef typename __traits_type :: reference reference ; 
typedef typename __traits_type :: pointer pointer ; 

__normal_iterator ( ) 
: _M_current ( _Iterator ( ) ) { } 

explicit 
__normal_iterator ( const _Iterator & __i ) 
: _M_current ( __i ) { } 


template < typename _Iter > 
__normal_iterator ( const __normal_iterator < _Iter , 
typename __enable_if < 
( std :: __are_same < _Iter , typename _Container :: pointer >:: __value ) , 
_Container >:: __type >& __i ) 
: _M_current ( __i . base ( ) ) { } 


reference 
operator * ( ) const 
{ return * _M_current ; } 

pointer 
operator -> ( ) const 
{ return _M_current ; } 

__normal_iterator & 
operator ++ ( ) 
{ 
++ _M_current ; 
return * this ; 
} 

__normal_iterator 
operator ++ ( int ) 
{ return __normal_iterator ( _M_current ++ ) ; } 


__normal_iterator & 
operator -- ( ) 
{ 
-- _M_current ; 
return * this ; 
} 

__normal_iterator 
operator -- ( int ) 
{ return __normal_iterator ( _M_current -- ) ; } 


reference 
operator [ ] ( difference_type __n ) const 
{ return _M_current [ __n ] ; } 

__normal_iterator & 
operator += ( difference_type __n ) 
{ _M_current += __n ; return * this ; } 

__normal_iterator 
operator + ( difference_type __n ) const 
{ return __normal_iterator ( _M_current + __n ) ; } 

__normal_iterator & 
operator -= ( difference_type __n ) 
{ _M_current -= __n ; return * this ; } 

__normal_iterator 
operator - ( difference_type __n ) const 
{ return __normal_iterator ( _M_current - __n ) ; } 

const _Iterator & 
base ( ) const 
{ return _M_current ; } 
} ; 
# 818 "/usr/include/c++/5/bits/stl_iterator.h" 3 
template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator == ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 

{ return __lhs . base ( ) == __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator == ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 

{ return __lhs . base ( ) == __rhs . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator != ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 

{ return __lhs . base ( ) != __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator != ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 

{ return __lhs . base ( ) != __rhs . base ( ) ; } 


template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator < ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 

{ return __lhs . base ( ) < __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator < ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 

{ return __lhs . base ( ) < __rhs . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator > ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 

{ return __lhs . base ( ) > __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator > ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 

{ return __lhs . base ( ) > __rhs . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator <= ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 

{ return __lhs . base ( ) <= __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator <= ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 

{ return __lhs . base ( ) <= __rhs . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator >= ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 

{ return __lhs . base ( ) >= __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator >= ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 

{ return __lhs . base ( ) >= __rhs . base ( ) ; } 





template < typename _IteratorL , typename _IteratorR , typename _Container > 







inline typename __normal_iterator < _IteratorL , _Container >:: difference_type 
operator - ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 

{ return __lhs . base ( ) - __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline typename __normal_iterator < _Iterator , _Container >:: difference_type 
operator - ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 

{ return __lhs . base ( ) - __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline __normal_iterator < _Iterator , _Container > 
operator + ( typename __normal_iterator < _Iterator , _Container >:: difference_type 
__n , const __normal_iterator < _Iterator , _Container >& __i ) 

{ return __normal_iterator < _Iterator , _Container > ( __i . base ( ) + __n ) ; } 


} 
# 68 "/usr/include/c++/5/bits/stl_algobase.h" 2 3 



# 1 "/usr/include/c++/5/bits/predefined_ops.h" 1 3 
# 33 "/usr/include/c++/5/bits/predefined_ops.h" 3 
namespace __gnu_cxx 
{ 
namespace __ops 
{ 
struct _Iter_less_iter 
{ 
template < typename _Iterator1 , typename _Iterator2 > 

bool 
operator ( ) ( _Iterator1 __it1 , _Iterator2 __it2 ) const 
{ return * __it1 < * __it2 ; } 
} ; 

inline _Iter_less_iter 
__iter_less_iter ( ) 
{ return _Iter_less_iter ( ) ; } 

struct _Iter_less_val 
{ 
template < typename _Iterator , typename _Value > 
bool 
operator ( ) ( _Iterator __it , _Value & __val ) const 
{ return * __it < __val ; } 
} ; 

inline _Iter_less_val 
__iter_less_val ( ) 
{ return _Iter_less_val ( ) ; } 

inline _Iter_less_val 
__iter_comp_val ( _Iter_less_iter ) 
{ return _Iter_less_val ( ) ; } 

struct _Val_less_iter 
{ 
template < typename _Value , typename _Iterator > 
bool 
operator ( ) ( _Value & __val , _Iterator __it ) const 
{ return __val < * __it ; } 
} ; 

inline _Val_less_iter 
__val_less_iter ( ) 
{ return _Val_less_iter ( ) ; } 

inline _Val_less_iter 
__val_comp_iter ( _Iter_less_iter ) 
{ return _Val_less_iter ( ) ; } 

struct _Iter_equal_to_iter 
{ 
template < typename _Iterator1 , typename _Iterator2 > 
bool 
operator ( ) ( _Iterator1 __it1 , _Iterator2 __it2 ) const 
{ return * __it1 == * __it2 ; } 
} ; 

inline _Iter_equal_to_iter 
__iter_equal_to_iter ( ) 
{ return _Iter_equal_to_iter ( ) ; } 

struct _Iter_equal_to_val 
{ 
template < typename _Iterator , typename _Value > 
bool 
operator ( ) ( _Iterator __it , _Value & __val ) const 
{ return * __it == __val ; } 
} ; 

inline _Iter_equal_to_val 
__iter_equal_to_val ( ) 
{ return _Iter_equal_to_val ( ) ; } 

inline _Iter_equal_to_val 
__iter_comp_val ( _Iter_equal_to_iter ) 
{ return _Iter_equal_to_val ( ) ; } 

template < typename _Compare > 
struct _Iter_comp_iter 
{ 
_Compare _M_comp ; 

_Iter_comp_iter ( _Compare __comp ) 
: _M_comp ( __comp ) 
{ } 

template < typename _Iterator1 , typename _Iterator2 > 

bool 
operator ( ) ( _Iterator1 __it1 , _Iterator2 __it2 ) 
{ return bool ( _M_comp ( * __it1 , * __it2 ) ) ; } 
} ; 

template < typename _Compare > 

inline _Iter_comp_iter < _Compare > 
__iter_comp_iter ( _Compare __comp ) 
{ return _Iter_comp_iter < _Compare > ( __comp ) ; } 

template < typename _Compare > 
struct _Iter_comp_val 
{ 
_Compare _M_comp ; 

_Iter_comp_val ( _Compare __comp ) 
: _M_comp ( __comp ) 
{ } 

template < typename _Iterator , typename _Value > 
bool 
operator ( ) ( _Iterator __it , _Value & __val ) 
{ return bool ( _M_comp ( * __it , __val ) ) ; } 
} ; 

template < typename _Compare > 
inline _Iter_comp_val < _Compare > 
__iter_comp_val ( _Compare __comp ) 
{ return _Iter_comp_val < _Compare > ( __comp ) ; } 

template < typename _Compare > 
inline _Iter_comp_val < _Compare > 
__iter_comp_val ( _Iter_comp_iter < _Compare > __comp ) 
{ return _Iter_comp_val < _Compare > ( __comp . _M_comp ) ; } 

template < typename _Compare > 
struct _Val_comp_iter 
{ 
_Compare _M_comp ; 

_Val_comp_iter ( _Compare __comp ) 
: _M_comp ( __comp ) 
{ } 

template < typename _Value , typename _Iterator > 
bool 
operator ( ) ( _Value & __val , _Iterator __it ) 
{ return bool ( _M_comp ( __val , * __it ) ) ; } 
} ; 

template < typename _Compare > 
inline _Val_comp_iter < _Compare > 
__val_comp_iter ( _Compare __comp ) 
{ return _Val_comp_iter < _Compare > ( __comp ) ; } 

template < typename _Compare > 
inline _Val_comp_iter < _Compare > 
__val_comp_iter ( _Iter_comp_iter < _Compare > __comp ) 
{ return _Val_comp_iter < _Compare > ( __comp . _M_comp ) ; } 

template < typename _Value > 
struct _Iter_equals_val 
{ 
_Value & _M_value ; 

_Iter_equals_val ( _Value & __value ) 
: _M_value ( __value ) 
{ } 

template < typename _Iterator > 
bool 
operator ( ) ( _Iterator __it ) 
{ return * __it == _M_value ; } 
} ; 

template < typename _Value > 
inline _Iter_equals_val < _Value > 
__iter_equals_val ( _Value & __val ) 
{ return _Iter_equals_val < _Value > ( __val ) ; } 

template < typename _Iterator1 > 
struct _Iter_equals_iter 
{ 
typename std :: iterator_traits < _Iterator1 >:: reference _M_ref ; 

_Iter_equals_iter ( _Iterator1 __it1 ) 
: _M_ref ( * __it1 ) 
{ } 

template < typename _Iterator2 > 
bool 
operator ( ) ( _Iterator2 __it2 ) 
{ return * __it2 == _M_ref ; } 
} ; 

template < typename _Iterator > 
inline _Iter_equals_iter < _Iterator > 
__iter_comp_iter ( _Iter_equal_to_iter , _Iterator __it ) 
{ return _Iter_equals_iter < _Iterator > ( __it ) ; } 

template < typename _Predicate > 
struct _Iter_pred 
{ 
_Predicate _M_pred ; 

_Iter_pred ( _Predicate __pred ) 
: _M_pred ( __pred ) 
{ } 

template < typename _Iterator > 
bool 
operator ( ) ( _Iterator __it ) 
{ return bool ( _M_pred ( * __it ) ) ; } 
} ; 

template < typename _Predicate > 
inline _Iter_pred < _Predicate > 
__pred_iter ( _Predicate __pred ) 
{ return _Iter_pred < _Predicate > ( __pred ) ; } 

template < typename _Compare , typename _Value > 
struct _Iter_comp_to_val 
{ 
_Compare _M_comp ; 
_Value & _M_value ; 

_Iter_comp_to_val ( _Compare __comp , _Value & __value ) 
: _M_comp ( __comp ) , _M_value ( __value ) 
{ } 

template < typename _Iterator > 
bool 
operator ( ) ( _Iterator __it ) 
{ return bool ( _M_comp ( * __it , _M_value ) ) ; } 
} ; 

template < typename _Compare , typename _Value > 
_Iter_comp_to_val < _Compare , _Value > 
__iter_comp_val ( _Compare __comp , _Value & __val ) 
{ return _Iter_comp_to_val < _Compare , _Value > ( __comp , __val ) ; } 

template < typename _Compare , typename _Iterator1 > 
struct _Iter_comp_to_iter 
{ 
_Compare _M_comp ; 
typename std :: iterator_traits < _Iterator1 >:: reference _M_ref ; 

_Iter_comp_to_iter ( _Compare __comp , _Iterator1 __it1 ) 
: _M_comp ( __comp ) , _M_ref ( * __it1 ) 
{ } 

template < typename _Iterator2 > 
bool 
operator ( ) ( _Iterator2 __it2 ) 
{ return bool ( _M_comp ( * __it2 , _M_ref ) ) ; } 
} ; 

template < typename _Compare , typename _Iterator > 
inline _Iter_comp_to_iter < _Compare , _Iterator > 
__iter_comp_iter ( _Iter_comp_iter < _Compare > __comp , _Iterator __it ) 
{ return _Iter_comp_to_iter < _Compare , _Iterator > ( __comp . _M_comp , __it ) ; } 

template < typename _Predicate > 
struct _Iter_negate 
{ 
_Predicate _M_pred ; 

_Iter_negate ( _Predicate __pred ) 
: _M_pred ( __pred ) 
{ } 

template < typename _Iterator > 
bool 
operator ( ) ( _Iterator __it ) 
{ return ! bool ( _M_pred ( * __it ) ) ; } 
} ; 

template < typename _Predicate > 
inline _Iter_negate < _Predicate > 
__negate ( _Iter_pred < _Predicate > __pred ) 
{ return _Iter_negate < _Predicate > ( __pred . _M_pred ) ; } 

} 
} 
# 72 "/usr/include/c++/5/bits/stl_algobase.h" 2 3 

namespace std 
{ 






template < bool _BoolType > 
struct __iter_swap 
{ 
template < typename _ForwardIterator1 , typename _ForwardIterator2 > 
static void 
iter_swap ( _ForwardIterator1 __a , _ForwardIterator2 __b ) 
{ 
typedef typename iterator_traits < _ForwardIterator1 >:: value_type 
_ValueType1 ; 
_ValueType1 __tmp = ( * __a ) ; 
* __a = ( * __b ) ; 
* __b = ( __tmp ) ; 
} 
} ; 

template <> 
struct __iter_swap < true > 
{ 
template < typename _ForwardIterator1 , typename _ForwardIterator2 > 
static void 
iter_swap ( _ForwardIterator1 __a , _ForwardIterator2 __b ) 
{ __CvT__record_line____(__CvT_miT,16,102);
__CvT__record_line____(__CvT_miT,16,103);swap ( * __a , * __b ) ; 
} 
} ; 
# 118 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _ForwardIterator1 , typename _ForwardIterator2 > 
inline void 
iter_swap ( _ForwardIterator1 __a , _ForwardIterator2 __b ) 
{ __CvT__record_line____(__CvT_miT,16,121);







typedef typename iterator_traits < _ForwardIterator1 >:: value_type 
_ValueType1 ; 
typedef typename iterator_traits < _ForwardIterator2 >:: value_type 
_ValueType2 ; 






typedef typename iterator_traits < _ForwardIterator1 >:: reference 
_ReferenceType1 ; 
typedef typename iterator_traits < _ForwardIterator2 >:: reference 
_ReferenceType2 ; 
__CvT__record_line____(__CvT_miT,16,143);std :: __iter_swap < __are_same < _ValueType1 , _ValueType2 >:: __value 
&& __are_same < _ValueType1 & , _ReferenceType1 >:: __value 
&& __are_same < _ValueType2 & , _ReferenceType2 >:: __value >:: 
iter_swap ( __a , __b ) ; 



} 
# 164 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _ForwardIterator1 , typename _ForwardIterator2 > 
_ForwardIterator2 
swap_ranges ( _ForwardIterator1 __first1 , _ForwardIterator1 __last1 , 
_ForwardIterator2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,16,168);





; 

__CvT__record_line____(__CvT_miT,16,176);for ( ; __first1 != __last1 ; ++ __first1 , ++ __first2 ) 
{__CvT__record_line____(__CvT_miT,16,177);std :: iter_swap ( __first1 , __first2 ) ; 
}__CvT__record_line____(__CvT_miT,16,178);return __first2 ; 
} 
# 192 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _Tp > 

inline const _Tp & 
min ( const _Tp & __a , const _Tp & __b ) 
{ __CvT__record_line____(__CvT_miT,16,196);



__CvT__record_line____(__CvT_miT,16,200);if ( __b < __a ) 
{__CvT__record_line____(__CvT_miT,16,201);return __b ; 
}__CvT__record_line____(__CvT_miT,16,202);return __a ; 
} 
# 216 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _Tp > 

inline const _Tp & 
max ( const _Tp & __a , const _Tp & __b ) 
{ __CvT__record_line____(__CvT_miT,16,220);



__CvT__record_line____(__CvT_miT,16,224);if ( __a < __b ) 
{__CvT__record_line____(__CvT_miT,16,225);return __b ; 
}__CvT__record_line____(__CvT_miT,16,226);return __a ; 
} 
# 240 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _Tp , typename _Compare > 

inline const _Tp & 
min ( const _Tp & __a , const _Tp & __b , _Compare __comp ) 
{ __CvT__record_line____(__CvT_miT,16,244);

__CvT__record_line____(__CvT_miT,16,246);if ( __comp ( __b , __a ) ) 
{__CvT__record_line____(__CvT_miT,16,247);return __b ; 
}__CvT__record_line____(__CvT_miT,16,248);return __a ; 
} 
# 262 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _Tp , typename _Compare > 

inline const _Tp & 
max ( const _Tp & __a , const _Tp & __b , _Compare __comp ) 
{ __CvT__record_line____(__CvT_miT,16,266);

__CvT__record_line____(__CvT_miT,16,268);if ( __comp ( __a , __b ) ) 
{__CvT__record_line____(__CvT_miT,16,269);return __b ; 
}__CvT__record_line____(__CvT_miT,16,270);return __a ; 
} 



template < typename _Iterator > 
struct _Niter_base 
: _Iter_base < _Iterator , __is_normal_iterator < _Iterator >:: __value > 
{ } ; 

template < typename _Iterator > 
inline typename _Niter_base < _Iterator >:: iterator_type 
__niter_base ( _Iterator __it ) 
{ __CvT__record_line____(__CvT_miT,16,283);return std :: _Niter_base < _Iterator >:: _S_base ( __it ) ; } 


template < typename _Iterator > 
struct _Miter_base 
: _Iter_base < _Iterator , __is_move_iterator < _Iterator >:: __value > 
{ } ; 

template < typename _Iterator > 
inline typename _Miter_base < _Iterator >:: iterator_type 
__miter_base ( _Iterator __it ) 
{ __CvT__record_line____(__CvT_miT,16,294);return std :: _Miter_base < _Iterator >:: _S_base ( __it ) ; } 







template < bool , bool , typename > 
struct __copy_move 
{ 
template < typename _II , typename _OI > 
static _OI 
__copy_m ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,16,308);
__CvT__record_line____(__CvT_miT,16,309);for ( ; __first != __last ; ++ __result , ++ __first ) 
{__CvT__record_line____(__CvT_miT,16,310);* __result = * __first ; 
}__CvT__record_line____(__CvT_miT,16,311);return __result ; 
} 
} ; 
# 330 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template <> 
struct __copy_move < false , false , random_access_iterator_tag > 
{ 
template < typename _II , typename _OI > 
static _OI 
__copy_m ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,16,336);
typedef typename iterator_traits < _II >:: difference_type _Distance ; 
__CvT__record_line____(__CvT_miT,16,338);for ( _Distance __n = __last - __first ; __n > 0 ; -- __n ) 
{{ 
__CvT__record_line____(__CvT_miT,16,340);* __result = * __first ; 
__CvT__record_line____(__CvT_miT,16,341);++ __first ; 
__CvT__record_line____(__CvT_miT,16,342);++ __result ; 
} 
}__CvT__record_line____(__CvT_miT,16,344);return __result ; 
} 
} ; 
# 368 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < bool _IsMove > 
struct __copy_move < _IsMove , true , random_access_iterator_tag > 
{ 
template < typename _Tp > 
static _Tp * 
__copy_m ( const _Tp * __first , const _Tp * __last , _Tp * __result ) 
{ __CvT__record_line____(__CvT_miT,16,374);







__CvT__record_line____(__CvT_miT,16,382);const ptrdiff_t _Num = __last - __first ; 
__CvT__record_line____(__CvT_miT,16,383);if ( _Num ) 
{__CvT__record_line____(__CvT_miT,16,384);__builtin_memmove ( __result , __first , sizeof ( _Tp ) * _Num ) ; 
}__CvT__record_line____(__CvT_miT,16,385);return __result + _Num ; 
} 
} ; 

template < bool _IsMove , typename _II , typename _OI > 
inline _OI 
__copy_move_a ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,16,392);
typedef typename iterator_traits < _II >:: value_type _ValueTypeI ; 
typedef typename iterator_traits < _OI >:: value_type _ValueTypeO ; 
typedef typename iterator_traits < _II >:: iterator_category _Category ; 
__CvT__record_line____(__CvT_miT,16,396);const bool __simple = ( __is_trivial ( _ValueTypeI ) 
&& __is_pointer < _II >:: __value 
&& __is_pointer < _OI >:: __value 
&& __are_same < _ValueTypeI , _ValueTypeO >:: __value ) ; 

__CvT__record_line____(__CvT_miT,16,401);return std :: __copy_move < _IsMove , __simple , 
_Category >:: __copy_m ( __first , __last , __result ) ; 
} 



template < typename _CharT > 
struct char_traits ; 

template < typename _CharT , typename _Traits > 
class istreambuf_iterator ; 

template < typename _CharT , typename _Traits > 
class ostreambuf_iterator ; 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT , char_traits < _CharT > > >:: __type 
__copy_move_a2 ( _CharT * , _CharT * , 
ostreambuf_iterator < _CharT , char_traits < _CharT > > ) ; 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT , char_traits < _CharT > > >:: __type 
__copy_move_a2 ( const _CharT * , const _CharT * , 
ostreambuf_iterator < _CharT , char_traits < _CharT > > ) ; 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
_CharT *>:: __type 
__copy_move_a2 ( istreambuf_iterator < _CharT , char_traits < _CharT > > , 
istreambuf_iterator < _CharT , char_traits < _CharT > > , _CharT * ) ; 

template < bool _IsMove , typename _II , typename _OI > 
inline _OI 
__copy_move_a2 ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,16,437);
__CvT__record_line____(__CvT_miT,16,438);return _OI ( std :: __copy_move_a < _IsMove > ( std :: __niter_base ( __first ) , 
std :: __niter_base ( __last ) , 
std :: __niter_base ( __result ) ) ) ; 
} 
# 460 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _II , typename _OI > 
inline _OI 
copy ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,16,463);




; 

__CvT__record_line____(__CvT_miT,16,470);return ( std :: __copy_move_a2 < __is_move_iterator < _II >:: __value > 
( std :: __miter_base ( __first ) , std :: __miter_base ( __last ) , 
__result ) ) ; 
} 
# 512 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < bool , bool , typename > 
struct __copy_move_backward 
{ 
template < typename _BI1 , typename _BI2 > 
static _BI2 
__copy_move_b ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,16,518);
__CvT__record_line____(__CvT_miT,16,519);while ( __first != __last ) 
{__CvT__record_line____(__CvT_miT,16,520);*-- __result = *-- __last ; 
}__CvT__record_line____(__CvT_miT,16,521);return __result ; 
} 
} ; 
# 540 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template <> 
struct __copy_move_backward < false , false , random_access_iterator_tag > 
{ 
template < typename _BI1 , typename _BI2 > 
static _BI2 
__copy_move_b ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,16,546);
__CvT__record_line____(__CvT_miT,16,547);typename iterator_traits < _BI1 >:: difference_type __n ; 
__CvT__record_line____(__CvT_miT,16,548);for ( __n = __last - __first ; __n > 0 ; -- __n ) 
{__CvT__record_line____(__CvT_miT,16,549);*-- __result = *-- __last ; 
}__CvT__record_line____(__CvT_miT,16,550);return __result ; 
} 
} ; 
# 570 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < bool _IsMove > 
struct __copy_move_backward < _IsMove , true , random_access_iterator_tag > 
{ 
template < typename _Tp > 
static _Tp * 
__copy_move_b ( const _Tp * __first , const _Tp * __last , _Tp * __result ) 
{ __CvT__record_line____(__CvT_miT,16,576);







__CvT__record_line____(__CvT_miT,16,584);const ptrdiff_t _Num = __last - __first ; 
__CvT__record_line____(__CvT_miT,16,585);if ( _Num ) 
{__CvT__record_line____(__CvT_miT,16,586);__builtin_memmove ( __result - _Num , __first , sizeof ( _Tp ) * _Num ) ; 
}__CvT__record_line____(__CvT_miT,16,587);return __result - _Num ; 
} 
} ; 

template < bool _IsMove , typename _BI1 , typename _BI2 > 
inline _BI2 
__copy_move_backward_a ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,16,594);
typedef typename iterator_traits < _BI1 >:: value_type _ValueType1 ; 
typedef typename iterator_traits < _BI2 >:: value_type _ValueType2 ; 
typedef typename iterator_traits < _BI1 >:: iterator_category _Category ; 
__CvT__record_line____(__CvT_miT,16,598);const bool __simple = ( __is_trivial ( _ValueType1 ) 
&& __is_pointer < _BI1 >:: __value 
&& __is_pointer < _BI2 >:: __value 
&& __are_same < _ValueType1 , _ValueType2 >:: __value ) ; 

__CvT__record_line____(__CvT_miT,16,603);return std :: __copy_move_backward < _IsMove , __simple , 
_Category >:: __copy_move_b ( __first , 
__last , 
__result ) ; 
} 

template < bool _IsMove , typename _BI1 , typename _BI2 > 
inline _BI2 
__copy_move_backward_a2 ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,16,612);
__CvT__record_line____(__CvT_miT,16,613);return _BI2 ( std :: __copy_move_backward_a < _IsMove > 
( std :: __niter_base ( __first ) , std :: __niter_base ( __last ) , 
std :: __niter_base ( __result ) ) ) ; 
} 
# 636 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _BI1 , typename _BI2 > 
inline _BI2 
copy_backward ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,16,639);






; 

__CvT__record_line____(__CvT_miT,16,648);return ( std :: __copy_move_backward_a2 < __is_move_iterator < _BI1 >:: __value > 
( std :: __miter_base ( __first ) , std :: __miter_base ( __last ) , 
__result ) ) ; 
} 
# 694 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _ForwardIterator , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if <! __is_scalar < _Tp >:: __value , void >:: __type 
__fill_a ( _ForwardIterator __first , _ForwardIterator __last , 
const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,16,699);
__CvT__record_line____(__CvT_miT,16,700);for ( ; __first != __last ; ++ __first ) 
{__CvT__record_line____(__CvT_miT,16,701);* __first = __value ; 
}} 

template < typename _ForwardIterator , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if < __is_scalar < _Tp >:: __value , void >:: __type 
__fill_a ( _ForwardIterator __first , _ForwardIterator __last , 
const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,16,709);
__CvT__record_line____(__CvT_miT,16,710);const _Tp __tmp = __value ; 
__CvT__record_line____(__CvT_miT,16,711);for ( ; __first != __last ; ++ __first ) 
{__CvT__record_line____(__CvT_miT,16,712);* __first = __tmp ; 
}} 


template < typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if < __is_byte < _Tp >:: __value , void >:: __type 
__fill_a ( _Tp * __first , _Tp * __last , const _Tp & __c ) 
{ __CvT__record_line____(__CvT_miT,16,720);
__CvT__record_line____(__CvT_miT,16,721);const _Tp __tmp = __c ; 
__CvT__record_line____(__CvT_miT,16,722);if ( const size_t __len = __last - __first ) 
{__CvT__record_line____(__CvT_miT,16,723);__builtin_memset ( __first , static_cast < unsigned char > ( __tmp ) , __len ) ; 
}} 
# 738 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _ForwardIterator , typename _Tp > 
inline void 
fill ( _ForwardIterator __first , _ForwardIterator __last , const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,16,741);



; 

__CvT__record_line____(__CvT_miT,16,747);std :: __fill_a ( std :: __niter_base ( __first ) , std :: __niter_base ( __last ) , 
__value ) ; 
} 

template < typename _OutputIterator , typename _Size , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if <! __is_scalar < _Tp >:: __value , _OutputIterator >:: __type 
__fill_n_a ( _OutputIterator __first , _Size __n , const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,16,755);
__CvT__record_line____(__CvT_miT,16,756);for ( __decltype ( __n + 0 ) __niter = __n ; 
__niter > 0 ; -- __niter , ++ __first ) 
{__CvT__record_line____(__CvT_miT,16,758);* __first = __value ; 
}__CvT__record_line____(__CvT_miT,16,759);return __first ; 
} 

template < typename _OutputIterator , typename _Size , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if < __is_scalar < _Tp >:: __value , _OutputIterator >:: __type 
__fill_n_a ( _OutputIterator __first , _Size __n , const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,16,766);
__CvT__record_line____(__CvT_miT,16,767);const _Tp __tmp = __value ; 
__CvT__record_line____(__CvT_miT,16,768);for ( __decltype ( __n + 0 ) __niter = __n ; 
__niter > 0 ; -- __niter , ++ __first ) 
{__CvT__record_line____(__CvT_miT,16,770);* __first = __tmp ; 
}__CvT__record_line____(__CvT_miT,16,771);return __first ; 
} 

template < typename _Size , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if < __is_byte < _Tp >:: __value , _Tp *>:: __type 
__fill_n_a ( _Tp * __first , _Size __n , const _Tp & __c ) 
{ __CvT__record_line____(__CvT_miT,16,778);
__CvT__record_line____(__CvT_miT,16,779);std :: __fill_a ( __first , __first + __n , __c ) ; 
__CvT__record_line____(__CvT_miT,16,780);return __first + __n ; 
} 
# 798 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _OI , typename _Size , typename _Tp > 
inline _OI 
fill_n ( _OI __first , _Size __n , const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,16,801);



__CvT__record_line____(__CvT_miT,16,805);return _OI ( std :: __fill_n_a ( std :: __niter_base ( __first ) , __n , __value ) ) ; 
} 

template < bool _BoolType > 
struct __equal 
{ 
template < typename _II1 , typename _II2 > 
static bool 
equal ( _II1 __first1 , _II1 __last1 , _II2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,16,814);
__CvT__record_line____(__CvT_miT,16,815);for ( ; __first1 != __last1 ; ++ __first1 , ++ __first2 ) 
{__CvT__record_line____(__CvT_miT,16,816);if ( ! ( * __first1 == * __first2 ) ) 
{__CvT__record_line____(__CvT_miT,16,817);return false ; 
}}__CvT__record_line____(__CvT_miT,16,818);return true ; 
} 
} ; 

template <> 
struct __equal < true > 
{ 
template < typename _Tp > 
static bool 
equal ( const _Tp * __first1 , const _Tp * __last1 , const _Tp * __first2 ) 
{ __CvT__record_line____(__CvT_miT,16,828);
__CvT__record_line____(__CvT_miT,16,829);if ( const size_t __len = ( __last1 - __first1 ) ) 
{__CvT__record_line____(__CvT_miT,16,830);return ! __builtin_memcmp ( __first1 , __first2 , sizeof ( _Tp ) * __len ) ; 
}__CvT__record_line____(__CvT_miT,16,831);return true ; 
} 
} ; 

template < typename _II1 , typename _II2 > 
inline bool 
__equal_aux ( _II1 __first1 , _II1 __last1 , _II2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,16,838);
typedef typename iterator_traits < _II1 >:: value_type _ValueType1 ; 
typedef typename iterator_traits < _II2 >:: value_type _ValueType2 ; 
__CvT__record_line____(__CvT_miT,16,841);const bool __simple = ( ( __is_integer < _ValueType1 >:: __value 
|| __is_pointer < _ValueType1 >:: __value ) 
&& __is_pointer < _II1 >:: __value 
&& __is_pointer < _II2 >:: __value 
&& __are_same < _ValueType1 , _ValueType2 >:: __value ) ; 

__CvT__record_line____(__CvT_miT,16,847);return std :: __equal < __simple >:: equal ( __first1 , __last1 , __first2 ) ; 
} 

template < typename , typename > 
struct __lc_rai 
{ 
template < typename _II1 , typename _II2 > 
static _II1 
__newlast1 ( _II1 , _II1 __last1 , _II2 , _II2 ) 
{ __CvT__record_line____(__CvT_miT,16,856);return __last1 ; } 

template < typename _II > 
static bool 
__cnd2 ( _II __first , _II __last ) 
{ __CvT__record_line____(__CvT_miT,16,861);return __first != __last ; } 
} ; 

template <> 
struct __lc_rai < random_access_iterator_tag , random_access_iterator_tag > 
{ 
template < typename _RAI1 , typename _RAI2 > 
static _RAI1 
__newlast1 ( _RAI1 __first1 , _RAI1 __last1 , 
_RAI2 __first2 , _RAI2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,16,871);
__CvT__record_line____(__CvT_miT,16,872);const typename iterator_traits < _RAI1 >:: difference_type 
__diff1 = __last1 - __first1 ; 
__CvT__record_line____(__CvT_miT,16,874);const typename iterator_traits < _RAI2 >:: difference_type 
__diff2 = __last2 - __first2 ; 
__CvT__record_line____(__CvT_miT,16,876);return __diff2 < __diff1 ? __first1 + __diff2 : __last1 ; 
} 

template < typename _RAI > 
static bool 
__cnd2 ( _RAI , _RAI ) 
{ __CvT__record_line____(__CvT_miT,16,882);return true ; } 
} ; 

template < typename _II1 , typename _II2 , typename _Compare > 
bool 
__lexicographical_compare_impl ( _II1 __first1 , _II1 __last1 , 
_II2 __first2 , _II2 __last2 , 
_Compare __comp ) 
{ __CvT__record_line____(__CvT_miT,16,890);
typedef typename iterator_traits < _II1 >:: iterator_category _Category1 ; 
typedef typename iterator_traits < _II2 >:: iterator_category _Category2 ; 
typedef std :: __lc_rai < _Category1 , _Category2 > __rai_type ; 

__CvT__record_line____(__CvT_miT,16,895);__last1 = __rai_type :: __newlast1 ( __first1 , __last1 , __first2 , __last2 ) ; 
__CvT__record_line____(__CvT_miT,16,896);for ( ; __first1 != __last1 && __rai_type :: __cnd2 ( __first2 , __last2 ) ; 
++ __first1 , ++ __first2 ) 
{{ 
__CvT__record_line____(__CvT_miT,16,899);if ( __comp ( __first1 , __first2 ) ) 
{__CvT__record_line____(__CvT_miT,16,900);return true ; 
}__CvT__record_line____(__CvT_miT,16,901);if ( __comp ( __first2 , __first1 ) ) 
{__CvT__record_line____(__CvT_miT,16,902);return false ; 
}} 
}__CvT__record_line____(__CvT_miT,16,904);return __first1 == __last1 && __first2 != __last2 ; 
} 

template < bool _BoolType > 
struct __lexicographical_compare 
{ 
template < typename _II1 , typename _II2 > 
static bool __lc ( _II1 , _II1 , _II2 , _II2 ) ; 
} ; 

template < bool _BoolType > 
template < typename _II1 , typename _II2 > 
bool 
__lexicographical_compare < _BoolType >:: 
__lc ( _II1 __first1 , _II1 __last1 , _II2 __first2 , _II2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,16,919);
__CvT__record_line____(__CvT_miT,16,920);return std :: __lexicographical_compare_impl ( __first1 , __last1 , 
__first2 , __last2 , 
__gnu_cxx :: __ops :: __iter_less_iter ( ) ) ; 
} 

template <> 
struct __lexicographical_compare < true > 
{ 
template < typename _Tp , typename _Up > 
static bool 
__lc ( const _Tp * __first1 , const _Tp * __last1 , 
const _Up * __first2 , const _Up * __last2 ) 
{ __CvT__record_line____(__CvT_miT,16,932);
__CvT__record_line____(__CvT_miT,16,933);const size_t __len1 = __last1 - __first1 ; 
__CvT__record_line____(__CvT_miT,16,934);const size_t __len2 = __last2 - __first2 ; 
__CvT__record_line____(__CvT_miT,16,935);if ( const size_t __len = std :: min ( __len1 , __len2 ) ) 
{__CvT__record_line____(__CvT_miT,16,936);if ( int __result = __builtin_memcmp ( __first1 , __first2 , __len ) ) 
{__CvT__record_line____(__CvT_miT,16,937);return __result < 0 ; 
}}__CvT__record_line____(__CvT_miT,16,938);return __len1 < __len2 ; 
} 
} ; 

template < typename _II1 , typename _II2 > 
inline bool 
__lexicographical_compare_aux ( _II1 __first1 , _II1 __last1 , 
_II2 __first2 , _II2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,16,946);
typedef typename iterator_traits < _II1 >:: value_type _ValueType1 ; 
typedef typename iterator_traits < _II2 >:: value_type _ValueType2 ; 
__CvT__record_line____(__CvT_miT,16,949);const bool __simple = 
( __is_byte < _ValueType1 >:: __value && __is_byte < _ValueType2 >:: __value 
&& ! __gnu_cxx :: __numeric_traits < _ValueType1 >:: __is_signed 
&& ! __gnu_cxx :: __numeric_traits < _ValueType2 >:: __is_signed 
&& __is_pointer < _II1 >:: __value 
&& __is_pointer < _II2 >:: __value ) ; 

__CvT__record_line____(__CvT_miT,16,956);return std :: __lexicographical_compare < __simple >:: __lc ( __first1 , __last1 , 
__first2 , __last2 ) ; 
} 

template < typename _ForwardIterator , typename _Tp , typename _Compare > 
_ForwardIterator 
__lower_bound ( _ForwardIterator __first , _ForwardIterator __last , 
const _Tp & __val , _Compare __comp ) 
{ __CvT__record_line____(__CvT_miT,16,964);
typedef typename iterator_traits < _ForwardIterator >:: difference_type 
_DistanceType ; 

__CvT__record_line____(__CvT_miT,16,968);_DistanceType __len = std :: distance ( __first , __last ) ; 

__CvT__record_line____(__CvT_miT,16,970);while ( __len > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,16,972);_DistanceType __half = __len >> 1 ; 
__CvT__record_line____(__CvT_miT,16,973);_ForwardIterator __middle = __first ; 
__CvT__record_line____(__CvT_miT,16,974);std :: advance ( __middle , __half ) ; 
__CvT__record_line____(__CvT_miT,16,975);if ( __comp ( __middle , __val ) ) 
{{ 
__CvT__record_line____(__CvT_miT,16,977);__first = __middle ; 
__CvT__record_line____(__CvT_miT,16,978);++ __first ; 
__CvT__record_line____(__CvT_miT,16,979);__len = __len - __half - 1 ; 
} 
}else {
__CvT__record_line____(__CvT_miT,16,982);__len = __half ; 
}} 
}__CvT__record_line____(__CvT_miT,16,984);return __first ; 
} 
# 998 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _ForwardIterator , typename _Tp > 
inline _ForwardIterator 
lower_bound ( _ForwardIterator __first , _ForwardIterator __last , 
const _Tp & __val ) 
{ __CvT__record_line____(__CvT_miT,16,1002);




; 

__CvT__record_line____(__CvT_miT,16,1009);return std :: __lower_bound ( __first , __last , __val , 
__gnu_cxx :: __ops :: __iter_less_val ( ) ) ; 
} 



inline int 
__lg ( int __n ) 
{ __CvT__record_line____(__CvT_miT,16,1017);return sizeof ( int ) * 8 - 1 - __builtin_clz ( __n ) ; } 

inline unsigned 
__lg ( unsigned __n ) 
{ __CvT__record_line____(__CvT_miT,16,1021);return sizeof ( int ) * 8 - 1 - __builtin_clz ( __n ) ; } 

inline long 
__lg ( long __n ) 
{ __CvT__record_line____(__CvT_miT,16,1025);return sizeof ( long ) * 8 - 1 - __builtin_clzl ( __n ) ; } 

inline unsigned long 
__lg ( unsigned long __n ) 
{ __CvT__record_line____(__CvT_miT,16,1029);return sizeof ( long ) * 8 - 1 - __builtin_clzl ( __n ) ; } 

inline long long 
__lg ( long long __n ) 
{ __CvT__record_line____(__CvT_miT,16,1033);return sizeof ( long long ) * 8 - 1 - __builtin_clzll ( __n ) ; } 

inline unsigned long long 
__lg ( unsigned long long __n ) 
{ __CvT__record_line____(__CvT_miT,16,1037);return sizeof ( long long ) * 8 - 1 - __builtin_clzll ( __n ) ; } 




# 1055 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _II1 , typename _II2 > 
inline bool 
equal ( _II1 __first1 , _II1 __last1 , _II2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,16,1058);






; 

__CvT__record_line____(__CvT_miT,16,1067);return std :: __equal_aux ( std :: __niter_base ( __first1 ) , 
std :: __niter_base ( __last1 ) , 
std :: __niter_base ( __first2 ) ) ; 
} 
# 1087 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _IIter1 , typename _IIter2 , typename _BinaryPredicate > 
inline bool 
equal ( _IIter1 __first1 , _IIter1 __last1 , 
_IIter2 __first2 , _BinaryPredicate __binary_pred ) 
{ __CvT__record_line____(__CvT_miT,16,1091);



; 

__CvT__record_line____(__CvT_miT,16,1097);for ( ; __first1 != __last1 ; ++ __first1 , ++ __first2 ) 
{__CvT__record_line____(__CvT_miT,16,1098);if ( ! bool ( __binary_pred ( * __first1 , * __first2 ) ) ) 
{__CvT__record_line____(__CvT_miT,16,1099);return false ; 
}}__CvT__record_line____(__CvT_miT,16,1100);return true ; 
} 
# 1215 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _II1 , typename _II2 > 
inline bool 
lexicographical_compare ( _II1 __first1 , _II1 __last1 , 
_II2 __first2 , _II2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,16,1219);









; 
; 

__CvT__record_line____(__CvT_miT,16,1232);return std :: __lexicographical_compare_aux ( std :: __niter_base ( __first1 ) , 
std :: __niter_base ( __last1 ) , 
std :: __niter_base ( __first2 ) , 
std :: __niter_base ( __last2 ) ) ; 
} 
# 1251 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _II1 , typename _II2 , typename _Compare > 
inline bool 
lexicographical_compare ( _II1 __first1 , _II1 __last1 , 
_II2 __first2 , _II2 __last2 , _Compare __comp ) 
{ __CvT__record_line____(__CvT_miT,16,1255);



; 
; 

__CvT__record_line____(__CvT_miT,16,1262);return std :: __lexicographical_compare_impl 
( __first1 , __last1 , __first2 , __last2 , 
__gnu_cxx :: __ops :: __iter_comp_iter ( __comp ) ) ; 
} 

template < typename _InputIterator1 , typename _InputIterator2 , 
typename _BinaryPredicate > 
pair < _InputIterator1 , _InputIterator2 > 
__mismatch ( _InputIterator1 __first1 , _InputIterator1 __last1 , 
_InputIterator2 __first2 , _BinaryPredicate __binary_pred ) 
{ __CvT__record_line____(__CvT_miT,16,1272);
__CvT__record_line____(__CvT_miT,16,1273);while ( __first1 != __last1 && __binary_pred ( __first1 , __first2 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,16,1275);++ __first1 ; 
__CvT__record_line____(__CvT_miT,16,1276);++ __first2 ; 
} 
}__CvT__record_line____(__CvT_miT,16,1278);return pair < _InputIterator1 , _InputIterator2 > ( __first1 , __first2 ) ; 
} 
# 1294 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _InputIterator1 , typename _InputIterator2 > 
inline pair < _InputIterator1 , _InputIterator2 > 
mismatch ( _InputIterator1 __first1 , _InputIterator1 __last1 , 
_InputIterator2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,16,1298);






; 

__CvT__record_line____(__CvT_miT,16,1307);return std :: __mismatch ( __first1 , __last1 , __first2 , 
__gnu_cxx :: __ops :: __iter_equal_to_iter ( ) ) ; 
} 
# 1327 "/usr/include/c++/5/bits/stl_algobase.h" 3 
template < typename _InputIterator1 , typename _InputIterator2 , 
typename _BinaryPredicate > 
inline pair < _InputIterator1 , _InputIterator2 > 
mismatch ( _InputIterator1 __first1 , _InputIterator1 __last1 , 
_InputIterator2 __first2 , _BinaryPredicate __binary_pred ) 
{ __CvT__record_line____(__CvT_miT,16,1332);



; 

__CvT__record_line____(__CvT_miT,16,1338);return std :: __mismatch ( __first1 , __last1 , __first2 , 
__gnu_cxx :: __ops :: __iter_comp_iter ( __binary_pred ) ) ; 
} 
# 1427 "/usr/include/c++/5/bits/stl_algobase.h" 3 

} 
# 40 "/usr/include/c++/5/bits/char_traits.h" 2 3 
# 1 "/usr/include/c++/5/bits/postypes.h" 1 3 
# 38 "/usr/include/c++/5/bits/postypes.h" 3 

# 39 "/usr/include/c++/5/bits/postypes.h" 3 

# 1 "/usr/include/c++/5/cwchar" 1 3 
# 39 "/usr/include/c++/5/cwchar" 3 

# 40 "/usr/include/c++/5/cwchar" 3 




# 1 "/usr/include/wchar.h" 1 3 4 
# 36 "/usr/include/wchar.h" 3 4 
# 1 "/usr/include/stdio.h" 1 3 4 
# 44 "/usr/include/stdio.h" 3 4 
struct _IO_FILE ; 



typedef struct _IO_FILE FILE ; 





# 64 "/usr/include/stdio.h" 3 4 
typedef struct _IO_FILE __FILE ; 
# 37 "/usr/include/wchar.h" 2 3 4 


# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4 
# 40 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4 
typedef __builtin_va_list __gnuc_va_list ; 
# 40 "/usr/include/wchar.h" 2 3 4 

# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4 
# 42 "/usr/include/wchar.h" 2 3 4 
# 51 "/usr/include/wchar.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4 
# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4 
typedef long unsigned int size_t ; 
# 357 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4 
typedef unsigned int wint_t ; 
# 52 "/usr/include/wchar.h" 2 3 4 
# 82 "/usr/include/wchar.h" 3 4 
typedef struct 
{ 
int __count ; 
union 
{ 

unsigned int __wch ; 



char __wchb [ 4 ] ; 
} __value ; 
} __mbstate_t ; 
# 104 "/usr/include/wchar.h" 3 4 


typedef __mbstate_t mbstate_t ; 






# 132 "/usr/include/wchar.h" 3 4 
extern "C" { 




struct tm ; 









extern wchar_t * wcscpy ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src ) 
throw ( ) ; 


extern wchar_t * wcsncpy ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src , size_t __n ) 
throw ( ) ; 


extern wchar_t * wcscat ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src ) 
throw ( ) ; 

extern wchar_t * wcsncat ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src , size_t __n ) 
throw ( ) ; 


extern int wcscmp ( const wchar_t * __s1 , const wchar_t * __s2 ) 
throw ( ) ; 

extern int wcsncmp ( const wchar_t * __s1 , const wchar_t * __s2 , size_t __n ) 
throw ( ) ; 




extern int wcscasecmp ( const wchar_t * __s1 , const wchar_t * __s2 ) throw ( ) ; 


extern int wcsncasecmp ( const wchar_t * __s1 , const wchar_t * __s2 , 
size_t __n ) throw ( ) ; 



# 1 "/usr/include/xlocale.h" 1 3 4 
# 27 "/usr/include/xlocale.h" 3 4 
typedef struct __locale_struct 
{ 

struct __locale_data * __locales [ 13 ] ; 


const unsigned short int * __ctype_b ; 
const int * __ctype_tolower ; 
const int * __ctype_toupper ; 


const char * __names [ 13 ] ; 
} * __locale_t ; 


typedef __locale_t locale_t ; 
# 184 "/usr/include/wchar.h" 2 3 4 

extern int wcscasecmp_l ( const wchar_t * __s1 , const wchar_t * __s2 , 
__locale_t __loc ) throw ( ) ; 

extern int wcsncasecmp_l ( const wchar_t * __s1 , const wchar_t * __s2 , 
size_t __n , __locale_t __loc ) throw ( ) ; 





extern int wcscoll ( const wchar_t * __s1 , const wchar_t * __s2 ) throw ( ) ; 



extern size_t wcsxfrm ( wchar_t * __restrict __s1 , 
const wchar_t * __restrict __s2 , size_t __n ) throw ( ) ; 








extern int wcscoll_l ( const wchar_t * __s1 , const wchar_t * __s2 , 
__locale_t __loc ) throw ( ) ; 




extern size_t wcsxfrm_l ( wchar_t * __s1 , const wchar_t * __s2 , 
size_t __n , __locale_t __loc ) throw ( ) ; 


extern wchar_t * wcsdup ( const wchar_t * __s ) throw ( ) ; 





extern "C++" wchar_t * wcschr ( wchar_t * __wcs , wchar_t __wc ) 
throw ( ) __asm ( "wcschr" ) ; 
extern "C++" const wchar_t * wcschr ( const wchar_t * __wcs , wchar_t __wc ) 
throw ( ) __asm ( "wcschr" ) ; 






extern "C++" wchar_t * wcsrchr ( wchar_t * __wcs , wchar_t __wc ) 
throw ( ) __asm ( "wcsrchr" ) ; 
extern "C++" const wchar_t * wcsrchr ( const wchar_t * __wcs , wchar_t __wc ) 
throw ( ) __asm ( "wcsrchr" ) ; 









extern wchar_t * wcschrnul ( const wchar_t * __s , wchar_t __wc ) 
throw ( ) ; 





extern size_t wcscspn ( const wchar_t * __wcs , const wchar_t * __reject ) 
throw ( ) ; 


extern size_t wcsspn ( const wchar_t * __wcs , const wchar_t * __accept ) 
throw ( ) ; 


extern "C++" wchar_t * wcspbrk ( wchar_t * __wcs , const wchar_t * __accept ) 
throw ( ) __asm ( "wcspbrk" ) ; 
extern "C++" const wchar_t * wcspbrk ( const wchar_t * __wcs , 
const wchar_t * __accept ) 
throw ( ) __asm ( "wcspbrk" ) ; 






extern "C++" wchar_t * wcsstr ( wchar_t * __haystack , const wchar_t * __needle ) 
throw ( ) __asm ( "wcsstr" ) ; 
extern "C++" const wchar_t * wcsstr ( const wchar_t * __haystack , 
const wchar_t * __needle ) 
throw ( ) __asm ( "wcsstr" ) ; 






extern wchar_t * wcstok ( wchar_t * __restrict __s , 
const wchar_t * __restrict __delim , 
wchar_t ** __restrict __ptr ) throw ( ) ; 


extern size_t wcslen ( const wchar_t * __s ) throw ( ) ; 





extern "C++" wchar_t * wcswcs ( wchar_t * __haystack , const wchar_t * __needle ) 
throw ( ) __asm ( "wcswcs" ) ; 
extern "C++" const wchar_t * wcswcs ( const wchar_t * __haystack , 
const wchar_t * __needle ) 
throw ( ) __asm ( "wcswcs" ) ; 
# 309 "/usr/include/wchar.h" 3 4 
extern size_t wcsnlen ( const wchar_t * __s , size_t __maxlen ) 
throw ( ) ; 






extern "C++" wchar_t * wmemchr ( wchar_t * __s , wchar_t __c , size_t __n ) 
throw ( ) __asm ( "wmemchr" ) ; 
extern "C++" const wchar_t * wmemchr ( const wchar_t * __s , wchar_t __c , 
size_t __n ) 
throw ( ) __asm ( "wmemchr" ) ; 






extern int wmemcmp ( const wchar_t * __s1 , const wchar_t * __s2 , size_t __n ) 
throw ( ) ; 


extern wchar_t * wmemcpy ( wchar_t * __restrict __s1 , 
const wchar_t * __restrict __s2 , size_t __n ) throw ( ) ; 



extern wchar_t * wmemmove ( wchar_t * __s1 , const wchar_t * __s2 , size_t __n ) 
throw ( ) ; 


extern wchar_t * wmemset ( wchar_t * __s , wchar_t __c , size_t __n ) throw ( ) ; 





extern wchar_t * wmempcpy ( wchar_t * __restrict __s1 , 
const wchar_t * __restrict __s2 , size_t __n ) 
throw ( ) ; 






extern wint_t btowc ( int __c ) throw ( ) ; 



extern int wctob ( wint_t __c ) throw ( ) ; 



extern int mbsinit ( const mbstate_t * __ps ) throw ( ) ; 



extern size_t mbrtowc ( wchar_t * __restrict __pwc , 
const char * __restrict __s , size_t __n , 
mbstate_t * __restrict __p ) throw ( ) ; 


extern size_t wcrtomb ( char * __restrict __s , wchar_t __wc , 
mbstate_t * __restrict __ps ) throw ( ) ; 


extern size_t __mbrlen ( const char * __restrict __s , size_t __n , 
mbstate_t * __restrict __ps ) throw ( ) ; 
extern size_t mbrlen ( const char * __restrict __s , size_t __n , 
mbstate_t * __restrict __ps ) throw ( ) ; 

# 408 "/usr/include/wchar.h" 3 4 



extern size_t mbsrtowcs ( wchar_t * __restrict __dst , 
const char ** __restrict __src , size_t __len , 
mbstate_t * __restrict __ps ) throw ( ) ; 



extern size_t wcsrtombs ( char * __restrict __dst , 
const wchar_t ** __restrict __src , size_t __len , 
mbstate_t * __restrict __ps ) throw ( ) ; 






extern size_t mbsnrtowcs ( wchar_t * __restrict __dst , 
const char ** __restrict __src , size_t __nmc , 
size_t __len , mbstate_t * __restrict __ps ) throw ( ) ; 



extern size_t wcsnrtombs ( char * __restrict __dst , 
const wchar_t ** __restrict __src , 
size_t __nwc , size_t __len , 
mbstate_t * __restrict __ps ) throw ( ) ; 






extern int wcwidth ( wchar_t __c ) throw ( ) ; 



extern int wcswidth ( const wchar_t * __s , size_t __n ) throw ( ) ; 






extern double wcstod ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr ) throw ( ) ; 





extern float wcstof ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr ) throw ( ) ; 
extern long double wcstold ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr ) throw ( ) ; 







extern long int wcstol ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base ) throw ( ) ; 



extern unsigned long int wcstoul ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base ) 
throw ( ) ; 







extern long long int wcstoll ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base ) 
throw ( ) ; 




extern unsigned long long int wcstoull ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base ) throw ( ) ; 







extern long long int wcstoq ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base ) 
throw ( ) ; 




extern unsigned long long int wcstouq ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base ) throw ( ) ; 
# 533 "/usr/include/wchar.h" 3 4 
extern long int wcstol_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base , 
__locale_t __loc ) throw ( ) ; 

extern unsigned long int wcstoul_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base , __locale_t __loc ) throw ( ) ; 


extern long long int wcstoll_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base , __locale_t __loc ) throw ( ) ; 


extern unsigned long long int wcstoull_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base , __locale_t __loc ) 
throw ( ) ; 

extern double wcstod_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , __locale_t __loc ) 
throw ( ) ; 

extern float wcstof_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , __locale_t __loc ) 
throw ( ) ; 

extern long double wcstold_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
__locale_t __loc ) throw ( ) ; 






extern wchar_t * wcpcpy ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src ) throw ( ) ; 



extern wchar_t * wcpncpy ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src , size_t __n ) 
throw ( ) ; 






extern __FILE * open_wmemstream ( wchar_t ** __bufloc , size_t * __sizeloc ) throw ( ) ; 






extern int fwide ( __FILE * __fp , int __mode ) throw ( ) ; 






extern int fwprintf ( __FILE * __restrict __stream , 
const wchar_t * __restrict __format , ... ) 
; 




extern int wprintf ( const wchar_t * __restrict __format , ... ) 
; 

extern int swprintf ( wchar_t * __restrict __s , size_t __n , 
const wchar_t * __restrict __format , ... ) 
throw ( ) ; 





extern int vfwprintf ( __FILE * __restrict __s , 
const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
; 




extern int vwprintf ( const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
; 


extern int vswprintf ( wchar_t * __restrict __s , size_t __n , 
const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
throw ( ) ; 






extern int fwscanf ( __FILE * __restrict __stream , 
const wchar_t * __restrict __format , ... ) 
; 




extern int wscanf ( const wchar_t * __restrict __format , ... ) 
; 

extern int swscanf ( const wchar_t * __restrict __s , 
const wchar_t * __restrict __format , ... ) 
throw ( ) ; 
# 683 "/usr/include/wchar.h" 3 4 









extern int vfwscanf ( __FILE * __restrict __s , 
const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
; 




extern int vwscanf ( const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
; 

extern int vswscanf ( const wchar_t * __restrict __s , 
const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
throw ( ) ; 
# 739 "/usr/include/wchar.h" 3 4 









extern wint_t fgetwc ( __FILE * __stream ) ; 
extern wint_t getwc ( __FILE * __stream ) ; 





extern wint_t getwchar ( void ) ; 






extern wint_t fputwc ( wchar_t __wc , __FILE * __stream ) ; 
extern wint_t putwc ( wchar_t __wc , __FILE * __stream ) ; 





extern wint_t putwchar ( wchar_t __wc ) ; 







extern wchar_t * fgetws ( wchar_t * __restrict __ws , int __n , 
__FILE * __restrict __stream ) ; 





extern int fputws ( const wchar_t * __restrict __ws , 
__FILE * __restrict __stream ) ; 






extern wint_t ungetwc ( wint_t __wc , __FILE * __stream ) ; 

# 804 "/usr/include/wchar.h" 3 4 
extern wint_t getwc_unlocked ( __FILE * __stream ) ; 
extern wint_t getwchar_unlocked ( void ) ; 







extern wint_t fgetwc_unlocked ( __FILE * __stream ) ; 







extern wint_t fputwc_unlocked ( wchar_t __wc , __FILE * __stream ) ; 
# 830 "/usr/include/wchar.h" 3 4 
extern wint_t putwc_unlocked ( wchar_t __wc , __FILE * __stream ) ; 
extern wint_t putwchar_unlocked ( wchar_t __wc ) ; 
# 840 "/usr/include/wchar.h" 3 4 
extern wchar_t * fgetws_unlocked ( wchar_t * __restrict __ws , int __n , 
__FILE * __restrict __stream ) ; 







extern int fputws_unlocked ( const wchar_t * __restrict __ws , 
__FILE * __restrict __stream ) ; 







extern size_t wcsftime ( wchar_t * __restrict __s , size_t __maxsize , 
const wchar_t * __restrict __format , 
const struct tm * __restrict __tp ) throw ( ) ; 







extern size_t wcsftime_l ( wchar_t * __restrict __s , size_t __maxsize , 
const wchar_t * __restrict __format , 
const struct tm * __restrict __tp , 
__locale_t __loc ) throw ( ) ; 
# 894 "/usr/include/wchar.h" 3 4 
} 
# 45 "/usr/include/c++/5/cwchar" 2 3 
# 62 "/usr/include/c++/5/cwchar" 3 
namespace std 
{ 
using :: mbstate_t ; 
} 
# 135 "/usr/include/c++/5/cwchar" 3 
namespace std 
{ 


using :: wint_t ; 

using :: btowc ; 
using :: fgetwc ; 
using :: fgetws ; 
using :: fputwc ; 
using :: fputws ; 
using :: fwide ; 
using :: fwprintf ; 
using :: fwscanf ; 
using :: getwc ; 
using :: getwchar ; 
using :: mbrlen ; 
using :: mbrtowc ; 
using :: mbsinit ; 
using :: mbsrtowcs ; 
using :: putwc ; 
using :: putwchar ; 

using :: swprintf ; 

using :: swscanf ; 
using :: ungetwc ; 
using :: vfwprintf ; 

using :: vfwscanf ; 


using :: vswprintf ; 


using :: vswscanf ; 

using :: vwprintf ; 

using :: vwscanf ; 

using :: wcrtomb ; 
using :: wcscat ; 
using :: wcscmp ; 
using :: wcscoll ; 
using :: wcscpy ; 
using :: wcscspn ; 
using :: wcsftime ; 
using :: wcslen ; 
using :: wcsncat ; 
using :: wcsncmp ; 
using :: wcsncpy ; 
using :: wcsrtombs ; 
using :: wcsspn ; 
using :: wcstod ; 

using :: wcstof ; 

using :: wcstok ; 
using :: wcstol ; 
using :: wcstoul ; 
using :: wcsxfrm ; 
using :: wctob ; 
using :: wmemcmp ; 
using :: wmemcpy ; 
using :: wmemmove ; 
using :: wmemset ; 
using :: wprintf ; 
using :: wscanf ; 
using :: wcschr ; 
using :: wcspbrk ; 
using :: wcsrchr ; 
using :: wcsstr ; 
using :: wmemchr ; 
# 232 "/usr/include/c++/5/cwchar" 3 

} 







namespace __gnu_cxx 
{ 





using :: wcstold ; 
# 257 "/usr/include/c++/5/cwchar" 3 
using :: wcstoll ; 
using :: wcstoull ; 

} 

namespace std 
{ 
using :: __gnu_cxx :: wcstold ; 
using :: __gnu_cxx :: wcstoll ; 
using :: __gnu_cxx :: wcstoull ; 
} 
# 41 "/usr/include/c++/5/bits/postypes.h" 2 3 
# 68 "/usr/include/c++/5/bits/postypes.h" 3 
namespace std 
{ 

# 88 "/usr/include/c++/5/bits/postypes.h" 3 
typedef long streamoff ; 
# 98 "/usr/include/c++/5/bits/postypes.h" 3 
typedef ptrdiff_t streamsize ; 
# 111 "/usr/include/c++/5/bits/postypes.h" 3 
template < typename _StateT > 
class fpos 
{ 
private : 
streamoff _M_off ; 
_StateT _M_state ; 

public : 




fpos ( ) 
: _M_off ( 0 ) , _M_state ( ) { __CvT__record_line____(__CvT_miT,31,124);} 
# 133 "/usr/include/c++/5/bits/postypes.h" 3 
fpos ( streamoff __off ) 
: _M_off ( __off ) , _M_state ( ) { __CvT__record_line____(__CvT_miT,31,134);} 


operator streamoff ( ) const { __CvT__record_line____(__CvT_miT,31,137);return _M_off ; } 


void 
state ( _StateT __st ) 
{ __CvT__record_line____(__CvT_miT,31,142);_M_state = __st ; } 


_StateT 
state ( ) const 
{ __CvT__record_line____(__CvT_miT,31,147);return _M_state ; } 





fpos & 
operator += ( streamoff __off ) 
{ __CvT__record_line____(__CvT_miT,31,155);
__CvT__record_line____(__CvT_miT,31,156);_M_off += __off ; 
__CvT__record_line____(__CvT_miT,31,157);return * this ; 
} 





fpos & 
operator -= ( streamoff __off ) 
{ __CvT__record_line____(__CvT_miT,31,166);
__CvT__record_line____(__CvT_miT,31,167);_M_off -= __off ; 
__CvT__record_line____(__CvT_miT,31,168);return * this ; 
} 







fpos 
operator + ( streamoff __off ) const 
{ __CvT__record_line____(__CvT_miT,31,179);
__CvT__record_line____(__CvT_miT,31,180);fpos __pos ( * this ) ; 
__CvT__record_line____(__CvT_miT,31,181);__pos += __off ; 
__CvT__record_line____(__CvT_miT,31,182);return __pos ; 
} 







fpos 
operator - ( streamoff __off ) const 
{ __CvT__record_line____(__CvT_miT,31,193);
__CvT__record_line____(__CvT_miT,31,194);fpos __pos ( * this ) ; 
__CvT__record_line____(__CvT_miT,31,195);__pos -= __off ; 
__CvT__record_line____(__CvT_miT,31,196);return __pos ; 
} 






streamoff 
operator - ( const fpos & __other ) const 
{ __CvT__record_line____(__CvT_miT,31,206);return _M_off - __other . _M_off ; } 
} ; 






template < typename _StateT > 
inline bool 
operator == ( const fpos < _StateT >& __lhs , const fpos < _StateT >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,31,217);return streamoff ( __lhs ) == streamoff ( __rhs ) ; } 

template < typename _StateT > 
inline bool 
operator != ( const fpos < _StateT >& __lhs , const fpos < _StateT >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,31,222);return streamoff ( __lhs ) != streamoff ( __rhs ) ; } 





typedef fpos < mbstate_t > streampos ; 

typedef fpos < mbstate_t > wstreampos ; 
# 239 "/usr/include/c++/5/bits/postypes.h" 3 

} 
# 41 "/usr/include/c++/5/bits/char_traits.h" 2 3 
# 1 "/usr/include/c++/5/cwchar" 1 3 
# 39 "/usr/include/c++/5/cwchar" 3 

# 40 "/usr/include/c++/5/cwchar" 3 




# 1 "/usr/include/wchar.h" 1 3 4 
# 45 "/usr/include/c++/5/cwchar" 2 3 
# 42 "/usr/include/c++/5/bits/char_traits.h" 2 3 

namespace __gnu_cxx 
{ 

# 57 "/usr/include/c++/5/bits/char_traits.h" 3 
template < typename _CharT > 
struct _Char_types 
{ 
typedef unsigned long int_type ; 
typedef std :: streampos pos_type ; 
typedef std :: streamoff off_type ; 
typedef std :: mbstate_t state_type ; 
} ; 
# 82 "/usr/include/c++/5/bits/char_traits.h" 3 
template < typename _CharT > 
struct char_traits 
{ 
typedef _CharT char_type ; 
typedef typename _Char_types < _CharT >:: int_type int_type ; 
typedef typename _Char_types < _CharT >:: pos_type pos_type ; 
typedef typename _Char_types < _CharT >:: off_type off_type ; 
typedef typename _Char_types < _CharT >:: state_type state_type ; 

static void 
assign ( char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,93);__c1 = __c2 ; } 

static bool 
eq ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,97);return __c1 == __c2 ; } 

static bool 
lt ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,101);return __c1 < __c2 ; } 

static int 
compare ( const char_type * __s1 , const char_type * __s2 , std :: size_t __n ) ; 

static std :: size_t 
length ( const char_type * __s ) ; 

static const char_type * 
find ( const char_type * __s , std :: size_t __n , const char_type & __a ) ; 

static char_type * 
move ( char_type * __s1 , const char_type * __s2 , std :: size_t __n ) ; 

static char_type * 
copy ( char_type * __s1 , const char_type * __s2 , std :: size_t __n ) ; 

static char_type * 
assign ( char_type * __s , std :: size_t __n , char_type __a ) ; 

static char_type 
to_char_type ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,123);return static_cast < char_type > ( __c ) ; } 

static int_type 
to_int_type ( const char_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,127);return static_cast < int_type > ( __c ) ; } 

static bool 
eq_int_type ( const int_type & __c1 , const int_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,131);return __c1 == __c2 ; } 

static int_type 
eof ( ) 
{ __CvT__record_line____(__CvT_miT,15,135);return static_cast < int_type > ( - 1 ) ; } 

static int_type 
not_eof ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,139);return ! eq_int_type ( __c , eof ( ) ) ? __c : to_int_type ( char_type ( ) ) ; } 
} ; 

template < typename _CharT > 
int 
char_traits < _CharT >:: 
compare ( const char_type * __s1 , const char_type * __s2 , std :: size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,146);
__CvT__record_line____(__CvT_miT,15,147);for ( std :: size_t __i = 0 ; __i < __n ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,15,148);if ( lt ( __s1 [ __i ] , __s2 [ __i ] ) ) 
{__CvT__record_line____(__CvT_miT,15,149);return - 1 ; 
}else {__CvT__record_line____(__CvT_miT,15,150);if ( lt ( __s2 [ __i ] , __s1 [ __i ] ) ) 
{__CvT__record_line____(__CvT_miT,15,151);return 1 ; 
}}}__CvT__record_line____(__CvT_miT,15,152);return 0 ; 
} 

template < typename _CharT > 
std :: size_t 
char_traits < _CharT >:: 
length ( const char_type * __p ) 
{ __CvT__record_line____(__CvT_miT,15,159);
__CvT__record_line____(__CvT_miT,15,160);std :: size_t __i = 0 ; 
__CvT__record_line____(__CvT_miT,15,161);while ( ! eq ( __p [ __i ] , char_type ( ) ) ) 
{__CvT__record_line____(__CvT_miT,15,162);++ __i ; 
}__CvT__record_line____(__CvT_miT,15,163);return __i ; 
} 

template < typename _CharT > 
const typename char_traits < _CharT >:: char_type * 
char_traits < _CharT >:: 
find ( const char_type * __s , std :: size_t __n , const char_type & __a ) 
{ __CvT__record_line____(__CvT_miT,15,170);
__CvT__record_line____(__CvT_miT,15,171);for ( std :: size_t __i = 0 ; __i < __n ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,15,172);if ( eq ( __s [ __i ] , __a ) ) 
{__CvT__record_line____(__CvT_miT,15,173);return __s + __i ; 
}}__CvT__record_line____(__CvT_miT,15,174);return 0 ; 
} 

template < typename _CharT > 
typename char_traits < _CharT >:: char_type * 
char_traits < _CharT >:: 
move ( char_type * __s1 , const char_type * __s2 , std :: size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,181);
__CvT__record_line____(__CvT_miT,15,182);return static_cast < _CharT *> ( __builtin_memmove ( __s1 , __s2 , 
__n * sizeof ( char_type ) ) ) ; 
} 

template < typename _CharT > 
typename char_traits < _CharT >:: char_type * 
char_traits < _CharT >:: 
copy ( char_type * __s1 , const char_type * __s2 , std :: size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,190);

__CvT__record_line____(__CvT_miT,15,192);std :: copy ( __s2 , __s2 + __n , __s1 ) ; 
__CvT__record_line____(__CvT_miT,15,193);return __s1 ; 
} 

template < typename _CharT > 
typename char_traits < _CharT >:: char_type * 
char_traits < _CharT >:: 
assign ( char_type * __s , std :: size_t __n , char_type __a ) 
{ __CvT__record_line____(__CvT_miT,15,200);

__CvT__record_line____(__CvT_miT,15,202);std :: fill_n ( __s , __n , __a ) ; 
__CvT__record_line____(__CvT_miT,15,203);return __s ; 
} 


} 

namespace std 
{ 

# 226 "/usr/include/c++/5/bits/char_traits.h" 3 
template < class _CharT > 
struct char_traits : public __gnu_cxx :: char_traits < _CharT > 
{ } ; 



template <> 
struct char_traits < char > 
{ 
typedef char char_type ; 
typedef int int_type ; 
typedef streampos pos_type ; 
typedef streamoff off_type ; 
typedef mbstate_t state_type ; 

static void 
assign ( char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,243);__c1 = __c2 ; } 

static bool 
eq ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,247);return __c1 == __c2 ; } 

static bool 
lt ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,251);

__CvT__record_line____(__CvT_miT,15,253);return ( static_cast < unsigned char > ( __c1 ) 
< static_cast < unsigned char > ( __c2 ) ) ; 
} 

static int 
compare ( const char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,259);
__CvT__record_line____(__CvT_miT,15,260);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,15,261);return 0 ; 
}__CvT__record_line____(__CvT_miT,15,262);return __builtin_memcmp ( __s1 , __s2 , __n ) ; 
} 

static size_t 
length ( const char_type * __s ) 
{ __CvT__record_line____(__CvT_miT,15,267);return __builtin_strlen ( __s ) ; } 

static const char_type * 
find ( const char_type * __s , size_t __n , const char_type & __a ) 
{ __CvT__record_line____(__CvT_miT,15,271);
__CvT__record_line____(__CvT_miT,15,272);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,15,273);return 0 ; 
}__CvT__record_line____(__CvT_miT,15,274);return static_cast < const char_type *> ( __builtin_memchr ( __s , __a , __n ) ) ; 
} 

static char_type * 
move ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,279);
__CvT__record_line____(__CvT_miT,15,280);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,15,281);return __s1 ; 
}__CvT__record_line____(__CvT_miT,15,282);return static_cast < char_type *> ( __builtin_memmove ( __s1 , __s2 , __n ) ) ; 
} 

static char_type * 
copy ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,287);
__CvT__record_line____(__CvT_miT,15,288);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,15,289);return __s1 ; 
}__CvT__record_line____(__CvT_miT,15,290);return static_cast < char_type *> ( __builtin_memcpy ( __s1 , __s2 , __n ) ) ; 
} 

static char_type * 
assign ( char_type * __s , size_t __n , char_type __a ) 
{ __CvT__record_line____(__CvT_miT,15,295);
__CvT__record_line____(__CvT_miT,15,296);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,15,297);return __s ; 
}__CvT__record_line____(__CvT_miT,15,298);return static_cast < char_type *> ( __builtin_memset ( __s , __a , __n ) ) ; 
} 

static char_type 
to_char_type ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,303);return static_cast < char_type > ( __c ) ; } 



static int_type 
to_int_type ( const char_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,309);return static_cast < int_type > ( static_cast < unsigned char > ( __c ) ) ; } 

static bool 
eq_int_type ( const int_type & __c1 , const int_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,313);return __c1 == __c2 ; } 

static int_type 
eof ( ) 
{ __CvT__record_line____(__CvT_miT,15,317);return static_cast < int_type > ( - 1 ) ; } 

static int_type 
not_eof ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,321);return ( __c == eof ( ) ) ? 0 : __c ; } 
} ; 




template <> 
struct char_traits < wchar_t > 
{ 
typedef wchar_t char_type ; 
typedef wint_t int_type ; 
typedef streamoff off_type ; 
typedef wstreampos pos_type ; 
typedef mbstate_t state_type ; 

static void 
assign ( char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,338);__c1 = __c2 ; } 

static bool 
eq ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,342);return __c1 == __c2 ; } 

static bool 
lt ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,346);return __c1 < __c2 ; } 

static int 
compare ( const char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,350);
__CvT__record_line____(__CvT_miT,15,351);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,15,352);return 0 ; 
}__CvT__record_line____(__CvT_miT,15,353);return wmemcmp ( __s1 , __s2 , __n ) ; 
} 

static size_t 
length ( const char_type * __s ) 
{ __CvT__record_line____(__CvT_miT,15,358);return wcslen ( __s ) ; } 

static const char_type * 
find ( const char_type * __s , size_t __n , const char_type & __a ) 
{ __CvT__record_line____(__CvT_miT,15,362);
__CvT__record_line____(__CvT_miT,15,363);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,15,364);return 0 ; 
}__CvT__record_line____(__CvT_miT,15,365);return wmemchr ( __s , __a , __n ) ; 
} 

static char_type * 
move ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,370);
__CvT__record_line____(__CvT_miT,15,371);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,15,372);return __s1 ; 
}__CvT__record_line____(__CvT_miT,15,373);return wmemmove ( __s1 , __s2 , __n ) ; 
} 

static char_type * 
copy ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,378);
__CvT__record_line____(__CvT_miT,15,379);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,15,380);return __s1 ; 
}__CvT__record_line____(__CvT_miT,15,381);return wmemcpy ( __s1 , __s2 , __n ) ; 
} 

static char_type * 
assign ( char_type * __s , size_t __n , char_type __a ) 
{ __CvT__record_line____(__CvT_miT,15,386);
__CvT__record_line____(__CvT_miT,15,387);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,15,388);return __s ; 
}__CvT__record_line____(__CvT_miT,15,389);return wmemset ( __s , __a , __n ) ; 
} 

static char_type 
to_char_type ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,394);return char_type ( __c ) ; } 

static int_type 
to_int_type ( const char_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,398);return int_type ( __c ) ; } 

static bool 
eq_int_type ( const int_type & __c1 , const int_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,402);return __c1 == __c2 ; } 

static int_type 
eof ( ) 
{ __CvT__record_line____(__CvT_miT,15,406);return static_cast < int_type > ( ( 0xffffffffu ) ) ; } 

static int_type 
not_eof ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,410);return eq_int_type ( __c , eof ( ) ) ? 0 : __c ; } 
} ; 



} 
# 41 "/usr/include/c++/5/string" 2 3 
# 1 "/usr/include/c++/5/bits/allocator.h" 1 3 
# 46 "/usr/include/c++/5/bits/allocator.h" 3 
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++allocator.h" 1 3 
# 33 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++allocator.h" 3 
# 1 "/usr/include/c++/5/ext/new_allocator.h" 1 3 
# 33 "/usr/include/c++/5/ext/new_allocator.h" 3 
# 1 "/usr/include/c++/5/new" 1 3 
# 37 "/usr/include/c++/5/new" 3 

# 38 "/usr/include/c++/5/new" 3 


# 1 "/usr/include/c++/5/exception" 1 3 
# 33 "/usr/include/c++/5/exception" 3 

# 34 "/usr/include/c++/5/exception" 3 

# pragma GCC visibility push ( default ) 
 

# 1 "/usr/include/c++/5/bits/atomic_lockfree_defines.h" 1 3 
# 33 "/usr/include/c++/5/bits/atomic_lockfree_defines.h" 3 

# 34 "/usr/include/c++/5/bits/atomic_lockfree_defines.h" 3 
# 39 "/usr/include/c++/5/exception" 2 3 

extern "C++" { 

namespace std 
{ 
# 60 "/usr/include/c++/5/exception" 3 
class exception 
{ 
public : 
exception ( ) throw ( ) { } 
virtual ~ exception ( ) throw ( ) ; 



virtual const char * what ( ) const throw ( ) ; 
} ; 



class bad_exception : public exception 
{ 
public : 
bad_exception ( ) throw ( ) { __CvT__record_line____(__CvT_miT,43,76);} 



virtual ~ bad_exception ( ) throw ( ) ; 


virtual const char * what ( ) const throw ( ) ; 
} ; 


typedef void ( * terminate_handler ) ( ) ; 


typedef void ( * unexpected_handler ) ( ) ; 


terminate_handler set_terminate ( terminate_handler ) throw ( ) ; 
# 102 "/usr/include/c++/5/exception" 3 
void terminate ( ) throw ( ) ; 


unexpected_handler set_unexpected ( unexpected_handler ) throw ( ) ; 
# 114 "/usr/include/c++/5/exception" 3 
void unexpected ( ) ; 
# 127 "/usr/include/c++/5/exception" 3 
bool uncaught_exception ( ) throw ( ) ; 


} 

namespace __gnu_cxx 
{ 

# 152 "/usr/include/c++/5/exception" 3 
void __verbose_terminate_handler ( ) ; 


} 

} 

# pragma GCC visibility pop 
 # 41 "/usr/include/c++/5/new" 2 3 

# pragma GCC visibility push ( default ) 
 
extern "C++" { 

namespace std 
{ 






class bad_alloc : public exception 
{ 
public : 
bad_alloc ( ) throw ( ) { __CvT__record_line____(__CvT_miT,42,56);} 



virtual ~ bad_alloc ( ) throw ( ) ; 


virtual const char * what ( ) const throw ( ) ; 
} ; 
# 82 "/usr/include/c++/5/new" 3 
struct nothrow_t { } ; 

extern const nothrow_t nothrow ; 



typedef void ( * new_handler ) ( ) ; 



new_handler set_new_handler ( new_handler ) throw ( ) ; 





} 
# 111 "/usr/include/c++/5/new" 3 
void * operator new ( std :: size_t ) throw ( std :: bad_alloc ) 
; 
void * operator new [ ] ( std :: size_t ) throw ( std :: bad_alloc ) 
; 
void operator delete ( void * ) throw ( ) 
; 
void operator delete [ ] ( void * ) throw ( ) 
; 
void * operator new ( std :: size_t , const std :: nothrow_t & ) throw ( ) 
; 
void * operator new [ ] ( std :: size_t , const std :: nothrow_t & ) throw ( ) 
; 
void operator delete ( void * , const std :: nothrow_t & ) throw ( ) 
; 
void operator delete [ ] ( void * , const std :: nothrow_t & ) throw ( ) 
; 


inline void * operator new ( std :: size_t , void * __p ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,42,130);return __p ; } 
inline void * operator new [ ] ( std :: size_t , void * __p ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,42,132);return __p ; } 


inline void operator delete ( void * , void * ) throw ( ) { __CvT__record_line____(__CvT_miT,42,135);} 
inline void operator delete [ ] ( void * , void * ) throw ( ) { __CvT__record_line____(__CvT_miT,42,136);} 

} 

# pragma GCC visibility pop 
 # 34 "/usr/include/c++/5/ext/new_allocator.h" 2 3 






namespace __gnu_cxx 
{ 


using std :: size_t ; 
using std :: ptrdiff_t ; 
# 57 "/usr/include/c++/5/ext/new_allocator.h" 3 
template < typename _Tp > 
class new_allocator 
{ 
public : 
typedef size_t size_type ; 
typedef ptrdiff_t difference_type ; 
typedef _Tp * pointer ; 
typedef const _Tp * const_pointer ; 
typedef _Tp & reference ; 
typedef const _Tp & const_reference ; 
typedef _Tp value_type ; 

template < typename _Tp1 > 
struct rebind 
{ typedef new_allocator < _Tp1 > other ; } ; 







new_allocator ( ) throw ( ) { __CvT__record_line____(__CvT_miT,41,79);} 

new_allocator ( const new_allocator & ) throw ( ) { __CvT__record_line____(__CvT_miT,41,81);} 

template < typename _Tp1 > 
new_allocator ( const new_allocator < _Tp1 >& ) throw ( ) { __CvT__record_line____(__CvT_miT,41,84);} 

~ new_allocator ( ) throw ( ) { __CvT__record_line____(__CvT_miT,41,86);} 

pointer 
address ( reference __x ) const 
{ __CvT__record_line____(__CvT_miT,41,90);return std :: __addressof ( __x ) ; } 

const_pointer 
address ( const_reference __x ) const 
{ __CvT__record_line____(__CvT_miT,41,94);return std :: __addressof ( __x ) ; } 



pointer 
allocate ( size_type __n , const void * = 0 ) 
{ __CvT__record_line____(__CvT_miT,41,100);
__CvT__record_line____(__CvT_miT,41,101);if ( __n > this -> max_size ( ) ) 
{__CvT__record_line____(__CvT_miT,41,102);std :: __throw_bad_alloc ( ) ; 

}__CvT__record_line____(__CvT_miT,41,104);return static_cast < _Tp *> ( :: operator new ( __n * sizeof ( _Tp ) ) ) ; 
} 


void 
deallocate ( pointer __p , size_type ) 
{ __CvT__record_line____(__CvT_miT,41,110);:: operator delete ( __p ) ; } 

size_type 
max_size ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,41,114);return size_t ( - 1 ) / sizeof ( _Tp ) ; } 
# 128 "/usr/include/c++/5/ext/new_allocator.h" 3 
void 
construct ( pointer __p , const _Tp & __val ) 
{ __CvT__record_line____(__CvT_miT,41,130);:: new ( ( void * ) __p ) _Tp ( __val ) ; } 

void 
destroy ( pointer __p ) { __CvT__record_line____(__CvT_miT,41,133);__p -> ~ _Tp ( ) ; } 

} ; 

template < typename _Tp > 
inline bool 
operator == ( const new_allocator < _Tp >& , const new_allocator < _Tp >& ) 
{ __CvT__record_line____(__CvT_miT,41,140);return true ; } 

template < typename _Tp > 
inline bool 
operator != ( const new_allocator < _Tp >& , const new_allocator < _Tp >& ) 
{ __CvT__record_line____(__CvT_miT,41,145);return false ; } 


} 
# 34 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++allocator.h" 2 3 
# 47 "/usr/include/c++/5/bits/allocator.h" 2 3 





namespace std 
{ 








template <> 
class allocator < void > 
{ 
public : 
typedef size_t size_type ; 
typedef ptrdiff_t difference_type ; 
typedef void * pointer ; 
typedef const void * const_pointer ; 
typedef void value_type ; 

template < typename _Tp1 > 
struct rebind 
{ typedef allocator < _Tp1 > other ; } ; 






} ; 
# 91 "/usr/include/c++/5/bits/allocator.h" 3 
template < typename _Tp > 
class allocator : public __gnu_cxx :: new_allocator < _Tp > 
{ 
public : 
typedef size_t size_type ; 
typedef ptrdiff_t difference_type ; 
typedef _Tp * pointer ; 
typedef const _Tp * const_pointer ; 
typedef _Tp & reference ; 
typedef const _Tp & const_reference ; 
typedef _Tp value_type ; 

template < typename _Tp1 > 
struct rebind 
{ typedef allocator < _Tp1 > other ; } ; 







allocator ( ) throw ( ) { __CvT__record_line____(__CvT_miT,39,113);} 

allocator ( const allocator & __a ) throw ( ) 
: __gnu_cxx :: new_allocator < _Tp > ( __a ) { __CvT__record_line____(__CvT_miT,39,116);} 

template < typename _Tp1 > 
allocator ( const allocator < _Tp1 >& ) throw ( ) { __CvT__record_line____(__CvT_miT,39,119);} 

~ allocator ( ) throw ( ) { __CvT__record_line____(__CvT_miT,39,121);} 


} ; 

template < typename _T1 , typename _T2 > 
inline bool 
operator == ( const allocator < _T1 >& , const allocator < _T2 >& ) 
throw ( ) 
{ __CvT__record_line____(__CvT_miT,39,130);return true ; } 

template < typename _Tp > 
inline bool 
operator == ( const allocator < _Tp >& , const allocator < _Tp >& ) 
throw ( ) 
{ __CvT__record_line____(__CvT_miT,39,136);return true ; } 

template < typename _T1 , typename _T2 > 
inline bool 
operator != ( const allocator < _T1 >& , const allocator < _T2 >& ) 
throw ( ) 
{ __CvT__record_line____(__CvT_miT,39,142);return false ; } 

template < typename _Tp > 
inline bool 
operator != ( const allocator < _Tp >& , const allocator < _Tp >& ) 
throw ( ) 
{ __CvT__record_line____(__CvT_miT,39,148);return false ; } 






extern template class allocator < char > ; 
extern template class allocator < wchar_t > ; 






template < typename _Alloc , bool = __is_empty ( _Alloc ) > 
struct __alloc_swap 
{ static void _S_do_it ( _Alloc & , _Alloc & ) { __CvT__record_line____(__CvT_miT,39,165);} } ; 

template < typename _Alloc > 
struct __alloc_swap < _Alloc , false > 
{ 
static void 
_S_do_it ( _Alloc & __one , _Alloc & __two ) 
{ __CvT__record_line____(__CvT_miT,39,172);

__CvT__record_line____(__CvT_miT,39,174);if ( __one != __two ) 
{__CvT__record_line____(__CvT_miT,39,175);swap ( __one , __two ) ; 
}} 
} ; 


template < typename _Alloc , bool = __is_empty ( _Alloc ) > 
struct __alloc_neq 
{ 
static bool 
_S_do_it ( const _Alloc & , const _Alloc & ) 
{ __CvT__record_line____(__CvT_miT,39,185);return false ; } 
} ; 

template < typename _Alloc > 
struct __alloc_neq < _Alloc , false > 
{ 
static bool 
_S_do_it ( const _Alloc & __one , const _Alloc & __two ) 
{ __CvT__record_line____(__CvT_miT,39,193);return __one != __two ; } 
} ; 
# 226 "/usr/include/c++/5/bits/allocator.h" 3 

} 
# 42 "/usr/include/c++/5/string" 2 3 

# 1 "/usr/include/c++/5/bits/localefwd.h" 1 3 
# 37 "/usr/include/c++/5/bits/localefwd.h" 3 

# 38 "/usr/include/c++/5/bits/localefwd.h" 3 


# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 1 3 
# 39 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 3 

# 40 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 3 

# 1 "/usr/include/c++/5/clocale" 1 3 
# 39 "/usr/include/c++/5/clocale" 3 

# 40 "/usr/include/c++/5/clocale" 3 


# 1 "/usr/include/locale.h" 1 3 4 
# 28 "/usr/include/locale.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4 
# 29 "/usr/include/locale.h" 2 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/locale.h" 1 3 4 
# 30 "/usr/include/locale.h" 2 3 4 

extern "C" { 
# 50 "/usr/include/locale.h" 3 4 



struct lconv 
{ 


char * decimal_point ; 
char * thousands_sep ; 





char * grouping ; 





char * int_curr_symbol ; 
char * currency_symbol ; 
char * mon_decimal_point ; 
char * mon_thousands_sep ; 
char * mon_grouping ; 
char * positive_sign ; 
char * negative_sign ; 
char int_frac_digits ; 
char frac_digits ; 

char p_cs_precedes ; 

char p_sep_by_space ; 

char n_cs_precedes ; 

char n_sep_by_space ; 






char p_sign_posn ; 
char n_sign_posn ; 


char int_p_cs_precedes ; 

char int_p_sep_by_space ; 

char int_n_cs_precedes ; 

char int_n_sep_by_space ; 






char int_p_sign_posn ; 
char int_n_sign_posn ; 
# 120 "/usr/include/locale.h" 3 4 
} ; 



extern char * setlocale ( int __category , const char * __locale ) throw ( ) ; 


extern struct lconv * localeconv ( void ) throw ( ) ; 


# 151 "/usr/include/locale.h" 3 4 
extern __locale_t newlocale ( int __category_mask , const char * __locale , 
__locale_t __base ) throw ( ) ; 
# 186 "/usr/include/locale.h" 3 4 
extern __locale_t duplocale ( __locale_t __dataset ) throw ( ) ; 



extern void freelocale ( __locale_t __dataset ) throw ( ) ; 






extern __locale_t uselocale ( __locale_t __dataset ) throw ( ) ; 







} 
# 43 "/usr/include/c++/5/clocale" 2 3 
# 51 "/usr/include/c++/5/clocale" 3 
namespace std 
{ 
using :: lconv ; 
using :: setlocale ; 
using :: localeconv ; 
} 
# 42 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 2 3 






namespace __gnu_cxx 
{ 


extern "C" __typeof ( uselocale ) __uselocale ; 


} 


namespace std 
{ 


typedef __locale_t __c_locale ; 





inline int 
__convert_from_v ( const __c_locale & __cloc , 
char * __out , 
const int __size , 
const char * __fmt , ... ) 
{ __CvT__record_line____(__CvT_miT,46,73);

__CvT__record_line____(__CvT_miT,46,75);__c_locale __old = __gnu_cxx :: __uselocale ( __cloc ) ; 
# 88 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 3 
__CvT__record_line____(__CvT_miT,46,88);__builtin_va_list __args ; 
__CvT__record_line____(__CvT_miT,46,89);__builtin_va_start ( __args , __fmt ) ; 


__CvT__record_line____(__CvT_miT,46,92);const int __ret = __builtin_vsnprintf ( __out , __size , __fmt , __args ) ; 




__CvT__record_line____(__CvT_miT,46,97);__builtin_va_end ( __args ) ; 


__CvT__record_line____(__CvT_miT,46,100);__gnu_cxx :: __uselocale ( __old ) ; 







__CvT__record_line____(__CvT_miT,46,108);return __ret ; 
} 


} 
# 41 "/usr/include/c++/5/bits/localefwd.h" 2 3 
# 1 "/usr/include/c++/5/iosfwd" 1 3 
# 36 "/usr/include/c++/5/iosfwd" 3 

# 37 "/usr/include/c++/5/iosfwd" 3 





namespace std 
{ 

# 74 "/usr/include/c++/5/iosfwd" 3 
class ios_base ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_ios ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_streambuf ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_istream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_ostream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_iostream ; 


namespace __cxx11 { 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_stringbuf ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_istringstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_ostringstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_stringstream ; 

} 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_filebuf ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_ifstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_ofstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_fstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class istreambuf_iterator ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class ostreambuf_iterator ; 



typedef basic_ios < char > ios ; 


typedef basic_streambuf < char > streambuf ; 


typedef basic_istream < char > istream ; 


typedef basic_ostream < char > ostream ; 


typedef basic_iostream < char > iostream ; 


typedef basic_stringbuf < char > stringbuf ; 


typedef basic_istringstream < char > istringstream ; 


typedef basic_ostringstream < char > ostringstream ; 


typedef basic_stringstream < char > stringstream ; 


typedef basic_filebuf < char > filebuf ; 


typedef basic_ifstream < char > ifstream ; 


typedef basic_ofstream < char > ofstream ; 


typedef basic_fstream < char > fstream ; 



typedef basic_ios < wchar_t > wios ; 


typedef basic_streambuf < wchar_t > wstreambuf ; 


typedef basic_istream < wchar_t > wistream ; 


typedef basic_ostream < wchar_t > wostream ; 


typedef basic_iostream < wchar_t > wiostream ; 


typedef basic_stringbuf < wchar_t > wstringbuf ; 


typedef basic_istringstream < wchar_t > wistringstream ; 


typedef basic_ostringstream < wchar_t > wostringstream ; 


typedef basic_stringstream < wchar_t > wstringstream ; 


typedef basic_filebuf < wchar_t > wfilebuf ; 


typedef basic_ifstream < wchar_t > wifstream ; 


typedef basic_ofstream < wchar_t > wofstream ; 


typedef basic_fstream < wchar_t > wfstream ; 




} 
# 42 "/usr/include/c++/5/bits/localefwd.h" 2 3 
# 1 "/usr/include/c++/5/cctype" 1 3 
# 39 "/usr/include/c++/5/cctype" 3 

# 40 "/usr/include/c++/5/cctype" 3 


# 1 "/usr/include/ctype.h" 1 3 4 
# 26 "/usr/include/ctype.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4 
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4 
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4 


typedef unsigned char __u_char ; 
typedef unsigned short int __u_short ; 
typedef unsigned int __u_int ; 
typedef unsigned long int __u_long ; 


typedef signed char __int8_t ; 
typedef unsigned char __uint8_t ; 
typedef signed short int __int16_t ; 
typedef unsigned short int __uint16_t ; 
typedef signed int __int32_t ; 
typedef unsigned int __uint32_t ; 

typedef signed long int __int64_t ; 
typedef unsigned long int __uint64_t ; 







typedef long int __quad_t ; 
typedef unsigned long int __u_quad_t ; 
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4 
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4 


typedef unsigned long int __dev_t ; 
typedef unsigned int __uid_t ; 
typedef unsigned int __gid_t ; 
typedef unsigned long int __ino_t ; 
typedef unsigned long int __ino64_t ; 
typedef unsigned int __mode_t ; 
typedef unsigned long int __nlink_t ; 
typedef long int __off_t ; 
typedef long int __off64_t ; 
typedef int __pid_t ; 
typedef struct { int __val [ 2 ] ; } __fsid_t ; 
typedef long int __clock_t ; 
typedef unsigned long int __rlim_t ; 
typedef unsigned long int __rlim64_t ; 
typedef unsigned int __id_t ; 
typedef long int __time_t ; 
typedef unsigned int __useconds_t ; 
typedef long int __suseconds_t ; 

typedef int __daddr_t ; 
typedef int __key_t ; 


typedef int __clockid_t ; 


typedef void * __timer_t ; 


typedef long int __blksize_t ; 




typedef long int __blkcnt_t ; 
typedef long int __blkcnt64_t ; 


typedef unsigned long int __fsblkcnt_t ; 
typedef unsigned long int __fsblkcnt64_t ; 


typedef unsigned long int __fsfilcnt_t ; 
typedef unsigned long int __fsfilcnt64_t ; 


typedef long int __fsword_t ; 

typedef long int __ssize_t ; 


typedef long int __syscall_slong_t ; 

typedef unsigned long int __syscall_ulong_t ; 



typedef __off64_t __loff_t ; 
typedef __quad_t * __qaddr_t ; 
typedef char * __caddr_t ; 


typedef long int __intptr_t ; 


typedef unsigned int __socklen_t ; 
# 27 "/usr/include/ctype.h" 2 3 4 

extern "C" { 
# 39 "/usr/include/ctype.h" 3 4 
# 1 "/usr/include/endian.h" 1 3 4 
# 36 "/usr/include/endian.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4 
# 37 "/usr/include/endian.h" 2 3 4 
# 60 "/usr/include/endian.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4 
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4 
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4 






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4 
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4 
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4 
static __inline unsigned int 
__bswap_32 ( unsigned int __bsx ) 
{ __CvT__record_line____(__CvT_miT,57,46);
__CvT__record_line____(__CvT_miT,57,47);return __builtin_bswap32 ( __bsx ) ; 
} 
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4 
static __inline __uint64_t 
__bswap_64 ( __uint64_t __bsx ) 
{ __CvT__record_line____(__CvT_miT,57,110);
__CvT__record_line____(__CvT_miT,57,111);return __builtin_bswap64 ( __bsx ) ; 
} 
# 61 "/usr/include/endian.h" 2 3 4 
# 40 "/usr/include/ctype.h" 2 3 4 






enum 
{ 
_ISupper = ( ( 0 ) < 8 ? ( ( 1 << ( 0 ) ) << 8 ) : ( ( 1 << ( 0 ) ) >> 8 ) ) , 
_ISlower = ( ( 1 ) < 8 ? ( ( 1 << ( 1 ) ) << 8 ) : ( ( 1 << ( 1 ) ) >> 8 ) ) , 
_ISalpha = ( ( 2 ) < 8 ? ( ( 1 << ( 2 ) ) << 8 ) : ( ( 1 << ( 2 ) ) >> 8 ) ) , 
_ISdigit = ( ( 3 ) < 8 ? ( ( 1 << ( 3 ) ) << 8 ) : ( ( 1 << ( 3 ) ) >> 8 ) ) , 
_ISxdigit = ( ( 4 ) < 8 ? ( ( 1 << ( 4 ) ) << 8 ) : ( ( 1 << ( 4 ) ) >> 8 ) ) , 
_ISspace = ( ( 5 ) < 8 ? ( ( 1 << ( 5 ) ) << 8 ) : ( ( 1 << ( 5 ) ) >> 8 ) ) , 
_ISprint = ( ( 6 ) < 8 ? ( ( 1 << ( 6 ) ) << 8 ) : ( ( 1 << ( 6 ) ) >> 8 ) ) , 
_ISgraph = ( ( 7 ) < 8 ? ( ( 1 << ( 7 ) ) << 8 ) : ( ( 1 << ( 7 ) ) >> 8 ) ) , 
_ISblank = ( ( 8 ) < 8 ? ( ( 1 << ( 8 ) ) << 8 ) : ( ( 1 << ( 8 ) ) >> 8 ) ) , 
_IScntrl = ( ( 9 ) < 8 ? ( ( 1 << ( 9 ) ) << 8 ) : ( ( 1 << ( 9 ) ) >> 8 ) ) , 
_ISpunct = ( ( 10 ) < 8 ? ( ( 1 << ( 10 ) ) << 8 ) : ( ( 1 << ( 10 ) ) >> 8 ) ) , 
_ISalnum = ( ( 11 ) < 8 ? ( ( 1 << ( 11 ) ) << 8 ) : ( ( 1 << ( 11 ) ) >> 8 ) ) 
} ; 
# 79 "/usr/include/ctype.h" 3 4 
extern const unsigned short int ** __ctype_b_loc ( void ) 
throw ( ) ; 
extern const __int32_t ** __ctype_tolower_loc ( void ) 
throw ( ) ; 
extern const __int32_t ** __ctype_toupper_loc ( void ) 
throw ( ) ; 
# 104 "/usr/include/ctype.h" 3 4 






extern int isalnum ( int ) throw ( ) ; 
extern int isalpha ( int ) throw ( ) ; 
extern int iscntrl ( int ) throw ( ) ; 
extern int isdigit ( int ) throw ( ) ; 
extern int islower ( int ) throw ( ) ; 
extern int isgraph ( int ) throw ( ) ; 
extern int isprint ( int ) throw ( ) ; 
extern int ispunct ( int ) throw ( ) ; 
extern int isspace ( int ) throw ( ) ; 
extern int isupper ( int ) throw ( ) ; 
extern int isxdigit ( int ) throw ( ) ; 



extern int tolower ( int __c ) throw ( ) ; 


extern int toupper ( int __c ) throw ( ) ; 








extern int isblank ( int ) throw ( ) ; 






extern int isctype ( int __c , int __mask ) throw ( ) ; 






extern int isascii ( int __c ) throw ( ) ; 



extern int toascii ( int __c ) throw ( ) ; 



extern int _toupper ( int ) throw ( ) ; 
extern int _tolower ( int ) throw ( ) ; 
# 271 "/usr/include/ctype.h" 3 4 
extern int isalnum_l ( int , __locale_t ) throw ( ) ; 
extern int isalpha_l ( int , __locale_t ) throw ( ) ; 
extern int iscntrl_l ( int , __locale_t ) throw ( ) ; 
extern int isdigit_l ( int , __locale_t ) throw ( ) ; 
extern int islower_l ( int , __locale_t ) throw ( ) ; 
extern int isgraph_l ( int , __locale_t ) throw ( ) ; 
extern int isprint_l ( int , __locale_t ) throw ( ) ; 
extern int ispunct_l ( int , __locale_t ) throw ( ) ; 
extern int isspace_l ( int , __locale_t ) throw ( ) ; 
extern int isupper_l ( int , __locale_t ) throw ( ) ; 
extern int isxdigit_l ( int , __locale_t ) throw ( ) ; 

extern int isblank_l ( int , __locale_t ) throw ( ) ; 



extern int __tolower_l ( int __c , __locale_t __l ) throw ( ) ; 
extern int tolower_l ( int __c , __locale_t __l ) throw ( ) ; 


extern int __toupper_l ( int __c , __locale_t __l ) throw ( ) ; 
extern int toupper_l ( int __c , __locale_t __l ) throw ( ) ; 
# 347 "/usr/include/ctype.h" 3 4 
} 
# 43 "/usr/include/c++/5/cctype" 2 3 
# 62 "/usr/include/c++/5/cctype" 3 
namespace std 
{ 
using :: isalnum ; 
using :: isalpha ; 
using :: iscntrl ; 
using :: isdigit ; 
using :: isgraph ; 
using :: islower ; 
using :: isprint ; 
using :: ispunct ; 
using :: isspace ; 
using :: isupper ; 
using :: isxdigit ; 
using :: tolower ; 
using :: toupper ; 
} 
# 43 "/usr/include/c++/5/bits/localefwd.h" 2 3 

namespace std 
{ 

# 55 "/usr/include/c++/5/bits/localefwd.h" 3 
class locale ; 

template < typename _Facet > 
bool 
has_facet ( const locale & ) throw ( ) ; 

template < typename _Facet > 
const _Facet & 
use_facet ( const locale & ) ; 


template < typename _CharT > 
bool 
isspace ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isprint ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
iscntrl ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isupper ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
islower ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isalpha ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isdigit ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
ispunct ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isxdigit ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isalnum ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isgraph ( _CharT , const locale & ) ; 







template < typename _CharT > 
_CharT 
toupper ( _CharT , const locale & ) ; 

template < typename _CharT > 
_CharT 
tolower ( _CharT , const locale & ) ; 


class ctype_base ; 
template < typename _CharT > 
class ctype ; 
template <> class ctype < char > ; 

template <> class ctype < wchar_t > ; 

template < typename _CharT > 
class ctype_byname ; 


class codecvt_base ; 
template < typename _InternT , typename _ExternT , typename _StateT > 
class codecvt ; 
template <> class codecvt < char , char , mbstate_t > ; 

template <> class codecvt < wchar_t , char , mbstate_t > ; 

template < typename _InternT , typename _ExternT , typename _StateT > 
class codecvt_byname ; 



template < typename _CharT , typename _InIter = istreambuf_iterator < _CharT > > 
class num_get ; 
template < typename _CharT , typename _OutIter = ostreambuf_iterator < _CharT > > 
class num_put ; 

namespace __cxx11 { 
template < typename _CharT > class numpunct ; 
template < typename _CharT > class numpunct_byname ; 
} 

namespace __cxx11 { 

template < typename _CharT > 
class collate ; 
template < typename _CharT > 
class collate_byname ; 
} 


class time_base ; 
namespace __cxx11 { 
template < typename _CharT , typename _InIter = istreambuf_iterator < _CharT > > 
class time_get ; 
template < typename _CharT , typename _InIter = istreambuf_iterator < _CharT > > 
class time_get_byname ; 
} 
template < typename _CharT , typename _OutIter = ostreambuf_iterator < _CharT > > 
class time_put ; 
template < typename _CharT , typename _OutIter = ostreambuf_iterator < _CharT > > 
class time_put_byname ; 


class money_base ; 
namespace __cxx11 { 
template < typename _CharT , typename _InIter = istreambuf_iterator < _CharT > > 
class money_get ; 
template < typename _CharT , typename _OutIter = ostreambuf_iterator < _CharT > > 
class money_put ; 
} 
namespace __cxx11 { 
template < typename _CharT , bool _Intl = false > 
class moneypunct ; 
template < typename _CharT , bool _Intl = false > 
class moneypunct_byname ; 
} 


class messages_base ; 
namespace __cxx11 { 
template < typename _CharT > 
class messages ; 
template < typename _CharT > 
class messages_byname ; 
} 


} 
# 44 "/usr/include/c++/5/string" 2 3 
# 1 "/usr/include/c++/5/bits/ostream_insert.h" 1 3 
# 33 "/usr/include/c++/5/bits/ostream_insert.h" 3 

# 34 "/usr/include/c++/5/bits/ostream_insert.h" 3 


# 1 "/usr/include/c++/5/bits/cxxabi_forced.h" 1 3 
# 34 "/usr/include/c++/5/bits/cxxabi_forced.h" 3 

# 35 "/usr/include/c++/5/bits/cxxabi_forced.h" 3 

# pragma GCC visibility push ( default ) 
 

namespace __cxxabiv1 
{ 







class __forced_unwind 
{ 
virtual ~ __forced_unwind ( ) throw ( ) ; 


virtual void __pure_dummy ( ) = 0 ; 
} ; 
} 


# pragma GCC visibility pop 
 # 37 "/usr/include/c++/5/bits/ostream_insert.h" 2 3 

namespace std 
{ 


template < typename _CharT , typename _Traits > 
inline void 
__ostream_write ( basic_ostream < _CharT , _Traits >& __out , 
const _CharT * __s , streamsize __n ) 
{ 
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 
typedef typename __ostream_type :: ios_base __ios_base ; 

const streamsize __put = __out . rdbuf ( ) -> sputn ( __s , __n ) ; 
if ( __put != __n ) 
__out . setstate ( __ios_base :: badbit ) ; 
} 

template < typename _CharT , typename _Traits > 
inline void 
__ostream_fill ( basic_ostream < _CharT , _Traits >& __out , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,59,58);
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 
typedef typename __ostream_type :: ios_base __ios_base ; 

__CvT__record_line____(__CvT_miT,59,62);const _CharT __c = __out . fill ( ) ; 
__CvT__record_line____(__CvT_miT,59,63);for ( ; __n > 0 ; -- __n ) 
{{ 
__CvT__record_line____(__CvT_miT,59,65);const typename _Traits :: int_type __put = __out . rdbuf ( ) -> sputc ( __c ) ; 
__CvT__record_line____(__CvT_miT,59,66);if ( _Traits :: eq_int_type ( __put , _Traits :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,59,68);__out . setstate ( __ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,59,69);break ; 
} 
}} 
}} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
__ostream_insert ( basic_ostream < _CharT , _Traits >& __out , 
const _CharT * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,59,78);
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 
typedef typename __ostream_type :: ios_base __ios_base ; 

__CvT__record_line____(__CvT_miT,59,82);typename __ostream_type :: sentry __cerb ( __out ) ; 
__CvT__record_line____(__CvT_miT,59,83);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,59,85);try 
{ 
__CvT__record_line____(__CvT_miT,59,87);const streamsize __w = __out . width ( ) ; 
__CvT__record_line____(__CvT_miT,59,88);if ( __w > __n ) 
{{ 
__CvT__record_line____(__CvT_miT,59,90);const bool __left = ( ( __out . flags ( ) 
& __ios_base :: adjustfield ) 
== __ios_base :: left ) ; 
__CvT__record_line____(__CvT_miT,59,93);if ( ! __left ) 
{__CvT__record_line____(__CvT_miT,59,94);__ostream_fill ( __out , __w - __n ) ; 
}__CvT__record_line____(__CvT_miT,59,95);if ( __out . good ( ) ) 
{__CvT__record_line____(__CvT_miT,59,96);__ostream_write ( __out , __s , __n ) ; 
}__CvT__record_line____(__CvT_miT,59,97);if ( __left && __out . good ( ) ) 
{__CvT__record_line____(__CvT_miT,59,98);__ostream_fill ( __out , __w - __n ) ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,59,101);__ostream_write ( __out , __s , __n ) ; 
}__CvT__record_line____(__CvT_miT,59,102);__out . width ( 0 ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,59,106);__out . _M_setstate ( __ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,59,107);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,59,110);__out . _M_setstate ( __ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,59,112);return __out ; 
} 




extern template ostream & __ostream_insert ( ostream & , const char * , streamsize ) ; 


extern template wostream & __ostream_insert ( wostream & , const wchar_t * , 
streamsize ) ; 




} 
# 45 "/usr/include/c++/5/string" 2 3 



# 1 "/usr/include/c++/5/bits/stl_function.h" 1 3 
# 63 "/usr/include/c++/5/bits/stl_function.h" 3 
namespace std 
{ 

# 104 "/usr/include/c++/5/bits/stl_function.h" 3 
template < typename _Arg , typename _Result > 
struct unary_function 
{ 

typedef _Arg argument_type ; 


typedef _Result result_type ; 
} ; 




template < typename _Arg1 , typename _Arg2 , typename _Result > 
struct binary_function 
{ 

typedef _Arg1 first_argument_type ; 


typedef _Arg2 second_argument_type ; 


typedef _Result result_type ; 
} ; 
# 166 "/usr/include/c++/5/bits/stl_function.h" 3 
template < typename _Tp > 
struct plus : public binary_function < _Tp , _Tp , _Tp > 
{ 

_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,172);return __x + __y ; } 
} ; 


template < typename _Tp > 
struct minus : public binary_function < _Tp , _Tp , _Tp > 
{ 

_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,182);return __x - __y ; } 
} ; 


template < typename _Tp > 
struct multiplies : public binary_function < _Tp , _Tp , _Tp > 
{ 

_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,192);return __x * __y ; } 
} ; 


template < typename _Tp > 
struct divides : public binary_function < _Tp , _Tp , _Tp > 
{ 

_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,202);return __x / __y ; } 
} ; 


template < typename _Tp > 
struct modulus : public binary_function < _Tp , _Tp , _Tp > 
{ 

_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,212);return __x % __y ; } 
} ; 


template < typename _Tp > 
struct negate : public unary_function < _Tp , _Tp > 
{ 

_Tp 
operator ( ) ( const _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,61,222);return - __x ; } 
} ; 
# 351 "/usr/include/c++/5/bits/stl_function.h" 3 
template < typename _Tp > 
struct equal_to : public binary_function < _Tp , _Tp , bool > 
{ 

bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,357);return __x == __y ; } 
} ; 


template < typename _Tp > 
struct not_equal_to : public binary_function < _Tp , _Tp , bool > 
{ 

bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,367);return __x != __y ; } 
} ; 


template < typename _Tp > 
struct greater : public binary_function < _Tp , _Tp , bool > 
{ 

bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,377);return __x > __y ; } 
} ; 


template < typename _Tp > 
struct less : public binary_function < _Tp , _Tp , bool > 
{ 

bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,387);return __x < __y ; } 
} ; 


template < typename _Tp > 
struct greater_equal : public binary_function < _Tp , _Tp , bool > 
{ 

bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,397);return __x >= __y ; } 
} ; 


template < typename _Tp > 
struct less_equal : public binary_function < _Tp , _Tp , bool > 
{ 

bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,407);return __x <= __y ; } 
} ; 
# 524 "/usr/include/c++/5/bits/stl_function.h" 3 
template < typename _Tp > 
struct logical_and : public binary_function < _Tp , _Tp , bool > 
{ 

bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,530);return __x && __y ; } 
} ; 


template < typename _Tp > 
struct logical_or : public binary_function < _Tp , _Tp , bool > 
{ 

bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,540);return __x || __y ; } 
} ; 


template < typename _Tp > 
struct logical_not : public unary_function < _Tp , bool > 
{ 

bool 
operator ( ) ( const _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,61,550);return ! __x ; } 
} ; 
# 617 "/usr/include/c++/5/bits/stl_function.h" 3 
template < typename _Tp > 
struct bit_and : public binary_function < _Tp , _Tp , _Tp > 
{ 

_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,623);return __x & __y ; } 
} ; 

template < typename _Tp > 
struct bit_or : public binary_function < _Tp , _Tp , _Tp > 
{ 

_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,632);return __x | __y ; } 
} ; 

template < typename _Tp > 
struct bit_xor : public binary_function < _Tp , _Tp , _Tp > 
{ 

_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,641);return __x ^ __y ; } 
} ; 

template < typename _Tp > 
struct bit_not : public unary_function < _Tp , _Tp > 
{ 

_Tp 
operator ( ) ( const _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,61,650);return ~ __x ; } 
} ; 
# 741 "/usr/include/c++/5/bits/stl_function.h" 3 
template < typename _Predicate > 
class unary_negate 
: public unary_function < typename _Predicate :: argument_type , bool > 
{ 
protected : 
_Predicate _M_pred ; 

public : 

explicit 
unary_negate ( const _Predicate & __x ) : _M_pred ( __x ) { __CvT__record_line____(__CvT_miT,61,751);} 


bool 
operator ( ) ( const typename _Predicate :: argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,61,756);return ! _M_pred ( __x ) ; } 
} ; 


template < typename _Predicate > 

inline unary_negate < _Predicate > 
not1 ( const _Predicate & __pred ) 
{ __CvT__record_line____(__CvT_miT,61,764);return unary_negate < _Predicate > ( __pred ) ; } 


template < typename _Predicate > 
class binary_negate 
: public binary_function < typename _Predicate :: first_argument_type , 
typename _Predicate :: second_argument_type , bool > 
{ 
protected : 
_Predicate _M_pred ; 

public : 

explicit 
binary_negate ( const _Predicate & __x ) : _M_pred ( __x ) { __CvT__record_line____(__CvT_miT,61,778);} 


bool 
operator ( ) ( const typename _Predicate :: first_argument_type & __x , 
const typename _Predicate :: second_argument_type & __y ) const 
{ __CvT__record_line____(__CvT_miT,61,784);return ! _M_pred ( __x , __y ) ; } 
} ; 


template < typename _Predicate > 

inline binary_negate < _Predicate > 
not2 ( const _Predicate & __pred ) 
{ __CvT__record_line____(__CvT_miT,61,792);return binary_negate < _Predicate > ( __pred ) ; } 
# 818 "/usr/include/c++/5/bits/stl_function.h" 3 
template < typename _Arg , typename _Result > 
class pointer_to_unary_function : public unary_function < _Arg , _Result > 
{ 
protected : 
_Result ( * _M_ptr ) ( _Arg ) ; 

public : 
pointer_to_unary_function ( ) { __CvT__record_line____(__CvT_miT,61,825);} 

explicit 
pointer_to_unary_function ( _Result ( * __x ) ( _Arg ) ) 
: _M_ptr ( __x ) { __CvT__record_line____(__CvT_miT,61,829);} 

_Result 
operator ( ) ( _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,61,833);return _M_ptr ( __x ) ; } 
} ; 


template < typename _Arg , typename _Result > 
inline pointer_to_unary_function < _Arg , _Result > 
ptr_fun ( _Result ( * __x ) ( _Arg ) ) 
{ __CvT__record_line____(__CvT_miT,61,840);return pointer_to_unary_function < _Arg , _Result > ( __x ) ; } 


template < typename _Arg1 , typename _Arg2 , typename _Result > 
class pointer_to_binary_function 
: public binary_function < _Arg1 , _Arg2 , _Result > 
{ 
protected : 
_Result ( * _M_ptr ) ( _Arg1 , _Arg2 ) ; 

public : 
pointer_to_binary_function ( ) { __CvT__record_line____(__CvT_miT,61,851);} 

explicit 
pointer_to_binary_function ( _Result ( * __x ) ( _Arg1 , _Arg2 ) ) 
: _M_ptr ( __x ) { __CvT__record_line____(__CvT_miT,61,855);} 

_Result 
operator ( ) ( _Arg1 __x , _Arg2 __y ) const 
{ __CvT__record_line____(__CvT_miT,61,859);return _M_ptr ( __x , __y ) ; } 
} ; 


template < typename _Arg1 , typename _Arg2 , typename _Result > 
inline pointer_to_binary_function < _Arg1 , _Arg2 , _Result > 
ptr_fun ( _Result ( * __x ) ( _Arg1 , _Arg2 ) ) 
{ __CvT__record_line____(__CvT_miT,61,866);return pointer_to_binary_function < _Arg1 , _Arg2 , _Result > ( __x ) ; } 


template < typename _Tp > 
struct _Identity 
: public unary_function < _Tp , _Tp > 
{ 
_Tp & 
operator ( ) ( _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,61,875);return __x ; } 

const _Tp & 
operator ( ) ( const _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,61,879);return __x ; } 
} ; 

template < typename _Pair > 
struct _Select1st 
: public unary_function < _Pair , typename _Pair :: first_type > 
{ 
typename _Pair :: first_type & 
operator ( ) ( _Pair & __x ) const 
{ __CvT__record_line____(__CvT_miT,61,888);return __x . first ; } 

const typename _Pair :: first_type & 
operator ( ) ( const _Pair & __x ) const 
{ __CvT__record_line____(__CvT_miT,61,892);return __x . first ; } 
# 905 "/usr/include/c++/5/bits/stl_function.h" 3 
} ; 

template < typename _Pair > 
struct _Select2nd 
: public unary_function < _Pair , typename _Pair :: second_type > 
{ 
typename _Pair :: second_type & 
operator ( ) ( _Pair & __x ) const 
{ __CvT__record_line____(__CvT_miT,61,913);return __x . second ; } 

const typename _Pair :: second_type & 
operator ( ) ( const _Pair & __x ) const 
{ __CvT__record_line____(__CvT_miT,61,917);return __x . second ; } 
} ; 
# 938 "/usr/include/c++/5/bits/stl_function.h" 3 
template < typename _Ret , typename _Tp > 
class mem_fun_t : public unary_function < _Tp * , _Ret > 
{ 
public : 
explicit 
mem_fun_t ( _Ret ( _Tp ::* __pf ) ( ) ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,61,944);} 

_Ret 
operator ( ) ( _Tp * __p ) const 
{ __CvT__record_line____(__CvT_miT,61,948);return ( __p ->* _M_f ) ( ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( ) ; 
} ; 



template < typename _Ret , typename _Tp > 
class const_mem_fun_t : public unary_function < const _Tp * , _Ret > 
{ 
public : 
explicit 
const_mem_fun_t ( _Ret ( _Tp ::* __pf ) ( ) const ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,61,962);} 

_Ret 
operator ( ) ( const _Tp * __p ) const 
{ __CvT__record_line____(__CvT_miT,61,966);return ( __p ->* _M_f ) ( ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( ) const ; 
} ; 



template < typename _Ret , typename _Tp > 
class mem_fun_ref_t : public unary_function < _Tp , _Ret > 
{ 
public : 
explicit 
mem_fun_ref_t ( _Ret ( _Tp ::* __pf ) ( ) ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,61,980);} 

_Ret 
operator ( ) ( _Tp & __r ) const 
{ __CvT__record_line____(__CvT_miT,61,984);return ( __r .*_M_f ) ( ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( ) ; 
} ; 



template < typename _Ret , typename _Tp > 
class const_mem_fun_ref_t : public unary_function < _Tp , _Ret > 
{ 
public : 
explicit 
const_mem_fun_ref_t ( _Ret ( _Tp ::* __pf ) ( ) const ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,61,998);} 

_Ret 
operator ( ) ( const _Tp & __r ) const 
{ __CvT__record_line____(__CvT_miT,61,1002);return ( __r .*_M_f ) ( ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( ) const ; 
} ; 



template < typename _Ret , typename _Tp , typename _Arg > 
class mem_fun1_t : public binary_function < _Tp * , _Arg , _Ret > 
{ 
public : 
explicit 
mem_fun1_t ( _Ret ( _Tp ::* __pf ) ( _Arg ) ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,61,1016);} 

_Ret 
operator ( ) ( _Tp * __p , _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,61,1020);return ( __p ->* _M_f ) ( __x ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( _Arg ) ; 
} ; 



template < typename _Ret , typename _Tp , typename _Arg > 
class const_mem_fun1_t : public binary_function < const _Tp * , _Arg , _Ret > 
{ 
public : 
explicit 
const_mem_fun1_t ( _Ret ( _Tp ::* __pf ) ( _Arg ) const ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,61,1034);} 

_Ret 
operator ( ) ( const _Tp * __p , _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,61,1038);return ( __p ->* _M_f ) ( __x ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( _Arg ) const ; 
} ; 



template < typename _Ret , typename _Tp , typename _Arg > 
class mem_fun1_ref_t : public binary_function < _Tp , _Arg , _Ret > 
{ 
public : 
explicit 
mem_fun1_ref_t ( _Ret ( _Tp ::* __pf ) ( _Arg ) ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,61,1052);} 

_Ret 
operator ( ) ( _Tp & __r , _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,61,1056);return ( __r .*_M_f ) ( __x ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( _Arg ) ; 
} ; 



template < typename _Ret , typename _Tp , typename _Arg > 
class const_mem_fun1_ref_t : public binary_function < _Tp , _Arg , _Ret > 
{ 
public : 
explicit 
const_mem_fun1_ref_t ( _Ret ( _Tp ::* __pf ) ( _Arg ) const ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,61,1070);} 

_Ret 
operator ( ) ( const _Tp & __r , _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,61,1074);return ( __r .*_M_f ) ( __x ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( _Arg ) const ; 
} ; 



template < typename _Ret , typename _Tp > 
inline mem_fun_t < _Ret , _Tp > 
mem_fun ( _Ret ( _Tp ::* __f ) ( ) ) 
{ __CvT__record_line____(__CvT_miT,61,1085);return mem_fun_t < _Ret , _Tp > ( __f ) ; } 

template < typename _Ret , typename _Tp > 
inline const_mem_fun_t < _Ret , _Tp > 
mem_fun ( _Ret ( _Tp ::* __f ) ( ) const ) 
{ __CvT__record_line____(__CvT_miT,61,1090);return const_mem_fun_t < _Ret , _Tp > ( __f ) ; } 

template < typename _Ret , typename _Tp > 
inline mem_fun_ref_t < _Ret , _Tp > 
mem_fun_ref ( _Ret ( _Tp ::* __f ) ( ) ) 
{ __CvT__record_line____(__CvT_miT,61,1095);return mem_fun_ref_t < _Ret , _Tp > ( __f ) ; } 

template < typename _Ret , typename _Tp > 
inline const_mem_fun_ref_t < _Ret , _Tp > 
mem_fun_ref ( _Ret ( _Tp ::* __f ) ( ) const ) 
{ __CvT__record_line____(__CvT_miT,61,1100);return const_mem_fun_ref_t < _Ret , _Tp > ( __f ) ; } 

template < typename _Ret , typename _Tp , typename _Arg > 
inline mem_fun1_t < _Ret , _Tp , _Arg > 
mem_fun ( _Ret ( _Tp ::* __f ) ( _Arg ) ) 
{ __CvT__record_line____(__CvT_miT,61,1105);return mem_fun1_t < _Ret , _Tp , _Arg > ( __f ) ; } 

template < typename _Ret , typename _Tp , typename _Arg > 
inline const_mem_fun1_t < _Ret , _Tp , _Arg > 
mem_fun ( _Ret ( _Tp ::* __f ) ( _Arg ) const ) 
{ __CvT__record_line____(__CvT_miT,61,1110);return const_mem_fun1_t < _Ret , _Tp , _Arg > ( __f ) ; } 

template < typename _Ret , typename _Tp , typename _Arg > 
inline mem_fun1_ref_t < _Ret , _Tp , _Arg > 
mem_fun_ref ( _Ret ( _Tp ::* __f ) ( _Arg ) ) 
{ __CvT__record_line____(__CvT_miT,61,1115);return mem_fun1_ref_t < _Ret , _Tp , _Arg > ( __f ) ; } 

template < typename _Ret , typename _Tp , typename _Arg > 
inline const_mem_fun1_ref_t < _Ret , _Tp , _Arg > 
mem_fun_ref ( _Ret ( _Tp ::* __f ) ( _Arg ) const ) 
{ __CvT__record_line____(__CvT_miT,61,1120);return const_mem_fun1_ref_t < _Ret , _Tp , _Arg > ( __f ) ; } 




} 


# 1 "/usr/include/c++/5/backward/binders.h" 1 3 
# 60 "/usr/include/c++/5/backward/binders.h" 3 
# pragma GCC diagnostic push 
 # pragma GCC diagnostic ignored "-Wdeprecated-declarations" 
 
namespace std 
{ 

# 107 "/usr/include/c++/5/backward/binders.h" 3 
template < typename _Operation > 
class binder1st 
: public unary_function < typename _Operation :: second_argument_type , 
typename _Operation :: result_type > 
{ 
protected : 
_Operation op ; 
typename _Operation :: first_argument_type value ; 

public : 
binder1st ( const _Operation & __x , 
const typename _Operation :: first_argument_type & __y ) 
: op ( __x ) , value ( __y ) { __CvT__record_line____(__CvT_miT,62,119);} 

typename _Operation :: result_type 
operator ( ) ( const typename _Operation :: second_argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,62,123);return op ( value , __x ) ; } 



typename _Operation :: result_type 
operator ( ) ( typename _Operation :: second_argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,62,129);return op ( value , __x ) ; } 
} ; 


template < typename _Operation , typename _Tp > 
inline binder1st < _Operation > 
bind1st ( const _Operation & __fn , const _Tp & __x ) 
{ __CvT__record_line____(__CvT_miT,62,136);
typedef typename _Operation :: first_argument_type _Arg1_type ; 
__CvT__record_line____(__CvT_miT,62,138);return binder1st < _Operation > ( __fn , _Arg1_type ( __x ) ) ; 
} 


template < typename _Operation > 
class binder2nd 
: public unary_function < typename _Operation :: first_argument_type , 
typename _Operation :: result_type > 
{ 
protected : 
_Operation op ; 
typename _Operation :: second_argument_type value ; 

public : 
binder2nd ( const _Operation & __x , 
const typename _Operation :: second_argument_type & __y ) 
: op ( __x ) , value ( __y ) { __CvT__record_line____(__CvT_miT,62,154);} 

typename _Operation :: result_type 
operator ( ) ( const typename _Operation :: first_argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,62,158);return op ( __x , value ) ; } 



typename _Operation :: result_type 
operator ( ) ( typename _Operation :: first_argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,62,164);return op ( __x , value ) ; } 
} ; 


template < typename _Operation , typename _Tp > 
inline binder2nd < _Operation > 
bind2nd ( const _Operation & __fn , const _Tp & __x ) 
{ __CvT__record_line____(__CvT_miT,62,171);
typedef typename _Operation :: second_argument_type _Arg2_type ; 
__CvT__record_line____(__CvT_miT,62,173);return binder2nd < _Operation > ( __fn , _Arg2_type ( __x ) ) ; 
} 



} 

# pragma GCC diagnostic pop 
 # 1129 "/usr/include/c++/5/bits/stl_function.h" 2 3 
# 49 "/usr/include/c++/5/string" 2 3 


# 1 "/usr/include/c++/5/bits/range_access.h" 1 3 
# 33 "/usr/include/c++/5/bits/range_access.h" 3 

# 34 "/usr/include/c++/5/bits/range_access.h" 3 
# 52 "/usr/include/c++/5/string" 2 3 
# 1 "/usr/include/c++/5/bits/basic_string.h" 1 3 
# 37 "/usr/include/c++/5/bits/basic_string.h" 3 

# 38 "/usr/include/c++/5/bits/basic_string.h" 3 

# 1 "/usr/include/c++/5/ext/atomicity.h" 1 3 
# 32 "/usr/include/c++/5/ext/atomicity.h" 3 

# 33 "/usr/include/c++/5/ext/atomicity.h" 3 


# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 1 3 
# 30 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 3 
# pragma GCC visibility push ( default ) 
 # 148 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 3 
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 1 3 
# 35 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3 
# 1 "/usr/include/pthread.h" 1 3 4 
# 23 "/usr/include/pthread.h" 3 4 
# 1 "/usr/include/sched.h" 1 3 4 
# 28 "/usr/include/sched.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4 
# 29 "/usr/include/sched.h" 2 3 4 





# 1 "/usr/include/time.h" 1 3 4 
# 73 "/usr/include/time.h" 3 4 


typedef __time_t time_t ; 



# 120 "/usr/include/time.h" 3 4 
struct timespec 
{ 
__time_t tv_sec ; 
__syscall_slong_t tv_nsec ; 
} ; 
# 35 "/usr/include/sched.h" 2 3 4 


typedef __pid_t pid_t ; 





# 1 "/usr/include/x86_64-linux-gnu/bits/sched.h" 1 3 4 
# 72 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4 
struct sched_param 
{ 
int __sched_priority ; 
} ; 

extern "C" { 



extern int clone ( int ( * __fn ) ( void * __arg ) , void * __child_stack , 
int __flags , void * __arg , ... ) throw ( ) ; 


extern int unshare ( int __flags ) throw ( ) ; 


extern int sched_getcpu ( void ) throw ( ) ; 


extern int setns ( int __fd , int __nstype ) throw ( ) ; 



} 







struct __sched_param 
{ 
int __sched_priority ; 
} ; 
# 118 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4 
typedef unsigned long int __cpu_mask ; 






typedef struct 
{ 
__cpu_mask __bits [ 1024 / ( 8 * sizeof ( __cpu_mask ) ) ] ; 
} cpu_set_t ; 
# 201 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4 
extern "C" { 

extern int __sched_cpucount ( size_t __setsize , const cpu_set_t * __setp ) 
throw ( ) ; 
extern cpu_set_t * __sched_cpualloc ( size_t __count ) throw ( ) ; 
extern void __sched_cpufree ( cpu_set_t * __set ) throw ( ) ; 

} 
# 44 "/usr/include/sched.h" 2 3 4 




extern "C" { 


extern int sched_setparam ( __pid_t __pid , const struct sched_param * __param ) 
throw ( ) ; 


extern int sched_getparam ( __pid_t __pid , struct sched_param * __param ) throw ( ) ; 


extern int sched_setscheduler ( __pid_t __pid , int __policy , 
const struct sched_param * __param ) throw ( ) ; 


extern int sched_getscheduler ( __pid_t __pid ) throw ( ) ; 


extern int sched_yield ( void ) throw ( ) ; 


extern int sched_get_priority_max ( int __algorithm ) throw ( ) ; 


extern int sched_get_priority_min ( int __algorithm ) throw ( ) ; 


extern int sched_rr_get_interval ( __pid_t __pid , struct timespec * __t ) throw ( ) ; 
# 118 "/usr/include/sched.h" 3 4 
extern int sched_setaffinity ( __pid_t __pid , size_t __cpusetsize , 
const cpu_set_t * __cpuset ) throw ( ) ; 


extern int sched_getaffinity ( __pid_t __pid , size_t __cpusetsize , 
cpu_set_t * __cpuset ) throw ( ) ; 


} 
# 24 "/usr/include/pthread.h" 2 3 4 
# 1 "/usr/include/time.h" 1 3 4 
# 29 "/usr/include/time.h" 3 4 
extern "C" { 







# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4 
# 38 "/usr/include/time.h" 2 3 4 



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4 
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4 
struct timeval 
{ 
__time_t tv_sec ; 
__suseconds_t tv_usec ; 
} ; 
# 88 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/timex.h" 1 3 4 
# 25 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3 4 
struct timex 
{ 
unsigned int modes ; 
__syscall_slong_t offset ; 
__syscall_slong_t freq ; 
__syscall_slong_t maxerror ; 
__syscall_slong_t esterror ; 
int status ; 
__syscall_slong_t constant ; 
__syscall_slong_t precision ; 
__syscall_slong_t tolerance ; 
struct timeval time ; 
__syscall_slong_t tick ; 
__syscall_slong_t ppsfreq ; 
__syscall_slong_t jitter ; 
int shift ; 
__syscall_slong_t stabil ; 
__syscall_slong_t jitcnt ; 
__syscall_slong_t calcnt ; 
__syscall_slong_t errcnt ; 
__syscall_slong_t stbcnt ; 

int tai ; 


int : 32 ; int : 32 ; int : 32 ; int : 32 ; 
int : 32 ; int : 32 ; int : 32 ; int : 32 ; 
int : 32 ; int : 32 ; int : 32 ; 
} ; 
# 89 "/usr/include/x86_64-linux-gnu/bits/time.h" 2 3 4 

extern "C" { 


extern int clock_adjtime ( __clockid_t __clock_id , struct timex * __utx ) throw ( ) ; 

} 
# 42 "/usr/include/time.h" 2 3 4 
# 57 "/usr/include/time.h" 3 4 


typedef __clock_t clock_t ; 



# 91 "/usr/include/time.h" 3 4 
typedef __clockid_t clockid_t ; 
# 103 "/usr/include/time.h" 3 4 
typedef __timer_t timer_t ; 
# 131 "/usr/include/time.h" 3 4 


struct tm 
{ 
int tm_sec ; 
int tm_min ; 
int tm_hour ; 
int tm_mday ; 
int tm_mon ; 
int tm_year ; 
int tm_wday ; 
int tm_yday ; 
int tm_isdst ; 


long int tm_gmtoff ; 
const char * tm_zone ; 




} ; 








struct itimerspec 
{ 
struct timespec it_interval ; 
struct timespec it_value ; 
} ; 


struct sigevent ; 
# 186 "/usr/include/time.h" 3 4 



extern clock_t clock ( void ) throw ( ) ; 


extern time_t time ( time_t * __timer ) throw ( ) ; 


extern double difftime ( time_t __time1 , time_t __time0 ) 
throw ( ) ; 


extern time_t mktime ( struct tm * __tp ) throw ( ) ; 





extern size_t strftime ( char * __restrict __s , size_t __maxsize , 
const char * __restrict __format , 
const struct tm * __restrict __tp ) throw ( ) ; 





extern char * strptime ( const char * __restrict __s , 
const char * __restrict __fmt , struct tm * __tp ) 
throw ( ) ; 







extern size_t strftime_l ( char * __restrict __s , size_t __maxsize , 
const char * __restrict __format , 
const struct tm * __restrict __tp , 
__locale_t __loc ) throw ( ) ; 



extern char * strptime_l ( const char * __restrict __s , 
const char * __restrict __fmt , struct tm * __tp , 
__locale_t __loc ) throw ( ) ; 






extern struct tm * gmtime ( const time_t * __timer ) throw ( ) ; 



extern struct tm * localtime ( const time_t * __timer ) throw ( ) ; 





extern struct tm * gmtime_r ( const time_t * __restrict __timer , 
struct tm * __restrict __tp ) throw ( ) ; 



extern struct tm * localtime_r ( const time_t * __restrict __timer , 
struct tm * __restrict __tp ) throw ( ) ; 





extern char * asctime ( const struct tm * __tp ) throw ( ) ; 


extern char * ctime ( const time_t * __timer ) throw ( ) ; 







extern char * asctime_r ( const struct tm * __restrict __tp , 
char * __restrict __buf ) throw ( ) ; 


extern char * ctime_r ( const time_t * __restrict __timer , 
char * __restrict __buf ) throw ( ) ; 




extern char * __tzname [ 2 ] ; 
extern int __daylight ; 
extern long int __timezone ; 




extern char * tzname [ 2 ] ; 



extern void tzset ( void ) throw ( ) ; 



extern int daylight ; 
extern long int timezone ; 





extern int stime ( const time_t * __when ) throw ( ) ; 
# 319 "/usr/include/time.h" 3 4 
extern time_t timegm ( struct tm * __tp ) throw ( ) ; 


extern time_t timelocal ( struct tm * __tp ) throw ( ) ; 


extern int dysize ( int __year ) throw ( ) ; 
# 334 "/usr/include/time.h" 3 4 
extern int nanosleep ( const struct timespec * __requested_time , 
struct timespec * __remaining ) ; 



extern int clock_getres ( clockid_t __clock_id , struct timespec * __res ) throw ( ) ; 


extern int clock_gettime ( clockid_t __clock_id , struct timespec * __tp ) throw ( ) ; 


extern int clock_settime ( clockid_t __clock_id , const struct timespec * __tp ) 
throw ( ) ; 






extern int clock_nanosleep ( clockid_t __clock_id , int __flags , 
const struct timespec * __req , 
struct timespec * __rem ) ; 


extern int clock_getcpuclockid ( pid_t __pid , clockid_t * __clock_id ) throw ( ) ; 




extern int timer_create ( clockid_t __clock_id , 
struct sigevent * __restrict __evp , 
timer_t * __restrict __timerid ) throw ( ) ; 


extern int timer_delete ( timer_t __timerid ) throw ( ) ; 


extern int timer_settime ( timer_t __timerid , int __flags , 
const struct itimerspec * __restrict __value , 
struct itimerspec * __restrict __ovalue ) throw ( ) ; 


extern int timer_gettime ( timer_t __timerid , struct itimerspec * __value ) 
throw ( ) ; 


extern int timer_getoverrun ( timer_t __timerid ) throw ( ) ; 





extern int timespec_get ( struct timespec * __ts , int __base ) 
throw ( ) ; 
# 403 "/usr/include/time.h" 3 4 
extern int getdate_err ; 
# 412 "/usr/include/time.h" 3 4 
extern struct tm * getdate ( const char * __string ) ; 
# 426 "/usr/include/time.h" 3 4 
extern int getdate_r ( const char * __restrict __string , 
struct tm * __restrict __resbufp ) ; 


} 
# 25 "/usr/include/pthread.h" 2 3 4 

# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4 
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4 
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4 
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4 
typedef unsigned long int pthread_t ; 


union pthread_attr_t 
{ 
char __size [ 56 ] ; 
long int __align ; 
} ; 

typedef union pthread_attr_t pthread_attr_t ; 





typedef struct __pthread_internal_list 
{ 
struct __pthread_internal_list * __prev ; 
struct __pthread_internal_list * __next ; 
} __pthread_list_t ; 
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4 
typedef union 
{ 
struct __pthread_mutex_s 
{ 
int __lock ; 
unsigned int __count ; 
int __owner ; 

unsigned int __nusers ; 



int __kind ; 

short __spins ; 
short __elision ; 
__pthread_list_t __list ; 
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4 
} __data ; 
char __size [ 40 ] ; 
long int __align ; 
} pthread_mutex_t ; 

typedef union 
{ 
char __size [ 4 ] ; 
int __align ; 
} pthread_mutexattr_t ; 




typedef union 
{ 
struct 
{ 
int __lock ; 
unsigned int __futex ; 
unsigned long long int __total_seq ; 
unsigned long long int __wakeup_seq ; 
unsigned long long int __woken_seq ; 
void * __mutex ; 
unsigned int __nwaiters ; 
unsigned int __broadcast_seq ; 
} __data ; 
char __size [ 48 ] ; 
long long int __align ; 
} pthread_cond_t ; 

typedef union 
{ 
char __size [ 4 ] ; 
int __align ; 
} pthread_condattr_t ; 



typedef unsigned int pthread_key_t ; 



typedef int pthread_once_t ; 





typedef union 
{ 

struct 
{ 
int __lock ; 
unsigned int __nr_readers ; 
unsigned int __readers_wakeup ; 
unsigned int __writer_wakeup ; 
unsigned int __nr_readers_queued ; 
unsigned int __nr_writers_queued ; 
int __writer ; 
int __shared ; 
signed char __rwelision ; 




unsigned char __pad1 [ 7 ] ; 


unsigned long int __pad2 ; 


unsigned int __flags ; 

} __data ; 
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4 
char __size [ 56 ] ; 
long int __align ; 
} pthread_rwlock_t ; 

typedef union 
{ 
char __size [ 8 ] ; 
long int __align ; 
} pthread_rwlockattr_t ; 





typedef volatile int pthread_spinlock_t ; 




typedef union 
{ 
char __size [ 32 ] ; 
long int __align ; 
} pthread_barrier_t ; 

typedef union 
{ 
char __size [ 4 ] ; 
int __align ; 
} pthread_barrierattr_t ; 
# 27 "/usr/include/pthread.h" 2 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4 
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4 
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4 




typedef long int __jmp_buf [ 8 ] ; 
# 28 "/usr/include/pthread.h" 2 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4 
# 29 "/usr/include/pthread.h" 2 3 4 



enum 
{ 
PTHREAD_CREATE_JOINABLE , 

PTHREAD_CREATE_DETACHED 

} ; 



enum 
{ 
PTHREAD_MUTEX_TIMED_NP , 
PTHREAD_MUTEX_RECURSIVE_NP , 
PTHREAD_MUTEX_ERRORCHECK_NP , 
PTHREAD_MUTEX_ADAPTIVE_NP 

, 
PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP , 
PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP , 
PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP , 
PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL 



, PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP 

} ; 




enum 
{ 
PTHREAD_MUTEX_STALLED , 
PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED , 
PTHREAD_MUTEX_ROBUST , 
PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST 
} ; 





enum 
{ 
PTHREAD_PRIO_NONE , 
PTHREAD_PRIO_INHERIT , 
PTHREAD_PRIO_PROTECT 
} ; 
# 114 "/usr/include/pthread.h" 3 4 
enum 
{ 
PTHREAD_RWLOCK_PREFER_READER_NP , 
PTHREAD_RWLOCK_PREFER_WRITER_NP , 
PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP , 
PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP 
} ; 
# 155 "/usr/include/pthread.h" 3 4 
enum 
{ 
PTHREAD_INHERIT_SCHED , 

PTHREAD_EXPLICIT_SCHED 

} ; 



enum 
{ 
PTHREAD_SCOPE_SYSTEM , 

PTHREAD_SCOPE_PROCESS 

} ; 



enum 
{ 
PTHREAD_PROCESS_PRIVATE , 

PTHREAD_PROCESS_SHARED 

} ; 
# 190 "/usr/include/pthread.h" 3 4 
struct _pthread_cleanup_buffer 
{ 
void ( * __routine ) ( void * ) ; 
void * __arg ; 
int __canceltype ; 
struct _pthread_cleanup_buffer * __prev ; 
} ; 


enum 
{ 
PTHREAD_CANCEL_ENABLE , 

PTHREAD_CANCEL_DISABLE 

} ; 
enum 
{ 
PTHREAD_CANCEL_DEFERRED , 

PTHREAD_CANCEL_ASYNCHRONOUS 

} ; 
# 228 "/usr/include/pthread.h" 3 4 
extern "C" { 




extern int pthread_create ( pthread_t * __restrict __newthread , 
const pthread_attr_t * __restrict __attr , 
void * ( * __start_routine ) ( void * ) , 
void * __restrict __arg ) throw ( ) ; 





extern void pthread_exit ( void * __retval ) ; 







extern int pthread_join ( pthread_t __th , void ** __thread_return ) ; 




extern int pthread_tryjoin_np ( pthread_t __th , void ** __thread_return ) throw ( ) ; 







extern int pthread_timedjoin_np ( pthread_t __th , void ** __thread_return , 
const struct timespec * __abstime ) ; 






extern int pthread_detach ( pthread_t __th ) throw ( ) ; 



extern pthread_t pthread_self ( void ) throw ( ) ; 


extern int pthread_equal ( pthread_t __thread1 , pthread_t __thread2 ) 
throw ( ) ; 







extern int pthread_attr_init ( pthread_attr_t * __attr ) throw ( ) ; 


extern int pthread_attr_destroy ( pthread_attr_t * __attr ) 
throw ( ) ; 


extern int pthread_attr_getdetachstate ( const pthread_attr_t * __attr , 
int * __detachstate ) 
throw ( ) ; 


extern int pthread_attr_setdetachstate ( pthread_attr_t * __attr , 
int __detachstate ) 
throw ( ) ; 



extern int pthread_attr_getguardsize ( const pthread_attr_t * __attr , 
size_t * __guardsize ) 
throw ( ) ; 


extern int pthread_attr_setguardsize ( pthread_attr_t * __attr , 
size_t __guardsize ) 
throw ( ) ; 



extern int pthread_attr_getschedparam ( const pthread_attr_t * __restrict __attr , 
struct sched_param * __restrict __param ) 
throw ( ) ; 


extern int pthread_attr_setschedparam ( pthread_attr_t * __restrict __attr , 
const struct sched_param * __restrict 
__param ) throw ( ) ; 


extern int pthread_attr_getschedpolicy ( const pthread_attr_t * __restrict 
__attr , int * __restrict __policy ) 
throw ( ) ; 


extern int pthread_attr_setschedpolicy ( pthread_attr_t * __attr , int __policy ) 
throw ( ) ; 


extern int pthread_attr_getinheritsched ( const pthread_attr_t * __restrict 
__attr , int * __restrict __inherit ) 
throw ( ) ; 


extern int pthread_attr_setinheritsched ( pthread_attr_t * __attr , 
int __inherit ) 
throw ( ) ; 



extern int pthread_attr_getscope ( const pthread_attr_t * __restrict __attr , 
int * __restrict __scope ) 
throw ( ) ; 


extern int pthread_attr_setscope ( pthread_attr_t * __attr , int __scope ) 
throw ( ) ; 


extern int pthread_attr_getstackaddr ( const pthread_attr_t * __restrict 
__attr , void ** __restrict __stackaddr ) 
throw ( ) ; 





extern int pthread_attr_setstackaddr ( pthread_attr_t * __attr , 
void * __stackaddr ) 
throw ( ) ; 


extern int pthread_attr_getstacksize ( const pthread_attr_t * __restrict 
__attr , size_t * __restrict __stacksize ) 
throw ( ) ; 




extern int pthread_attr_setstacksize ( pthread_attr_t * __attr , 
size_t __stacksize ) 
throw ( ) ; 



extern int pthread_attr_getstack ( const pthread_attr_t * __restrict __attr , 
void ** __restrict __stackaddr , 
size_t * __restrict __stacksize ) 
throw ( ) ; 




extern int pthread_attr_setstack ( pthread_attr_t * __attr , void * __stackaddr , 
size_t __stacksize ) throw ( ) ; 





extern int pthread_attr_setaffinity_np ( pthread_attr_t * __attr , 
size_t __cpusetsize , 
const cpu_set_t * __cpuset ) 
throw ( ) ; 



extern int pthread_attr_getaffinity_np ( const pthread_attr_t * __attr , 
size_t __cpusetsize , 
cpu_set_t * __cpuset ) 
throw ( ) ; 


extern int pthread_getattr_default_np ( pthread_attr_t * __attr ) 
throw ( ) ; 



extern int pthread_setattr_default_np ( const pthread_attr_t * __attr ) 
throw ( ) ; 




extern int pthread_getattr_np ( pthread_t __th , pthread_attr_t * __attr ) 
throw ( ) ; 







extern int pthread_setschedparam ( pthread_t __target_thread , int __policy , 
const struct sched_param * __param ) 
throw ( ) ; 


extern int pthread_getschedparam ( pthread_t __target_thread , 
int * __restrict __policy , 
struct sched_param * __restrict __param ) 
throw ( ) ; 


extern int pthread_setschedprio ( pthread_t __target_thread , int __prio ) 
throw ( ) ; 




extern int pthread_getname_np ( pthread_t __target_thread , char * __buf , 
size_t __buflen ) 
throw ( ) ; 


extern int pthread_setname_np ( pthread_t __target_thread , const char * __name ) 
throw ( ) ; 





extern int pthread_getconcurrency ( void ) throw ( ) ; 


extern int pthread_setconcurrency ( int __level ) throw ( ) ; 







extern int pthread_yield ( void ) throw ( ) ; 




extern int pthread_setaffinity_np ( pthread_t __th , size_t __cpusetsize , 
const cpu_set_t * __cpuset ) 
throw ( ) ; 


extern int pthread_getaffinity_np ( pthread_t __th , size_t __cpusetsize , 
cpu_set_t * __cpuset ) 
throw ( ) ; 
# 494 "/usr/include/pthread.h" 3 4 
extern int pthread_once ( pthread_once_t * __once_control , 
void ( * __init_routine ) ( void ) ) ; 
# 506 "/usr/include/pthread.h" 3 4 
extern int pthread_setcancelstate ( int __state , int * __oldstate ) ; 



extern int pthread_setcanceltype ( int __type , int * __oldtype ) ; 


extern int pthread_cancel ( pthread_t __th ) ; 




extern void pthread_testcancel ( void ) ; 




typedef struct 
{ 
struct 
{ 
__jmp_buf __cancel_jmp_buf ; 
int __mask_was_saved ; 
} __cancel_jmp_buf [ 1 ] ; 
void * __pad [ 4 ] ; 
} __pthread_unwind_buf_t ; 
# 540 "/usr/include/pthread.h" 3 4 
struct __pthread_cleanup_frame 
{ 
void ( * __cancel_routine ) ( void * ) ; 
void * __cancel_arg ; 
int __do_it ; 
int __cancel_type ; 
} ; 




class __pthread_cleanup_class 
{ 
void ( * __cancel_routine ) ( void * ) ; 
void * __cancel_arg ; 
int __do_it ; 
int __cancel_type ; 

public : 
__pthread_cleanup_class ( void ( * __fct ) ( void * ) , void * __arg ) 
: __cancel_routine ( __fct ) , __cancel_arg ( __arg ) , __do_it ( 1 ) { __CvT__record_line____(__CvT_miT,68,560);} 
~ __pthread_cleanup_class ( ) { __CvT__record_line____(__CvT_miT,68,561);if ( __do_it ) {__cancel_routine ( __cancel_arg ) ; }} 
void __setdoit ( int __newval ) { __CvT__record_line____(__CvT_miT,68,562);__do_it = __newval ; } 
void __defer ( ) { __CvT__record_line____(__CvT_miT,68,563);pthread_setcanceltype ( PTHREAD_CANCEL_DEFERRED , 
& __cancel_type ) ; } 
void __restore ( ) const { __CvT__record_line____(__CvT_miT,68,565);pthread_setcanceltype ( __cancel_type , 0 ) ; } 
} ; 
# 742 "/usr/include/pthread.h" 3 4 
struct __jmp_buf_tag ; 
extern int __sigsetjmp ( struct __jmp_buf_tag * __env , int __savemask ) throw ( ) ; 





extern int pthread_mutex_init ( pthread_mutex_t * __mutex , 
const pthread_mutexattr_t * __mutexattr ) 
throw ( ) ; 


extern int pthread_mutex_destroy ( pthread_mutex_t * __mutex ) 
throw ( ) ; 


extern int pthread_mutex_trylock ( pthread_mutex_t * __mutex ) 
throw ( ) ; 


extern int pthread_mutex_lock ( pthread_mutex_t * __mutex ) 
throw ( ) ; 



extern int pthread_mutex_timedlock ( pthread_mutex_t * __restrict __mutex , 
const struct timespec * __restrict 
__abstime ) throw ( ) ; 



extern int pthread_mutex_unlock ( pthread_mutex_t * __mutex ) 
throw ( ) ; 



extern int pthread_mutex_getprioceiling ( const pthread_mutex_t * 
__restrict __mutex , 
int * __restrict __prioceiling ) 
throw ( ) ; 



extern int pthread_mutex_setprioceiling ( pthread_mutex_t * __restrict __mutex , 
int __prioceiling , 
int * __restrict __old_ceiling ) 
throw ( ) ; 




extern int pthread_mutex_consistent ( pthread_mutex_t * __mutex ) 
throw ( ) ; 

extern int pthread_mutex_consistent_np ( pthread_mutex_t * __mutex ) 
throw ( ) ; 
# 806 "/usr/include/pthread.h" 3 4 
extern int pthread_mutexattr_init ( pthread_mutexattr_t * __attr ) 
throw ( ) ; 


extern int pthread_mutexattr_destroy ( pthread_mutexattr_t * __attr ) 
throw ( ) ; 


extern int pthread_mutexattr_getpshared ( const pthread_mutexattr_t * 
__restrict __attr , 
int * __restrict __pshared ) 
throw ( ) ; 


extern int pthread_mutexattr_setpshared ( pthread_mutexattr_t * __attr , 
int __pshared ) 
throw ( ) ; 



extern int pthread_mutexattr_gettype ( const pthread_mutexattr_t * __restrict 
__attr , int * __restrict __kind ) 
throw ( ) ; 




extern int pthread_mutexattr_settype ( pthread_mutexattr_t * __attr , int __kind ) 
throw ( ) ; 



extern int pthread_mutexattr_getprotocol ( const pthread_mutexattr_t * 
__restrict __attr , 
int * __restrict __protocol ) 
throw ( ) ; 



extern int pthread_mutexattr_setprotocol ( pthread_mutexattr_t * __attr , 
int __protocol ) 
throw ( ) ; 


extern int pthread_mutexattr_getprioceiling ( const pthread_mutexattr_t * 
__restrict __attr , 
int * __restrict __prioceiling ) 
throw ( ) ; 


extern int pthread_mutexattr_setprioceiling ( pthread_mutexattr_t * __attr , 
int __prioceiling ) 
throw ( ) ; 



extern int pthread_mutexattr_getrobust ( const pthread_mutexattr_t * __attr , 
int * __robustness ) 
throw ( ) ; 

extern int pthread_mutexattr_getrobust_np ( const pthread_mutexattr_t * __attr , 
int * __robustness ) 
throw ( ) ; 



extern int pthread_mutexattr_setrobust ( pthread_mutexattr_t * __attr , 
int __robustness ) 
throw ( ) ; 

extern int pthread_mutexattr_setrobust_np ( pthread_mutexattr_t * __attr , 
int __robustness ) 
throw ( ) ; 
# 888 "/usr/include/pthread.h" 3 4 
extern int pthread_rwlock_init ( pthread_rwlock_t * __restrict __rwlock , 
const pthread_rwlockattr_t * __restrict 
__attr ) throw ( ) ; 


extern int pthread_rwlock_destroy ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 


extern int pthread_rwlock_rdlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 


extern int pthread_rwlock_tryrdlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 



extern int pthread_rwlock_timedrdlock ( pthread_rwlock_t * __restrict __rwlock , 
const struct timespec * __restrict 
__abstime ) throw ( ) ; 



extern int pthread_rwlock_wrlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 


extern int pthread_rwlock_trywrlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 



extern int pthread_rwlock_timedwrlock ( pthread_rwlock_t * __restrict __rwlock , 
const struct timespec * __restrict 
__abstime ) throw ( ) ; 



extern int pthread_rwlock_unlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 





extern int pthread_rwlockattr_init ( pthread_rwlockattr_t * __attr ) 
throw ( ) ; 


extern int pthread_rwlockattr_destroy ( pthread_rwlockattr_t * __attr ) 
throw ( ) ; 


extern int pthread_rwlockattr_getpshared ( const pthread_rwlockattr_t * 
__restrict __attr , 
int * __restrict __pshared ) 
throw ( ) ; 


extern int pthread_rwlockattr_setpshared ( pthread_rwlockattr_t * __attr , 
int __pshared ) 
throw ( ) ; 


extern int pthread_rwlockattr_getkind_np ( const pthread_rwlockattr_t * 
__restrict __attr , 
int * __restrict __pref ) 
throw ( ) ; 


extern int pthread_rwlockattr_setkind_np ( pthread_rwlockattr_t * __attr , 
int __pref ) throw ( ) ; 







extern int pthread_cond_init ( pthread_cond_t * __restrict __cond , 
const pthread_condattr_t * __restrict __cond_attr ) 
throw ( ) ; 


extern int pthread_cond_destroy ( pthread_cond_t * __cond ) 
throw ( ) ; 


extern int pthread_cond_signal ( pthread_cond_t * __cond ) 
throw ( ) ; 


extern int pthread_cond_broadcast ( pthread_cond_t * __cond ) 
throw ( ) ; 






extern int pthread_cond_wait ( pthread_cond_t * __restrict __cond , 
pthread_mutex_t * __restrict __mutex ) 
; 
# 1000 "/usr/include/pthread.h" 3 4 
extern int pthread_cond_timedwait ( pthread_cond_t * __restrict __cond , 
pthread_mutex_t * __restrict __mutex , 
const struct timespec * __restrict __abstime ) 
; 




extern int pthread_condattr_init ( pthread_condattr_t * __attr ) 
throw ( ) ; 


extern int pthread_condattr_destroy ( pthread_condattr_t * __attr ) 
throw ( ) ; 


extern int pthread_condattr_getpshared ( const pthread_condattr_t * 
__restrict __attr , 
int * __restrict __pshared ) 
throw ( ) ; 


extern int pthread_condattr_setpshared ( pthread_condattr_t * __attr , 
int __pshared ) throw ( ) ; 



extern int pthread_condattr_getclock ( const pthread_condattr_t * 
__restrict __attr , 
__clockid_t * __restrict __clock_id ) 
throw ( ) ; 


extern int pthread_condattr_setclock ( pthread_condattr_t * __attr , 
__clockid_t __clock_id ) 
throw ( ) ; 
# 1044 "/usr/include/pthread.h" 3 4 
extern int pthread_spin_init ( pthread_spinlock_t * __lock , int __pshared ) 
throw ( ) ; 


extern int pthread_spin_destroy ( pthread_spinlock_t * __lock ) 
throw ( ) ; 


extern int pthread_spin_lock ( pthread_spinlock_t * __lock ) 
throw ( ) ; 


extern int pthread_spin_trylock ( pthread_spinlock_t * __lock ) 
throw ( ) ; 


extern int pthread_spin_unlock ( pthread_spinlock_t * __lock ) 
throw ( ) ; 






extern int pthread_barrier_init ( pthread_barrier_t * __restrict __barrier , 
const pthread_barrierattr_t * __restrict 
__attr , unsigned int __count ) 
throw ( ) ; 


extern int pthread_barrier_destroy ( pthread_barrier_t * __barrier ) 
throw ( ) ; 


extern int pthread_barrier_wait ( pthread_barrier_t * __barrier ) 
throw ( ) ; 



extern int pthread_barrierattr_init ( pthread_barrierattr_t * __attr ) 
throw ( ) ; 


extern int pthread_barrierattr_destroy ( pthread_barrierattr_t * __attr ) 
throw ( ) ; 


extern int pthread_barrierattr_getpshared ( const pthread_barrierattr_t * 
__restrict __attr , 
int * __restrict __pshared ) 
throw ( ) ; 


extern int pthread_barrierattr_setpshared ( pthread_barrierattr_t * __attr , 
int __pshared ) 
throw ( ) ; 
# 1111 "/usr/include/pthread.h" 3 4 
extern int pthread_key_create ( pthread_key_t * __key , 
void ( * __destr_function ) ( void * ) ) 
throw ( ) ; 


extern int pthread_key_delete ( pthread_key_t __key ) throw ( ) ; 


extern void * pthread_getspecific ( pthread_key_t __key ) throw ( ) ; 


extern int pthread_setspecific ( pthread_key_t __key , 
const void * __pointer ) throw ( ) ; 




extern int pthread_getcpuclockid ( pthread_t __thread_id , 
__clockid_t * __clock_id ) 
throw ( ) ; 
# 1145 "/usr/include/pthread.h" 3 4 
extern int pthread_atfork ( void ( * __prepare ) ( void ) , 
void ( * __parent ) ( void ) , 
void ( * __child ) ( void ) ) throw ( ) ; 
# 1159 "/usr/include/pthread.h" 3 4 
} 
# 36 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 2 3 
# 47 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3 
typedef pthread_t __gthread_t ; 
typedef pthread_key_t __gthread_key_t ; 
typedef pthread_once_t __gthread_once_t ; 
typedef pthread_mutex_t __gthread_mutex_t ; 
typedef pthread_mutex_t __gthread_recursive_mutex_t ; 
typedef pthread_cond_t __gthread_cond_t ; 
typedef struct timespec __gthread_time_t ; 
# 101 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3 
static __typeof ( pthread_once ) __gthrw_pthread_once ; 
static __typeof ( pthread_getspecific ) __gthrw_pthread_getspecific ; 
static __typeof ( pthread_setspecific ) __gthrw_pthread_setspecific ; 

static __typeof ( pthread_create ) __gthrw_pthread_create ; 
static __typeof ( pthread_join ) __gthrw_pthread_join ; 
static __typeof ( pthread_equal ) __gthrw_pthread_equal ; 
static __typeof ( pthread_self ) __gthrw_pthread_self ; 
static __typeof ( pthread_detach ) __gthrw_pthread_detach ; 

static __typeof ( pthread_cancel ) __gthrw_pthread_cancel ; 

static __typeof ( sched_yield ) __gthrw_sched_yield ; 

static __typeof ( pthread_mutex_lock ) __gthrw_pthread_mutex_lock ; 
static __typeof ( pthread_mutex_trylock ) __gthrw_pthread_mutex_trylock ; 

static __typeof ( pthread_mutex_timedlock ) __gthrw_pthread_mutex_timedlock ; 

static __typeof ( pthread_mutex_unlock ) __gthrw_pthread_mutex_unlock ; 
static __typeof ( pthread_mutex_init ) __gthrw_pthread_mutex_init ; 
static __typeof ( pthread_mutex_destroy ) __gthrw_pthread_mutex_destroy ; 

static __typeof ( pthread_cond_init ) __gthrw_pthread_cond_init ; 
static __typeof ( pthread_cond_broadcast ) __gthrw_pthread_cond_broadcast ; 
static __typeof ( pthread_cond_signal ) __gthrw_pthread_cond_signal ; 
static __typeof ( pthread_cond_wait ) __gthrw_pthread_cond_wait ; 
static __typeof ( pthread_cond_timedwait ) __gthrw_pthread_cond_timedwait ; 
static __typeof ( pthread_cond_destroy ) __gthrw_pthread_cond_destroy ; 

static __typeof ( pthread_key_create ) __gthrw_pthread_key_create ; 
static __typeof ( pthread_key_delete ) __gthrw_pthread_key_delete ; 
static __typeof ( pthread_mutexattr_init ) __gthrw_pthread_mutexattr_init ; 
static __typeof ( pthread_mutexattr_settype ) __gthrw_pthread_mutexattr_settype ; 
static __typeof ( pthread_mutexattr_destroy ) __gthrw_pthread_mutexattr_destroy ; 
# 236 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3 
static __typeof ( pthread_key_create ) __gthrw___pthread_key_create ; 
# 246 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3 
static inline int 
__gthread_active_p ( void ) 
{ __CvT__record_line____(__CvT_miT,67,248);
__CvT__record_line____(__CvT_miT,67,249);static void * const __gthread_active_ptr 
= ( void * ) & __gthrw___pthread_key_create ; 
__CvT__record_line____(__CvT_miT,67,251);return __gthread_active_ptr != 0 ; 
} 
# 658 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3 
static inline int 
__gthread_create ( __gthread_t * __threadid , void * ( * __func ) ( void * ) , 
void * __args ) 
{ __CvT__record_line____(__CvT_miT,67,661);
__CvT__record_line____(__CvT_miT,67,662);return __gthrw_pthread_create ( __threadid , __null , __func , __args ) ; 
} 

static inline int 
__gthread_join ( __gthread_t __threadid , void ** __value_ptr ) 
{ __CvT__record_line____(__CvT_miT,67,667);
__CvT__record_line____(__CvT_miT,67,668);return __gthrw_pthread_join ( __threadid , __value_ptr ) ; 
} 

static inline int 
__gthread_detach ( __gthread_t __threadid ) 
{ __CvT__record_line____(__CvT_miT,67,673);
__CvT__record_line____(__CvT_miT,67,674);return __gthrw_pthread_detach ( __threadid ) ; 
} 

static inline int 
__gthread_equal ( __gthread_t __t1 , __gthread_t __t2 ) 
{ __CvT__record_line____(__CvT_miT,67,679);
__CvT__record_line____(__CvT_miT,67,680);return __gthrw_pthread_equal ( __t1 , __t2 ) ; 
} 

static inline __gthread_t 
__gthread_self ( void ) 
{ __CvT__record_line____(__CvT_miT,67,685);
__CvT__record_line____(__CvT_miT,67,686);return __gthrw_pthread_self ( ) ; 
} 

static inline int 
__gthread_yield ( void ) 
{ __CvT__record_line____(__CvT_miT,67,691);
__CvT__record_line____(__CvT_miT,67,692);return __gthrw_sched_yield ( ) ; 
} 

static inline int 
__gthread_once ( __gthread_once_t * __once , void ( * __func ) ( void ) ) 
{ __CvT__record_line____(__CvT_miT,67,697);
__CvT__record_line____(__CvT_miT,67,698);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,67,699);return __gthrw_pthread_once ( __once , __func ) ; 
}else {
__CvT__record_line____(__CvT_miT,67,701);return - 1 ; 
}} 

static inline int 
__gthread_key_create ( __gthread_key_t * __key , void ( * __dtor ) ( void * ) ) 
{ __CvT__record_line____(__CvT_miT,67,706);
__CvT__record_line____(__CvT_miT,67,707);return __gthrw_pthread_key_create ( __key , __dtor ) ; 
} 

static inline int 
__gthread_key_delete ( __gthread_key_t __key ) 
{ __CvT__record_line____(__CvT_miT,67,712);
__CvT__record_line____(__CvT_miT,67,713);return __gthrw_pthread_key_delete ( __key ) ; 
} 

static inline void * 
__gthread_getspecific ( __gthread_key_t __key ) 
{ __CvT__record_line____(__CvT_miT,67,718);
__CvT__record_line____(__CvT_miT,67,719);return __gthrw_pthread_getspecific ( __key ) ; 
} 

static inline int 
__gthread_setspecific ( __gthread_key_t __key , const void * __ptr ) 
{ __CvT__record_line____(__CvT_miT,67,724);
__CvT__record_line____(__CvT_miT,67,725);return __gthrw_pthread_setspecific ( __key , __ptr ) ; 
} 

static inline void 
__gthread_mutex_init_function ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,67,730);
__CvT__record_line____(__CvT_miT,67,731);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,67,732);__gthrw_pthread_mutex_init ( __mutex , __null ) ; 
}} 

static inline int 
__gthread_mutex_destroy ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,67,737);
__CvT__record_line____(__CvT_miT,67,738);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,67,739);return __gthrw_pthread_mutex_destroy ( __mutex ) ; 
}else {
__CvT__record_line____(__CvT_miT,67,741);return 0 ; 
}} 

static inline int 
__gthread_mutex_lock ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,67,746);
__CvT__record_line____(__CvT_miT,67,747);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,67,748);return __gthrw_pthread_mutex_lock ( __mutex ) ; 
}else {
__CvT__record_line____(__CvT_miT,67,750);return 0 ; 
}} 

static inline int 
__gthread_mutex_trylock ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,67,755);
__CvT__record_line____(__CvT_miT,67,756);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,67,757);return __gthrw_pthread_mutex_trylock ( __mutex ) ; 
}else {
__CvT__record_line____(__CvT_miT,67,759);return 0 ; 
}} 


static inline int 
__gthread_mutex_timedlock ( __gthread_mutex_t * __mutex , 
const __gthread_time_t * __abs_timeout ) 
{ __CvT__record_line____(__CvT_miT,67,766);
__CvT__record_line____(__CvT_miT,67,767);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,67,768);return __gthrw_pthread_mutex_timedlock ( __mutex , __abs_timeout ) ; 
}else {
__CvT__record_line____(__CvT_miT,67,770);return 0 ; 
}} 


static inline int 
__gthread_mutex_unlock ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,67,776);
__CvT__record_line____(__CvT_miT,67,777);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,67,778);return __gthrw_pthread_mutex_unlock ( __mutex ) ; 
}else {
__CvT__record_line____(__CvT_miT,67,780);return 0 ; 
}} 
# 807 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3 
static inline int 
__gthread_recursive_mutex_lock ( __gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,67,809);
__CvT__record_line____(__CvT_miT,67,810);return __gthread_mutex_lock ( __mutex ) ; 
} 

static inline int 
__gthread_recursive_mutex_trylock ( __gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,67,815);
__CvT__record_line____(__CvT_miT,67,816);return __gthread_mutex_trylock ( __mutex ) ; 
} 


static inline int 
__gthread_recursive_mutex_timedlock ( __gthread_recursive_mutex_t * __mutex , 
const __gthread_time_t * __abs_timeout ) 
{ __CvT__record_line____(__CvT_miT,67,823);
__CvT__record_line____(__CvT_miT,67,824);return __gthread_mutex_timedlock ( __mutex , __abs_timeout ) ; 
} 


static inline int 
__gthread_recursive_mutex_unlock ( __gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,67,830);
__CvT__record_line____(__CvT_miT,67,831);return __gthread_mutex_unlock ( __mutex ) ; 
} 

static inline int 
__gthread_recursive_mutex_destroy ( __gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,67,836);
__CvT__record_line____(__CvT_miT,67,837);return __gthread_mutex_destroy ( __mutex ) ; 
} 
# 849 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3 
static inline int 
__gthread_cond_broadcast ( __gthread_cond_t * __cond ) 
{ __CvT__record_line____(__CvT_miT,67,851);
__CvT__record_line____(__CvT_miT,67,852);return __gthrw_pthread_cond_broadcast ( __cond ) ; 
} 

static inline int 
__gthread_cond_signal ( __gthread_cond_t * __cond ) 
{ __CvT__record_line____(__CvT_miT,67,857);
__CvT__record_line____(__CvT_miT,67,858);return __gthrw_pthread_cond_signal ( __cond ) ; 
} 

static inline int 
__gthread_cond_wait ( __gthread_cond_t * __cond , __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,67,863);
__CvT__record_line____(__CvT_miT,67,864);return __gthrw_pthread_cond_wait ( __cond , __mutex ) ; 
} 

static inline int 
__gthread_cond_timedwait ( __gthread_cond_t * __cond , __gthread_mutex_t * __mutex , 
const __gthread_time_t * __abs_timeout ) 
{ __CvT__record_line____(__CvT_miT,67,870);
__CvT__record_line____(__CvT_miT,67,871);return __gthrw_pthread_cond_timedwait ( __cond , __mutex , __abs_timeout ) ; 
} 

static inline int 
__gthread_cond_wait_recursive ( __gthread_cond_t * __cond , 
__gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,67,877);
__CvT__record_line____(__CvT_miT,67,878);return __gthread_cond_wait ( __cond , __mutex ) ; 
} 

static inline int 
__gthread_cond_destroy ( __gthread_cond_t * __cond ) 
{ __CvT__record_line____(__CvT_miT,67,883);
__CvT__record_line____(__CvT_miT,67,884);return __gthrw_pthread_cond_destroy ( __cond ) ; 
} 
# 149 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 2 3 


# pragma GCC visibility pop 
 # 36 "/usr/include/c++/5/ext/atomicity.h" 2 3 
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/atomic_word.h" 1 3 
# 32 "/usr/include/x86_64-linux-gnu/c++/5/bits/atomic_word.h" 3 
typedef int _Atomic_word ; 
# 37 "/usr/include/c++/5/ext/atomicity.h" 2 3 

namespace __gnu_cxx 
{ 







static inline _Atomic_word 
__exchange_and_add ( volatile _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,65,49);return __atomic_fetch_add ( __mem , __val , 4 ) ; } 

static inline void 
__atomic_add ( volatile _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,65,53);__atomic_fetch_add ( __mem , __val , 4 ) ; } 
# 64 "/usr/include/c++/5/ext/atomicity.h" 3 
static inline _Atomic_word 
__exchange_and_add_single ( _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,65,66);
__CvT__record_line____(__CvT_miT,65,67);_Atomic_word __result = * __mem ; 
__CvT__record_line____(__CvT_miT,65,68);* __mem += __val ; 
__CvT__record_line____(__CvT_miT,65,69);return __result ; 
} 

static inline void 
__atomic_add_single ( _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,65,74);* __mem += __val ; } 

static inline _Atomic_word 

__exchange_and_add_dispatch ( _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,65,79);

__CvT__record_line____(__CvT_miT,65,81);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,65,82);return __exchange_and_add ( __mem , __val ) ; 
}else {
__CvT__record_line____(__CvT_miT,65,84);return __exchange_and_add_single ( __mem , __val ) ; 



}} 

static inline void 

__atomic_add_dispatch ( _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,65,93);

__CvT__record_line____(__CvT_miT,65,95);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,65,96);__atomic_add ( __mem , __val ) ; 
}else {
__CvT__record_line____(__CvT_miT,65,98);__atomic_add_single ( __mem , __val ) ; 



}} 


} 
# 40 "/usr/include/c++/5/bits/basic_string.h" 2 3 
# 1 "/usr/include/c++/5/ext/alloc_traits.h" 1 3 
# 32 "/usr/include/c++/5/ext/alloc_traits.h" 3 

# 33 "/usr/include/c++/5/ext/alloc_traits.h" 3 
# 41 "/usr/include/c++/5/ext/alloc_traits.h" 3 
namespace __gnu_cxx 
{ 

# 94 "/usr/include/c++/5/ext/alloc_traits.h" 3 
template < typename _Alloc > 
struct __alloc_traits 



{ 
typedef _Alloc allocator_type ; 
# 172 "/usr/include/c++/5/ext/alloc_traits.h" 3 
typedef typename _Alloc :: pointer pointer ; 
typedef typename _Alloc :: const_pointer const_pointer ; 
typedef typename _Alloc :: value_type value_type ; 
typedef typename _Alloc :: reference reference ; 
typedef typename _Alloc :: const_reference const_reference ; 
typedef typename _Alloc :: size_type size_type ; 
typedef typename _Alloc :: difference_type difference_type ; 

static pointer 
allocate ( _Alloc & __a , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,77,182);return __a . allocate ( __n ) ; } 

static void deallocate ( _Alloc & __a , pointer __p , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,77,185);__a . deallocate ( __p , __n ) ; } 

template < typename _Tp > 
static void construct ( _Alloc & __a , pointer __p , const _Tp & __arg ) 
{ __CvT__record_line____(__CvT_miT,77,189);__a . construct ( __p , __arg ) ; } 

static void destroy ( _Alloc & __a , pointer __p ) 
{ __CvT__record_line____(__CvT_miT,77,192);__a . destroy ( __p ) ; } 

static size_type max_size ( const _Alloc & __a ) 
{ __CvT__record_line____(__CvT_miT,77,195);return __a . max_size ( ) ; } 

static const _Alloc & _S_select_on_copy ( const _Alloc & __a ) { __CvT__record_line____(__CvT_miT,77,197);return __a ; } 

static void _S_on_swap ( _Alloc & __a , _Alloc & __b ) 
{ __CvT__record_line____(__CvT_miT,77,200);


__CvT__record_line____(__CvT_miT,77,203);std :: __alloc_swap < _Alloc >:: _S_do_it ( __a , __b ) ; 
} 

template < typename _Tp > 
struct rebind 
{ typedef typename _Alloc :: template rebind < _Tp >:: other other ; } ; 

} ; 


} 
# 41 "/usr/include/c++/5/bits/basic_string.h" 2 3 





namespace std 
{ 



namespace __cxx11 { 
# 70 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
class basic_string 
{ 
typedef typename __gnu_cxx :: __alloc_traits < _Alloc >:: template 
rebind < _CharT >:: other _Char_alloc_type ; 
typedef __gnu_cxx :: __alloc_traits < _Char_alloc_type > _Alloc_traits ; 


public : 
typedef _Traits traits_type ; 
typedef typename _Traits :: char_type value_type ; 
typedef _Char_alloc_type allocator_type ; 
typedef typename _Alloc_traits :: size_type size_type ; 
typedef typename _Alloc_traits :: difference_type difference_type ; 
typedef typename _Alloc_traits :: reference reference ; 
typedef typename _Alloc_traits :: const_reference const_reference ; 
typedef typename _Alloc_traits :: pointer pointer ; 
typedef typename _Alloc_traits :: const_pointer const_pointer ; 
typedef __gnu_cxx :: __normal_iterator < pointer , basic_string > iterator ; 
typedef __gnu_cxx :: __normal_iterator < const_pointer , basic_string > 
const_iterator ; 
typedef std :: reverse_iterator < const_iterator > const_reverse_iterator ; 
typedef std :: reverse_iterator < iterator > reverse_iterator ; 


static const size_type npos = static_cast < size_type > ( - 1 ) ; 

private : 


typedef iterator __const_iterator ; 





struct _Alloc_hider : allocator_type 
{ 
_Alloc_hider ( pointer __dat , const _Alloc & __a = _Alloc ( ) ) 
: allocator_type ( __a ) , _M_p ( __dat ) { __CvT__record_line____(__CvT_miT,64,109);} 

pointer _M_p ; 
} ; 

_Alloc_hider _M_dataplus ; 
size_type _M_string_length ; 

enum { _S_local_capacity = 15 / sizeof ( _CharT ) } ; 

union 
{ 
_CharT _M_local_buf [ _S_local_capacity + 1 ] ; 
size_type _M_allocated_capacity ; 
} ; 

void 
_M_data ( pointer __p ) 
{ __CvT__record_line____(__CvT_miT,64,127);_M_dataplus . _M_p = __p ; } 

void 
_M_length ( size_type __length ) 
{ __CvT__record_line____(__CvT_miT,64,131);_M_string_length = __length ; } 

pointer 
_M_data ( ) const 
{ __CvT__record_line____(__CvT_miT,64,135);return _M_dataplus . _M_p ; } 

pointer 
_M_local_data ( ) 
{ __CvT__record_line____(__CvT_miT,64,139);



__CvT__record_line____(__CvT_miT,64,143);return pointer ( _M_local_buf ) ; 

} 

const_pointer 
_M_local_data ( ) const 
{ __CvT__record_line____(__CvT_miT,64,149);



__CvT__record_line____(__CvT_miT,64,153);return const_pointer ( _M_local_buf ) ; 

} 

void 
_M_capacity ( size_type __capacity ) 
{ __CvT__record_line____(__CvT_miT,64,159);_M_allocated_capacity = __capacity ; } 

void 
_M_set_length ( size_type __n ) 
{ __CvT__record_line____(__CvT_miT,64,163);
__CvT__record_line____(__CvT_miT,64,164);_M_length ( __n ) ; 
__CvT__record_line____(__CvT_miT,64,165);traits_type :: assign ( _M_data ( ) [ __n ] , _CharT ( ) ) ; 
} 

bool 
_M_is_local ( ) const 
{ __CvT__record_line____(__CvT_miT,64,170);return _M_data ( ) == _M_local_data ( ) ; } 


pointer 
_M_create ( size_type & , size_type ) ; 

void 
_M_dispose ( ) 
{ __CvT__record_line____(__CvT_miT,64,178);
__CvT__record_line____(__CvT_miT,64,179);if ( ! _M_is_local ( ) ) 
{__CvT__record_line____(__CvT_miT,64,180);_M_destroy ( _M_allocated_capacity ) ; 
}} 

void 
_M_destroy ( size_type __size ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,64,185);_Alloc_traits :: deallocate ( _M_get_allocator ( ) , _M_data ( ) , __size + 1 ) ; } 



template < typename _InIterator > 
void 
_M_construct_aux ( _InIterator __beg , _InIterator __end , 
std :: __false_type ) 
{ __CvT__record_line____(__CvT_miT,64,193);
typedef typename iterator_traits < _InIterator >:: iterator_category _Tag ; 
__CvT__record_line____(__CvT_miT,64,195);_M_construct ( __beg , __end , _Tag ( ) ) ; 
} 



template < typename _Integer > 
void 
_M_construct_aux ( _Integer __beg , _Integer __end , std :: __true_type ) 
{ __CvT__record_line____(__CvT_miT,64,203);_M_construct_aux_2 ( static_cast < size_type > ( __beg ) , __end ) ; } 

void 
_M_construct_aux_2 ( size_type __req , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,64,207);_M_construct ( __req , __c ) ; } 

template < typename _InIterator > 
void 
_M_construct ( _InIterator __beg , _InIterator __end ) 
{ __CvT__record_line____(__CvT_miT,64,212);
typedef typename std :: __is_integer < _InIterator >:: __type _Integral ; 
__CvT__record_line____(__CvT_miT,64,214);_M_construct_aux ( __beg , __end , _Integral ( ) ) ; 
} 


template < typename _InIterator > 
void 
_M_construct ( _InIterator __beg , _InIterator __end , 
std :: input_iterator_tag ) ; 



template < typename _FwdIterator > 
void 
_M_construct ( _FwdIterator __beg , _FwdIterator __end , 
std :: forward_iterator_tag ) ; 

void 
_M_construct ( size_type __req , _CharT __c ) ; 

allocator_type & 
_M_get_allocator ( ) 
{ __CvT__record_line____(__CvT_miT,64,235);return _M_dataplus ; } 

const allocator_type & 
_M_get_allocator ( ) const 
{ __CvT__record_line____(__CvT_miT,64,239);return _M_dataplus ; } 

private : 
# 257 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
_M_check ( size_type __pos , const char * __s ) const 
{ __CvT__record_line____(__CvT_miT,64,259);
__CvT__record_line____(__CvT_miT,64,260);if ( __pos > this -> size ( ) ) 
{__CvT__record_line____(__CvT_miT,64,261);__throw_out_of_range_fmt ( ( "%s: __pos (which is %zu) > " "this->size() (which is %zu)" ) 
, 
__s , __pos , this -> size ( ) ) ; 
}__CvT__record_line____(__CvT_miT,64,264);return __pos ; 
} 

void 
_M_check_length ( size_type __n1 , size_type __n2 , const char * __s ) const 
{ __CvT__record_line____(__CvT_miT,64,269);
__CvT__record_line____(__CvT_miT,64,270);if ( this -> max_size ( ) - ( this -> size ( ) - __n1 ) < __n2 ) 
{__CvT__record_line____(__CvT_miT,64,271);__throw_length_error ( ( __s ) ) ; 
}} 



size_type 
_M_limit ( size_type __pos , size_type __off ) const 
{ __CvT__record_line____(__CvT_miT,64,278);
__CvT__record_line____(__CvT_miT,64,279);const bool __testoff = __off < this -> size ( ) - __pos ; 
__CvT__record_line____(__CvT_miT,64,280);return __testoff ? __off : this -> size ( ) - __pos ; 
} 


bool 
_M_disjunct ( const _CharT * __s ) const 
{ __CvT__record_line____(__CvT_miT,64,286);
__CvT__record_line____(__CvT_miT,64,287);return ( less < const _CharT *> ( ) ( __s , _M_data ( ) ) 
|| less < const _CharT *> ( ) ( _M_data ( ) + this -> size ( ) , __s ) ) ; 
} 



static void 
_S_copy ( _CharT * __d , const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,64,295);
__CvT__record_line____(__CvT_miT,64,296);if ( __n == 1 ) 
{__CvT__record_line____(__CvT_miT,64,297);traits_type :: assign ( * __d , * __s ) ; 
}else {
__CvT__record_line____(__CvT_miT,64,299);traits_type :: copy ( __d , __s , __n ) ; 
}} 

static void 
_S_move ( _CharT * __d , const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,64,304);
__CvT__record_line____(__CvT_miT,64,305);if ( __n == 1 ) 
{__CvT__record_line____(__CvT_miT,64,306);traits_type :: assign ( * __d , * __s ) ; 
}else {
__CvT__record_line____(__CvT_miT,64,308);traits_type :: move ( __d , __s , __n ) ; 
}} 

static void 
_S_assign ( _CharT * __d , size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,64,313);
__CvT__record_line____(__CvT_miT,64,314);if ( __n == 1 ) 
{__CvT__record_line____(__CvT_miT,64,315);traits_type :: assign ( * __d , __c ) ; 
}else {
__CvT__record_line____(__CvT_miT,64,317);traits_type :: assign ( __d , __n , __c ) ; 
}} 



template < class _Iterator > 
static void 
_S_copy_chars ( _CharT * __p , _Iterator __k1 , _Iterator __k2 ) 
{ __CvT__record_line____(__CvT_miT,64,325);
__CvT__record_line____(__CvT_miT,64,326);for ( ; __k1 != __k2 ; ++ __k1 , ++ __p ) 
{__CvT__record_line____(__CvT_miT,64,327);traits_type :: assign ( * __p , * __k1 ) ; 
}} 

static void 
_S_copy_chars ( _CharT * __p , iterator __k1 , iterator __k2 ) 
{ __CvT__record_line____(__CvT_miT,64,332);_S_copy_chars ( __p , __k1 . base ( ) , __k2 . base ( ) ) ; } 

static void 
_S_copy_chars ( _CharT * __p , const_iterator __k1 , const_iterator __k2 ) 

{ __CvT__record_line____(__CvT_miT,64,337);_S_copy_chars ( __p , __k1 . base ( ) , __k2 . base ( ) ) ; } 

static void 
_S_copy_chars ( _CharT * __p , _CharT * __k1 , _CharT * __k2 ) 
{ __CvT__record_line____(__CvT_miT,64,341);_S_copy ( __p , __k1 , __k2 - __k1 ) ; } 

static void 
_S_copy_chars ( _CharT * __p , const _CharT * __k1 , const _CharT * __k2 ) 

{ __CvT__record_line____(__CvT_miT,64,346);_S_copy ( __p , __k1 , __k2 - __k1 ) ; } 

static int 
_S_compare ( size_type __n1 , size_type __n2 ) 
{ __CvT__record_line____(__CvT_miT,64,350);
__CvT__record_line____(__CvT_miT,64,351);const difference_type __d = difference_type ( __n1 - __n2 ) ; 

__CvT__record_line____(__CvT_miT,64,353);if ( __d > __gnu_cxx :: __numeric_traits < int >:: __max ) 
{__CvT__record_line____(__CvT_miT,64,354);return __gnu_cxx :: __numeric_traits < int >:: __max ; 
}else {__CvT__record_line____(__CvT_miT,64,355);if ( __d < __gnu_cxx :: __numeric_traits < int >:: __min ) 
{__CvT__record_line____(__CvT_miT,64,356);return __gnu_cxx :: __numeric_traits < int >:: __min ; 
}else {
__CvT__record_line____(__CvT_miT,64,358);return int ( __d ) ; 
}}} 

void 
_M_assign ( const basic_string & __rcs ) ; 

void 
_M_mutate ( size_type __pos , size_type __len1 , const _CharT * __s , 
size_type __len2 ) ; 

void 
_M_erase ( size_type __pos , size_type __n ) ; 

public : 







basic_string ( ) 



: _M_dataplus ( _M_local_data ( ) ) 
{ __CvT__record_line____(__CvT_miT,64,384);_M_set_length ( 0 ) ; } 




explicit 
basic_string ( const _Alloc & __a ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ __CvT__record_line____(__CvT_miT,64,392);_M_set_length ( 0 ) ; } 





basic_string ( const basic_string & __str ) 
: _M_dataplus ( _M_local_data ( ) , __str . _M_get_allocator ( ) ) 
{ __CvT__record_line____(__CvT_miT,64,400);_M_construct ( __str . _M_data ( ) , __str . _M_data ( ) + __str . length ( ) ) ; } 
# 410 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string ( const basic_string & __str , size_type __pos , 
size_type __n = npos ) 
: _M_dataplus ( _M_local_data ( ) ) 
{ __CvT__record_line____(__CvT_miT,64,413);
__CvT__record_line____(__CvT_miT,64,414);const _CharT * __start = __str . _M_data ( ) 
+ __str . _M_check ( __pos , "basic_string::basic_string" ) ; 
__CvT__record_line____(__CvT_miT,64,416);_M_construct ( __start , __start + __str . _M_limit ( __pos , __n ) ) ; 
} 
# 426 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string ( const basic_string & __str , size_type __pos , 
size_type __n , const _Alloc & __a ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ __CvT__record_line____(__CvT_miT,64,429);
__CvT__record_line____(__CvT_miT,64,430);const _CharT * __start 
= __str . _M_data ( ) + __str . _M_check ( __pos , "string::string" ) ; 
__CvT__record_line____(__CvT_miT,64,432);_M_construct ( __start , __start + __str . _M_limit ( __pos , __n ) ) ; 
} 
# 444 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string ( const _CharT * __s , size_type __n , 
const _Alloc & __a = _Alloc ( ) ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ __CvT__record_line____(__CvT_miT,64,447);_M_construct ( __s , __s + __n ) ; } 






basic_string ( const _CharT * __s , const _Alloc & __a = _Alloc ( ) ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ __CvT__record_line____(__CvT_miT,64,456);_M_construct ( __s , __s ? __s + traits_type :: length ( __s ) : __s + npos ) ; } 







basic_string ( size_type __n , _CharT __c , const _Alloc & __a = _Alloc ( ) ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ __CvT__record_line____(__CvT_miT,64,466);_M_construct ( __n , __c ) ; } 
# 532 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _InputIterator > 

basic_string ( _InputIterator __beg , _InputIterator __end , 
const _Alloc & __a = _Alloc ( ) ) 
: _M_dataplus ( _M_local_data ( ) , __a ) 
{ __CvT__record_line____(__CvT_miT,64,537);_M_construct ( __beg , __end ) ; } 




~ basic_string ( ) 
{ __CvT__record_line____(__CvT_miT,64,543);_M_dispose ( ) ; } 





basic_string & 
operator = ( const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,64,551);return this -> assign ( __str ) ; } 





basic_string & 
operator = ( const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,64,559);return this -> assign ( __s ) ; } 
# 568 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
operator = ( _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,64,570);
__CvT__record_line____(__CvT_miT,64,571);this -> assign ( 1 , __c ) ; 
__CvT__record_line____(__CvT_miT,64,572);return * this ; 
} 
# 610 "/usr/include/c++/5/bits/basic_string.h" 3 
iterator 
begin ( ) 
{ __CvT__record_line____(__CvT_miT,64,612);return iterator ( _M_data ( ) ) ; } 





const_iterator 
begin ( ) const 
{ __CvT__record_line____(__CvT_miT,64,620);return const_iterator ( _M_data ( ) ) ; } 





iterator 
end ( ) 
{ __CvT__record_line____(__CvT_miT,64,628);return iterator ( _M_data ( ) + this -> size ( ) ) ; } 





const_iterator 
end ( ) const 
{ __CvT__record_line____(__CvT_miT,64,636);return const_iterator ( _M_data ( ) + this -> size ( ) ) ; } 






reverse_iterator 
rbegin ( ) 
{ __CvT__record_line____(__CvT_miT,64,645);return reverse_iterator ( this -> end ( ) ) ; } 






const_reverse_iterator 
rbegin ( ) const 
{ __CvT__record_line____(__CvT_miT,64,654);return const_reverse_iterator ( this -> end ( ) ) ; } 






reverse_iterator 
rend ( ) 
{ __CvT__record_line____(__CvT_miT,64,663);return reverse_iterator ( this -> begin ( ) ) ; } 






const_reverse_iterator 
rend ( ) const 
{ __CvT__record_line____(__CvT_miT,64,672);return const_reverse_iterator ( this -> begin ( ) ) ; } 
# 710 "/usr/include/c++/5/bits/basic_string.h" 3 
public : 



size_type 
size ( ) const 
{ __CvT__record_line____(__CvT_miT,64,716);return _M_string_length ; } 



size_type 
length ( ) const 
{ __CvT__record_line____(__CvT_miT,64,722);return _M_string_length ; } 


size_type 
max_size ( ) const 
{ __CvT__record_line____(__CvT_miT,64,727);return ( _Alloc_traits :: max_size ( _M_get_allocator ( ) ) - 1 ) / 2 ; } 
# 739 "/usr/include/c++/5/bits/basic_string.h" 3 
void 
resize ( size_type __n , _CharT __c ) ; 
# 752 "/usr/include/c++/5/bits/basic_string.h" 3 
void 
resize ( size_type __n ) 
{ __CvT__record_line____(__CvT_miT,64,754);this -> resize ( __n , _CharT ( ) ) ; } 
# 777 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
capacity ( ) const 
{ __CvT__record_line____(__CvT_miT,64,779);
__CvT__record_line____(__CvT_miT,64,780);return _M_is_local ( ) ? size_type ( _S_local_capacity ) 
: _M_allocated_capacity ; 
} 
# 801 "/usr/include/c++/5/bits/basic_string.h" 3 
void 
reserve ( size_type __res_arg = 0 ) ; 




void 
clear ( ) 
{ __CvT__record_line____(__CvT_miT,64,809);_M_set_length ( 0 ) ; } 





bool 
empty ( ) const 
{ __CvT__record_line____(__CvT_miT,64,817);return this -> size ( ) == 0 ; } 
# 830 "/usr/include/c++/5/bits/basic_string.h" 3 
const_reference 
operator [ ] ( size_type __pos ) const 
{ __CvT__record_line____(__CvT_miT,64,832);
; 
__CvT__record_line____(__CvT_miT,64,834);return _M_data ( ) [ __pos ] ; 
} 
# 847 "/usr/include/c++/5/bits/basic_string.h" 3 
reference 
operator [ ] ( size_type __pos ) 
{ __CvT__record_line____(__CvT_miT,64,849);


; 

; 
__CvT__record_line____(__CvT_miT,64,855);return _M_data ( ) [ __pos ] ; 
} 
# 868 "/usr/include/c++/5/bits/basic_string.h" 3 
const_reference 
at ( size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,64,870);
__CvT__record_line____(__CvT_miT,64,871);if ( __n >= this -> size ( ) ) 
{__CvT__record_line____(__CvT_miT,64,872);__throw_out_of_range_fmt ( ( "basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)" ) 

, 
__n , this -> size ( ) ) ; 
}__CvT__record_line____(__CvT_miT,64,876);return _M_data ( ) [ __n ] ; 
} 
# 889 "/usr/include/c++/5/bits/basic_string.h" 3 
reference 
at ( size_type __n ) 
{ __CvT__record_line____(__CvT_miT,64,891);
__CvT__record_line____(__CvT_miT,64,892);if ( __n >= size ( ) ) 
{__CvT__record_line____(__CvT_miT,64,893);__throw_out_of_range_fmt ( ( "basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)" ) 

, 
__n , this -> size ( ) ) ; 
}__CvT__record_line____(__CvT_miT,64,897);return _M_data ( ) [ __n ] ; 
} 
# 940 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
operator += ( const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,64,942);return this -> append ( __str ) ; } 






basic_string & 
operator += ( const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,64,951);return this -> append ( __s ) ; } 






basic_string & 
operator += ( _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,64,960);
__CvT__record_line____(__CvT_miT,64,961);this -> push_back ( __c ) ; 
__CvT__record_line____(__CvT_miT,64,962);return * this ; 
} 
# 981 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
append ( const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,64,983);return _M_append ( __str . _M_data ( ) , __str . size ( ) ) ; } 
# 998 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
append ( const basic_string & __str , size_type __pos , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,64,1000);return _M_append ( __str . _M_data ( ) 
+ __str . _M_check ( __pos , "basic_string::append" ) , 
__str . _M_limit ( __pos , __n ) ) ; } 







basic_string & 
append ( const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,64,1012);
; 
__CvT__record_line____(__CvT_miT,64,1014);_M_check_length ( size_type ( 0 ) , __n , "basic_string::append" ) ; 
__CvT__record_line____(__CvT_miT,64,1015);return _M_append ( __s , __n ) ; 
} 






basic_string & 
append ( const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,64,1025);
; 
__CvT__record_line____(__CvT_miT,64,1027);const size_type __n = traits_type :: length ( __s ) ; 
__CvT__record_line____(__CvT_miT,64,1028);_M_check_length ( size_type ( 0 ) , __n , "basic_string::append" ) ; 
__CvT__record_line____(__CvT_miT,64,1029);return _M_append ( __s , __n ) ; 
} 
# 1040 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
append ( size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,64,1042);return _M_replace_aux ( this -> size ( ) , size_type ( 0 ) , __n , __c ) ; } 
# 1067 "/usr/include/c++/5/bits/basic_string.h" 3 
template < class _InputIterator > 

basic_string & 
append ( _InputIterator __first , _InputIterator __last ) 
{ __CvT__record_line____(__CvT_miT,64,1071);return this -> replace ( end ( ) , end ( ) , __first , __last ) ; } 





void 
push_back ( _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,64,1079);
__CvT__record_line____(__CvT_miT,64,1080);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,64,1081);if ( __size + 1 > this -> capacity ( ) ) 
{__CvT__record_line____(__CvT_miT,64,1082);this -> _M_mutate ( __size , size_type ( 0 ) , 0 , size_type ( 1 ) ) ; 
}__CvT__record_line____(__CvT_miT,64,1083);traits_type :: assign ( this -> _M_data ( ) [ __size ] , __c ) ; 
__CvT__record_line____(__CvT_miT,64,1084);this -> _M_set_length ( __size + 1 ) ; 
} 






basic_string & 
assign ( const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,64,1094);
__CvT__record_line____(__CvT_miT,64,1095);this -> _M_assign ( __str ) ; 
__CvT__record_line____(__CvT_miT,64,1096);return * this ; 
} 
# 1130 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
assign ( const basic_string & __str , size_type __pos , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,64,1132);return _M_replace ( size_type ( 0 ) , this -> size ( ) , __str . _M_data ( ) 
+ __str . _M_check ( __pos , "basic_string::assign" ) , 
__str . _M_limit ( __pos , __n ) ) ; } 
# 1146 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
assign ( const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,64,1148);
; 
__CvT__record_line____(__CvT_miT,64,1150);return _M_replace ( size_type ( 0 ) , this -> size ( ) , __s , __n ) ; 
} 
# 1162 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
assign ( const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,64,1164);
; 
__CvT__record_line____(__CvT_miT,64,1166);return _M_replace ( size_type ( 0 ) , this -> size ( ) , __s , 
traits_type :: length ( __s ) ) ; 
} 
# 1179 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
assign ( size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,64,1181);return _M_replace_aux ( size_type ( 0 ) , this -> size ( ) , __n , __c ) ; } 
# 1195 "/usr/include/c++/5/bits/basic_string.h" 3 
template < class _InputIterator > 

basic_string & 
assign ( _InputIterator __first , _InputIterator __last ) 
{ __CvT__record_line____(__CvT_miT,64,1199);return this -> replace ( begin ( ) , end ( ) , __first , __last ) ; } 
# 1250 "/usr/include/c++/5/bits/basic_string.h" 3 
void 
insert ( iterator __p , size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,64,1252);this -> replace ( __p , __p , __n , __c ) ; } 
# 1293 "/usr/include/c++/5/bits/basic_string.h" 3 
template < class _InputIterator > 
void 
insert ( iterator __p , _InputIterator __beg , _InputIterator __end ) 
{ __CvT__record_line____(__CvT_miT,64,1296);this -> replace ( __p , __p , __beg , __end ) ; } 
# 1326 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos1 , const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,64,1328);return this -> replace ( __pos1 , size_type ( 0 ) , 
__str . _M_data ( ) , __str . size ( ) ) ; } 
# 1349 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos1 , const basic_string & __str , 
size_type __pos2 , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,64,1352);return this -> replace ( __pos1 , size_type ( 0 ) , __str . _M_data ( ) 
+ __str . _M_check ( __pos2 , "basic_string::insert" ) , 
__str . _M_limit ( __pos2 , __n ) ) ; } 
# 1372 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos , const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,64,1374);return this -> replace ( __pos , size_type ( 0 ) , __s , __n ) ; } 
# 1391 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos , const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,64,1393);
; 
__CvT__record_line____(__CvT_miT,64,1395);return this -> replace ( __pos , size_type ( 0 ) , __s , 
traits_type :: length ( __s ) ) ; 
} 
# 1415 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos , size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,64,1417);return _M_replace_aux ( _M_check ( __pos , "basic_string::insert" ) , 
size_type ( 0 ) , __n , __c ) ; } 
# 1433 "/usr/include/c++/5/bits/basic_string.h" 3 
iterator 
insert ( __const_iterator __p , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,64,1435);
; 
__CvT__record_line____(__CvT_miT,64,1437);const size_type __pos = __p - begin ( ) ; 
__CvT__record_line____(__CvT_miT,64,1438);_M_replace_aux ( __pos , size_type ( 0 ) , size_type ( 1 ) , __c ) ; 
__CvT__record_line____(__CvT_miT,64,1439);return iterator ( _M_data ( ) + __pos ) ; 
} 
# 1457 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
erase ( size_type __pos = 0 , size_type __n = npos ) 
{ __CvT__record_line____(__CvT_miT,64,1459);
__CvT__record_line____(__CvT_miT,64,1460);this -> _M_erase ( _M_check ( __pos , "basic_string::erase" ) , 
_M_limit ( __pos , __n ) ) ; 
__CvT__record_line____(__CvT_miT,64,1462);return * this ; 
} 
# 1473 "/usr/include/c++/5/bits/basic_string.h" 3 
iterator 
erase ( __const_iterator __position ) 
{ __CvT__record_line____(__CvT_miT,64,1475);

; 
__CvT__record_line____(__CvT_miT,64,1478);const size_type __pos = __position - begin ( ) ; 
__CvT__record_line____(__CvT_miT,64,1479);this -> _M_erase ( __pos , size_type ( 1 ) ) ; 
__CvT__record_line____(__CvT_miT,64,1480);return iterator ( _M_data ( ) + __pos ) ; 
} 
# 1492 "/usr/include/c++/5/bits/basic_string.h" 3 
iterator 
erase ( __const_iterator __first , __const_iterator __last ) 
{ __CvT__record_line____(__CvT_miT,64,1494);

; 
__CvT__record_line____(__CvT_miT,64,1497);const size_type __pos = __first - begin ( ) ; 
__CvT__record_line____(__CvT_miT,64,1498);this -> _M_erase ( __pos , __last - __first ) ; 
__CvT__record_line____(__CvT_miT,64,1499);return iterator ( this -> _M_data ( ) + __pos ) ; 
} 
# 1530 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos , size_type __n , const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,64,1532);return this -> replace ( __pos , __n , __str . _M_data ( ) , __str . size ( ) ) ; } 
# 1552 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos1 , size_type __n1 , const basic_string & __str , 
size_type __pos2 , size_type __n2 ) 
{ __CvT__record_line____(__CvT_miT,64,1555);return this -> replace ( __pos1 , __n1 , __str . _M_data ( ) 
+ __str . _M_check ( __pos2 , "basic_string::replace" ) , 
__str . _M_limit ( __pos2 , __n2 ) ) ; } 
# 1577 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos , size_type __n1 , const _CharT * __s , 
size_type __n2 ) 
{ __CvT__record_line____(__CvT_miT,64,1580);
; 
__CvT__record_line____(__CvT_miT,64,1582);return _M_replace ( _M_check ( __pos , "basic_string::replace" ) , 
_M_limit ( __pos , __n1 ) , __s , __n2 ) ; 
} 
# 1602 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos , size_type __n1 , const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,64,1604);
; 
__CvT__record_line____(__CvT_miT,64,1606);return this -> replace ( __pos , __n1 , __s , traits_type :: length ( __s ) ) ; 
} 
# 1626 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos , size_type __n1 , size_type __n2 , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,64,1628);return _M_replace_aux ( _M_check ( __pos , "basic_string::replace" ) , 
_M_limit ( __pos , __n1 ) , __n2 , __c ) ; } 
# 1644 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , 
const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,64,1647);return this -> replace ( __i1 , __i2 , __str . _M_data ( ) , __str . size ( ) ) ; } 
# 1664 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , 
const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,64,1667);

; 
__CvT__record_line____(__CvT_miT,64,1670);return this -> replace ( __i1 - begin ( ) , __i2 - __i1 , __s , __n ) ; 
} 
# 1686 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,64,1688);
; 
__CvT__record_line____(__CvT_miT,64,1690);return this -> replace ( __i1 , __i2 , __s , traits_type :: length ( __s ) ) ; 
} 
# 1707 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , size_type __n , 
_CharT __c ) 
{ __CvT__record_line____(__CvT_miT,64,1710);

; 
__CvT__record_line____(__CvT_miT,64,1713);return _M_replace_aux ( __i1 - begin ( ) , __i2 - __i1 , __n , __c ) ; 
} 
# 1745 "/usr/include/c++/5/bits/basic_string.h" 3 
template < class _InputIterator > 



basic_string & 

replace ( iterator __i1 , iterator __i2 , 
_InputIterator __k1 , _InputIterator __k2 ) 
{ __CvT__record_line____(__CvT_miT,64,1753);

; 
; 
typedef typename std :: __is_integer < _InputIterator >:: __type _Integral ; 
__CvT__record_line____(__CvT_miT,64,1758);return _M_replace_dispatch ( __i1 , __i2 , __k1 , __k2 , _Integral ( ) ) ; 
} 




basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , 
_CharT * __k1 , _CharT * __k2 ) 
{ __CvT__record_line____(__CvT_miT,64,1767);

; 
; 
__CvT__record_line____(__CvT_miT,64,1771);return this -> replace ( __i1 - begin ( ) , __i2 - __i1 , 
__k1 , __k2 - __k1 ) ; 
} 

basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , 
const _CharT * __k1 , const _CharT * __k2 ) 
{ __CvT__record_line____(__CvT_miT,64,1778);

; 
; 
__CvT__record_line____(__CvT_miT,64,1782);return this -> replace ( __i1 - begin ( ) , __i2 - __i1 , 
__k1 , __k2 - __k1 ) ; 
} 

basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , 
iterator __k1 , iterator __k2 ) 
{ __CvT__record_line____(__CvT_miT,64,1789);

; 
; 
__CvT__record_line____(__CvT_miT,64,1793);return this -> replace ( __i1 - begin ( ) , __i2 - __i1 , 
__k1 . base ( ) , __k2 - __k1 ) ; 
} 

basic_string & 
replace ( __const_iterator __i1 , __const_iterator __i2 , 
const_iterator __k1 , const_iterator __k2 ) 
{ __CvT__record_line____(__CvT_miT,64,1800);

; 
; 
__CvT__record_line____(__CvT_miT,64,1804);return this -> replace ( __i1 - begin ( ) , __i2 - __i1 , 
__k1 . base ( ) , __k2 - __k1 ) ; 
} 
# 1828 "/usr/include/c++/5/bits/basic_string.h" 3 
private : 
template < class _Integer > 
basic_string & 
_M_replace_dispatch ( const_iterator __i1 , const_iterator __i2 , 
_Integer __n , _Integer __val , __true_type ) 
{ __CvT__record_line____(__CvT_miT,64,1833);return _M_replace_aux ( __i1 - begin ( ) , __i2 - __i1 , __n , __val ) ; } 

template < class _InputIterator > 
basic_string & 
_M_replace_dispatch ( const_iterator __i1 , const_iterator __i2 , 
_InputIterator __k1 , _InputIterator __k2 , 
__false_type ) ; 

basic_string & 
_M_replace_aux ( size_type __pos1 , size_type __n1 , size_type __n2 , 
_CharT __c ) ; 

basic_string & 
_M_replace ( size_type __pos , size_type __len1 , const _CharT * __s , 
const size_type __len2 ) ; 

basic_string & 
_M_append ( const _CharT * __s , size_type __n ) ; 

public : 
# 1866 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
copy ( _CharT * __s , size_type __n , size_type __pos = 0 ) const ; 
# 1876 "/usr/include/c++/5/bits/basic_string.h" 3 
void 
swap ( basic_string & __s ) ; 
# 1886 "/usr/include/c++/5/bits/basic_string.h" 3 
const _CharT * 
c_str ( ) const 
{ __CvT__record_line____(__CvT_miT,64,1888);return _M_data ( ) ; } 







const _CharT * 
data ( ) const 
{ __CvT__record_line____(__CvT_miT,64,1898);return _M_data ( ) ; } 




allocator_type 
get_allocator ( ) const 
{ __CvT__record_line____(__CvT_miT,64,1905);return _M_get_allocator ( ) ; } 
# 1919 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find ( const _CharT * __s , size_type __pos , size_type __n ) const ; 
# 1932 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find ( const basic_string & __str , size_type __pos = 0 ) const 

{ __CvT__record_line____(__CvT_miT,64,1935);return this -> find ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 1947 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find ( const _CharT * __s , size_type __pos = 0 ) const 
{ __CvT__record_line____(__CvT_miT,64,1949);
; 
__CvT__record_line____(__CvT_miT,64,1951);return this -> find ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 1964 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find ( _CharT __c , size_type __pos = 0 ) const ; 
# 1977 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
rfind ( const basic_string & __str , size_type __pos = npos ) const 

{ __CvT__record_line____(__CvT_miT,64,1980);return this -> rfind ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 1994 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
rfind ( const _CharT * __s , size_type __pos , size_type __n ) const ; 
# 2007 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
rfind ( const _CharT * __s , size_type __pos = npos ) const 
{ __CvT__record_line____(__CvT_miT,64,2009);
; 
__CvT__record_line____(__CvT_miT,64,2011);return this -> rfind ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2024 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
rfind ( _CharT __c , size_type __pos = npos ) const ; 
# 2038 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_first_of ( const basic_string & __str , size_type __pos = 0 ) const 

{ __CvT__record_line____(__CvT_miT,64,2041);return this -> find_first_of ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 2055 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_first_of ( const _CharT * __s , size_type __pos , size_type __n ) const ; 
# 2068 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_first_of ( const _CharT * __s , size_type __pos = 0 ) const 
{ __CvT__record_line____(__CvT_miT,64,2070);
; 
__CvT__record_line____(__CvT_miT,64,2072);return this -> find_first_of ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2087 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_first_of ( _CharT __c , size_type __pos = 0 ) const 
{ __CvT__record_line____(__CvT_miT,64,2089);return this -> find ( __c , __pos ) ; } 
# 2102 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_last_of ( const basic_string & __str , size_type __pos = npos ) const 

{ __CvT__record_line____(__CvT_miT,64,2105);return this -> find_last_of ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 2119 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_last_of ( const _CharT * __s , size_type __pos , size_type __n ) const ; 
# 2132 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_last_of ( const _CharT * __s , size_type __pos = npos ) const 
{ __CvT__record_line____(__CvT_miT,64,2134);
; 
__CvT__record_line____(__CvT_miT,64,2136);return this -> find_last_of ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2151 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_last_of ( _CharT __c , size_type __pos = npos ) const 
{ __CvT__record_line____(__CvT_miT,64,2153);return this -> rfind ( __c , __pos ) ; } 
# 2165 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_first_not_of ( const basic_string & __str , size_type __pos = 0 ) const 

{ __CvT__record_line____(__CvT_miT,64,2168);return this -> find_first_not_of ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 2182 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_first_not_of ( const _CharT * __s , size_type __pos , 
size_type __n ) const ; 
# 2196 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_first_not_of ( const _CharT * __s , size_type __pos = 0 ) const 
{ __CvT__record_line____(__CvT_miT,64,2198);
; 
__CvT__record_line____(__CvT_miT,64,2200);return this -> find_first_not_of ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2213 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_first_not_of ( _CharT __c , size_type __pos = 0 ) const 
; 
# 2228 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_last_not_of ( const basic_string & __str , size_type __pos = npos ) const 

{ __CvT__record_line____(__CvT_miT,64,2231);return this -> find_last_not_of ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 2245 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_last_not_of ( const _CharT * __s , size_type __pos , 
size_type __n ) const ; 
# 2259 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_last_not_of ( const _CharT * __s , size_type __pos = npos ) const 
{ __CvT__record_line____(__CvT_miT,64,2261);
; 
__CvT__record_line____(__CvT_miT,64,2263);return this -> find_last_not_of ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2276 "/usr/include/c++/5/bits/basic_string.h" 3 
size_type 
find_last_not_of ( _CharT __c , size_type __pos = npos ) const 
; 
# 2292 "/usr/include/c++/5/bits/basic_string.h" 3 
basic_string 
substr ( size_type __pos = 0 , size_type __n = npos ) const 
{ __CvT__record_line____(__CvT_miT,64,2294);return basic_string ( * this , 
_M_check ( __pos , "basic_string::substr" ) , __n ) ; } 
# 2311 "/usr/include/c++/5/bits/basic_string.h" 3 
int 
compare ( const basic_string & __str ) const 
{ __CvT__record_line____(__CvT_miT,64,2313);
__CvT__record_line____(__CvT_miT,64,2314);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,64,2315);const size_type __osize = __str . size ( ) ; 
__CvT__record_line____(__CvT_miT,64,2316);const size_type __len = std :: min ( __size , __osize ) ; 

__CvT__record_line____(__CvT_miT,64,2318);int __r = traits_type :: compare ( _M_data ( ) , __str . data ( ) , __len ) ; 
__CvT__record_line____(__CvT_miT,64,2319);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,64,2320);__r = _S_compare ( __size , __osize ) ; 
}__CvT__record_line____(__CvT_miT,64,2321);return __r ; 
} 
# 2343 "/usr/include/c++/5/bits/basic_string.h" 3 
int 
compare ( size_type __pos , size_type __n , const basic_string & __str ) const ; 
# 2369 "/usr/include/c++/5/bits/basic_string.h" 3 
int 
compare ( size_type __pos1 , size_type __n1 , const basic_string & __str , 
size_type __pos2 , size_type __n2 ) const ; 
# 2387 "/usr/include/c++/5/bits/basic_string.h" 3 
int 
compare ( const _CharT * __s ) const ; 
# 2411 "/usr/include/c++/5/bits/basic_string.h" 3 
int 
compare ( size_type __pos , size_type __n1 , const _CharT * __s ) const ; 
# 2438 "/usr/include/c++/5/bits/basic_string.h" 3 
int 
compare ( size_type __pos , size_type __n1 , const _CharT * __s , 
size_type __n2 ) const ; 
} ; 
} 
# 4781 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ 
basic_string < _CharT , _Traits , _Alloc > __str ( __lhs ) ; 
__str . append ( __rhs ) ; 
return __str ; 
} 







template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) ; 







template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( _CharT __lhs , const basic_string < _CharT , _Traits , _Alloc >& __rhs ) ; 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_string < _CharT , _Traits , _Alloc > 
operator + ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,4822);
__CvT__record_line____(__CvT_miT,64,4823);basic_string < _CharT , _Traits , _Alloc > __str ( __lhs ) ; 
__CvT__record_line____(__CvT_miT,64,4824);__str . append ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,64,4825);return __str ; 
} 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_string < _CharT , _Traits , _Alloc > 
operator + ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , _CharT __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,4837);
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __string_type :: size_type __size_type ; 
__CvT__record_line____(__CvT_miT,64,4840);__string_type __str ( __lhs ) ; 
__CvT__record_line____(__CvT_miT,64,4841);__str . append ( __size_type ( 1 ) , __rhs ) ; 
__CvT__record_line____(__CvT_miT,64,4842);return __str ; 
} 
# 4902 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator == ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,4906);return __lhs . compare ( __rhs ) == 0 ; } 

template < typename _CharT > 
inline 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , bool >:: __type 
operator == ( const basic_string < _CharT >& __lhs , 
const basic_string < _CharT >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,4913);return ( __lhs . size ( ) == __rhs . size ( ) 
&& ! std :: char_traits < _CharT >:: compare ( __lhs . data ( ) , __rhs . data ( ) , 
__lhs . size ( ) ) ) ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator == ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,4927);return __rhs . compare ( __lhs ) == 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator == ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,4939);return __lhs . compare ( __rhs ) == 0 ; } 
# 4948 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator != ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,4952);return ! ( __lhs == __rhs ) ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator != ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,4964);return ! ( __lhs == __rhs ) ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator != ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,4976);return ! ( __lhs == __rhs ) ; } 
# 4985 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator < ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,4989);return __lhs . compare ( __rhs ) < 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator < ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,5001);return __lhs . compare ( __rhs ) < 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator < ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,5013);return __rhs . compare ( __lhs ) > 0 ; } 
# 5022 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator > ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,5026);return __lhs . compare ( __rhs ) > 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator > ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,5038);return __lhs . compare ( __rhs ) > 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator > ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,5050);return __rhs . compare ( __lhs ) < 0 ; } 
# 5059 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator <= ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,5063);return __lhs . compare ( __rhs ) <= 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator <= ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,5075);return __lhs . compare ( __rhs ) <= 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator <= ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,5087);return __rhs . compare ( __lhs ) >= 0 ; } 
# 5096 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator >= ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,5100);return __lhs . compare ( __rhs ) >= 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator >= ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,5112);return __lhs . compare ( __rhs ) >= 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator >= ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,5124);return __rhs . compare ( __lhs ) <= 0 ; } 
# 5133 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline void 
swap ( basic_string < _CharT , _Traits , _Alloc >& __lhs , 
basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,64,5137);__lhs . swap ( __rhs ) ; } 
# 5152 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __is , 
basic_string < _CharT , _Traits , _Alloc >& __str ) ; 

template <> 
basic_istream < char >& 
operator >> ( basic_istream < char >& __is , basic_string < char >& __str ) ; 
# 5170 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __os , 
const basic_string < _CharT , _Traits , _Alloc >& __str ) 
{ __CvT__record_line____(__CvT_miT,64,5174);


__CvT__record_line____(__CvT_miT,64,5177);return __ostream_insert ( __os , __str . data ( ) , __str . size ( ) ) ; 
} 
# 5193 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
basic_istream < _CharT , _Traits >& 
getline ( basic_istream < _CharT , _Traits >& __is , 
basic_string < _CharT , _Traits , _Alloc >& __str , _CharT __delim ) ; 
# 5210 "/usr/include/c++/5/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_istream < _CharT , _Traits >& 
getline ( basic_istream < _CharT , _Traits >& __is , 
basic_string < _CharT , _Traits , _Alloc >& __str ) 
{ __CvT__record_line____(__CvT_miT,64,5214);return std :: getline ( __is , __str , __is . widen ( '\n' ) ) ; } 
# 5232 "/usr/include/c++/5/bits/basic_string.h" 3 
template <> 
basic_istream < char >& 
getline ( basic_istream < char >& __in , basic_string < char >& __str , 
char __delim ) ; 


template <> 
basic_istream < wchar_t >& 
getline ( basic_istream < wchar_t >& __in , basic_string < wchar_t >& __str , 
wchar_t __delim ) ; 



} 
# 53 "/usr/include/c++/5/string" 2 3 
# 1 "/usr/include/c++/5/bits/basic_string.tcc" 1 3 
# 42 "/usr/include/c++/5/bits/basic_string.tcc" 3 

# 43 "/usr/include/c++/5/bits/basic_string.tcc" 3 



namespace std 
{ 




template < typename _CharT , typename _Traits , typename _Alloc > 
const typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: npos ; 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
swap ( basic_string & __s ) 
{ __CvT__record_line____(__CvT_miT,78,60);
__CvT__record_line____(__CvT_miT,78,61);if ( this == & __s ) 
{__CvT__record_line____(__CvT_miT,78,62);return ; 




}__CvT__record_line____(__CvT_miT,78,67);std :: __alloc_swap < allocator_type >:: _S_do_it ( _M_get_allocator ( ) , 
__s . _M_get_allocator ( ) ) ; 

__CvT__record_line____(__CvT_miT,78,70);if ( _M_is_local ( ) ) 
{__CvT__record_line____(__CvT_miT,78,71);if ( __s . _M_is_local ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,73);if ( length ( ) && __s . length ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,75);_CharT __tmp_data [ _S_local_capacity + 1 ] ; 
__CvT__record_line____(__CvT_miT,78,76);traits_type :: copy ( __tmp_data , __s . _M_local_buf , 
_S_local_capacity + 1 ) ; 
__CvT__record_line____(__CvT_miT,78,78);traits_type :: copy ( __s . _M_local_buf , _M_local_buf , 
_S_local_capacity + 1 ) ; 
__CvT__record_line____(__CvT_miT,78,80);traits_type :: copy ( _M_local_buf , __tmp_data , 
_S_local_capacity + 1 ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,78,83);if ( __s . length ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,85);traits_type :: copy ( _M_local_buf , __s . _M_local_buf , 
_S_local_capacity + 1 ) ; 
__CvT__record_line____(__CvT_miT,78,87);_M_length ( __s . length ( ) ) ; 
__CvT__record_line____(__CvT_miT,78,88);__s . _M_set_length ( 0 ) ; 
__CvT__record_line____(__CvT_miT,78,89);return ; 
} 
}else {__CvT__record_line____(__CvT_miT,78,91);if ( length ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,93);traits_type :: copy ( __s . _M_local_buf , _M_local_buf , 
_S_local_capacity + 1 ) ; 
__CvT__record_line____(__CvT_miT,78,95);__s . _M_length ( length ( ) ) ; 
__CvT__record_line____(__CvT_miT,78,96);_M_set_length ( 0 ) ; 
__CvT__record_line____(__CvT_miT,78,97);return ; 
} 
}}}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,78,102);const size_type __tmp_capacity = __s . _M_allocated_capacity ; 
__CvT__record_line____(__CvT_miT,78,103);traits_type :: copy ( __s . _M_local_buf , _M_local_buf , 
_S_local_capacity + 1 ) ; 
__CvT__record_line____(__CvT_miT,78,105);_M_data ( __s . _M_data ( ) ) ; 
__CvT__record_line____(__CvT_miT,78,106);__s . _M_data ( __s . _M_local_buf ) ; 
__CvT__record_line____(__CvT_miT,78,107);_M_capacity ( __tmp_capacity ) ; 
} 
}}else {
{ 
__CvT__record_line____(__CvT_miT,78,111);const size_type __tmp_capacity = _M_allocated_capacity ; 
__CvT__record_line____(__CvT_miT,78,112);if ( __s . _M_is_local ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,114);traits_type :: copy ( _M_local_buf , __s . _M_local_buf , 
_S_local_capacity + 1 ) ; 
__CvT__record_line____(__CvT_miT,78,116);__s . _M_data ( _M_data ( ) ) ; 
__CvT__record_line____(__CvT_miT,78,117);_M_data ( _M_local_buf ) ; 
} 
}else {
{ 
__CvT__record_line____(__CvT_miT,78,121);pointer __tmp_ptr = _M_data ( ) ; 
__CvT__record_line____(__CvT_miT,78,122);_M_data ( __s . _M_data ( ) ) ; 
__CvT__record_line____(__CvT_miT,78,123);__s . _M_data ( __tmp_ptr ) ; 
__CvT__record_line____(__CvT_miT,78,124);_M_capacity ( __s . _M_allocated_capacity ) ; 
} 
}__CvT__record_line____(__CvT_miT,78,126);__s . _M_capacity ( __tmp_capacity ) ; 
} 

}__CvT__record_line____(__CvT_miT,78,129);const size_type __tmp_length = length ( ) ; 
__CvT__record_line____(__CvT_miT,78,130);_M_length ( __s . length ( ) ) ; 
__CvT__record_line____(__CvT_miT,78,131);__s . _M_length ( __tmp_length ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: pointer 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_create ( size_type & __capacity , size_type __old_capacity ) 
{ __CvT__record_line____(__CvT_miT,78,138);


__CvT__record_line____(__CvT_miT,78,141);if ( __capacity > max_size ( ) ) 
{__CvT__record_line____(__CvT_miT,78,142);std :: __throw_length_error ( ( "basic_string::_M_create" ) ) ; 




}__CvT__record_line____(__CvT_miT,78,147);if ( __capacity > __old_capacity && __capacity < 2 * __old_capacity ) 
{{ 
__CvT__record_line____(__CvT_miT,78,149);__capacity = 2 * __old_capacity ; 

__CvT__record_line____(__CvT_miT,78,151);if ( __capacity > max_size ( ) ) 
{__CvT__record_line____(__CvT_miT,78,152);__capacity = max_size ( ) ; 
}} 



}__CvT__record_line____(__CvT_miT,78,157);return _Alloc_traits :: allocate ( _M_get_allocator ( ) , __capacity + 1 ) ; 
} 





template < typename _CharT , typename _Traits , typename _Alloc > 
template < typename _InIterator > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_construct ( _InIterator __beg , _InIterator __end , 
std :: input_iterator_tag ) 
{ __CvT__record_line____(__CvT_miT,78,170);
__CvT__record_line____(__CvT_miT,78,171);size_type __len = 0 ; 
__CvT__record_line____(__CvT_miT,78,172);size_type __capacity = size_type ( _S_local_capacity ) ; 

__CvT__record_line____(__CvT_miT,78,174);while ( __beg != __end && __len < __capacity ) 
{{ 
__CvT__record_line____(__CvT_miT,78,176);_M_data ( ) [ __len ++ ] = * __beg ; 
__CvT__record_line____(__CvT_miT,78,177);++ __beg ; 
} 

}__CvT__record_line____(__CvT_miT,78,180);try 
{ 
__CvT__record_line____(__CvT_miT,78,182);while ( __beg != __end ) 
{{ 
__CvT__record_line____(__CvT_miT,78,184);if ( __len == __capacity ) 
{{ 

__CvT__record_line____(__CvT_miT,78,187);__capacity = __len + 1 ; 
__CvT__record_line____(__CvT_miT,78,188);pointer __another = _M_create ( __capacity , __len ) ; 
__CvT__record_line____(__CvT_miT,78,189);this -> _S_copy ( __another , _M_data ( ) , __len ) ; 
__CvT__record_line____(__CvT_miT,78,190);_M_dispose ( ) ; 
__CvT__record_line____(__CvT_miT,78,191);_M_data ( __another ) ; 
__CvT__record_line____(__CvT_miT,78,192);_M_capacity ( __capacity ) ; 
} 
}__CvT__record_line____(__CvT_miT,78,194);_M_data ( ) [ __len ++ ] = * __beg ; 
__CvT__record_line____(__CvT_miT,78,195);++ __beg ; 
} 
}} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,78,200);_M_dispose ( ) ; 
__CvT__record_line____(__CvT_miT,78,201);throw ; 
} 

__CvT__record_line____(__CvT_miT,78,204);_M_set_length ( __len ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
template < typename _InIterator > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_construct ( _InIterator __beg , _InIterator __end , 
std :: forward_iterator_tag ) 
{ __CvT__record_line____(__CvT_miT,78,213);

__CvT__record_line____(__CvT_miT,78,215);if ( __gnu_cxx :: __is_null_pointer ( __beg ) && __beg != __end ) 
{__CvT__record_line____(__CvT_miT,78,216);std :: __throw_logic_error ( ( "basic_string::" "_M_construct null not valid" ) 
) ; 

}__CvT__record_line____(__CvT_miT,78,219);size_type __dnew = static_cast < size_type > ( std :: distance ( __beg , __end ) ) ; 

__CvT__record_line____(__CvT_miT,78,221);if ( __dnew > size_type ( _S_local_capacity ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,223);_M_data ( _M_create ( __dnew , size_type ( 0 ) ) ) ; 
__CvT__record_line____(__CvT_miT,78,224);_M_capacity ( __dnew ) ; 
} 


}__CvT__record_line____(__CvT_miT,78,228);try 
{ __CvT__record_line____(__CvT_miT,78,229);this -> _S_copy_chars ( _M_data ( ) , __beg , __end ) ; } 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,78,232);_M_dispose ( ) ; 
__CvT__record_line____(__CvT_miT,78,233);throw ; 
} 

__CvT__record_line____(__CvT_miT,78,236);_M_set_length ( __dnew ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_construct ( size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,78,243);
__CvT__record_line____(__CvT_miT,78,244);if ( __n > size_type ( _S_local_capacity ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,246);_M_data ( _M_create ( __n , size_type ( 0 ) ) ) ; 
__CvT__record_line____(__CvT_miT,78,247);_M_capacity ( __n ) ; 
} 

}__CvT__record_line____(__CvT_miT,78,250);if ( __n ) 
{__CvT__record_line____(__CvT_miT,78,251);this -> _S_assign ( _M_data ( ) , __n , __c ) ; 

}__CvT__record_line____(__CvT_miT,78,253);_M_set_length ( __n ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_assign ( const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,78,260);
__CvT__record_line____(__CvT_miT,78,261);if ( this != & __str ) 
{{ 
__CvT__record_line____(__CvT_miT,78,263);const size_type __rsize = __str . length ( ) ; 
__CvT__record_line____(__CvT_miT,78,264);const size_type __capacity = capacity ( ) ; 

__CvT__record_line____(__CvT_miT,78,266);if ( __rsize > __capacity ) 
{{ 
__CvT__record_line____(__CvT_miT,78,268);size_type __new_capacity = __rsize ; 
__CvT__record_line____(__CvT_miT,78,269);pointer __tmp = _M_create ( __new_capacity , __capacity ) ; 
__CvT__record_line____(__CvT_miT,78,270);_M_dispose ( ) ; 
__CvT__record_line____(__CvT_miT,78,271);_M_data ( __tmp ) ; 
__CvT__record_line____(__CvT_miT,78,272);_M_capacity ( __new_capacity ) ; 
} 

}__CvT__record_line____(__CvT_miT,78,275);if ( __rsize ) 
{__CvT__record_line____(__CvT_miT,78,276);this -> _S_copy ( _M_data ( ) , __str . _M_data ( ) , __rsize ) ; 

}__CvT__record_line____(__CvT_miT,78,278);_M_set_length ( __rsize ) ; 
} 
}} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
reserve ( size_type __res ) 
{ __CvT__record_line____(__CvT_miT,78,286);

__CvT__record_line____(__CvT_miT,78,288);if ( __res < length ( ) ) 
{__CvT__record_line____(__CvT_miT,78,289);__res = length ( ) ; 

}__CvT__record_line____(__CvT_miT,78,291);const size_type __capacity = capacity ( ) ; 
__CvT__record_line____(__CvT_miT,78,292);if ( __res != __capacity ) 
{{ 
__CvT__record_line____(__CvT_miT,78,294);if ( __res > __capacity 
|| __res > size_type ( _S_local_capacity ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,297);pointer __tmp = _M_create ( __res , __capacity ) ; 
__CvT__record_line____(__CvT_miT,78,298);this -> _S_copy ( __tmp , _M_data ( ) , length ( ) + 1 ) ; 
__CvT__record_line____(__CvT_miT,78,299);_M_dispose ( ) ; 
__CvT__record_line____(__CvT_miT,78,300);_M_data ( __tmp ) ; 
__CvT__record_line____(__CvT_miT,78,301);_M_capacity ( __res ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,78,303);if ( ! _M_is_local ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,305);this -> _S_copy ( _M_local_data ( ) , _M_data ( ) , length ( ) + 1 ) ; 
__CvT__record_line____(__CvT_miT,78,306);_M_destroy ( __capacity ) ; 
__CvT__record_line____(__CvT_miT,78,307);_M_data ( _M_local_data ( ) ) ; 
} 
}}} 
}} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_mutate ( size_type __pos , size_type __len1 , const _CharT * __s , 
size_type __len2 ) 
{ __CvT__record_line____(__CvT_miT,78,317);
__CvT__record_line____(__CvT_miT,78,318);const size_type __how_much = length ( ) - __pos - __len1 ; 

__CvT__record_line____(__CvT_miT,78,320);size_type __new_capacity = length ( ) + __len2 - __len1 ; 
__CvT__record_line____(__CvT_miT,78,321);pointer __r = _M_create ( __new_capacity , capacity ( ) ) ; 

__CvT__record_line____(__CvT_miT,78,323);if ( __pos ) 
{__CvT__record_line____(__CvT_miT,78,324);this -> _S_copy ( __r , _M_data ( ) , __pos ) ; 
}__CvT__record_line____(__CvT_miT,78,325);if ( __s && __len2 ) 
{__CvT__record_line____(__CvT_miT,78,326);this -> _S_copy ( __r + __pos , __s , __len2 ) ; 
}__CvT__record_line____(__CvT_miT,78,327);if ( __how_much ) 
{__CvT__record_line____(__CvT_miT,78,328);this -> _S_copy ( __r + __pos + __len2 , 
_M_data ( ) + __pos + __len1 , __how_much ) ; 

}__CvT__record_line____(__CvT_miT,78,331);_M_dispose ( ) ; 
__CvT__record_line____(__CvT_miT,78,332);_M_data ( __r ) ; 
__CvT__record_line____(__CvT_miT,78,333);_M_capacity ( __new_capacity ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_erase ( size_type __pos , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,78,340);
__CvT__record_line____(__CvT_miT,78,341);const size_type __how_much = length ( ) - __pos - __n ; 

__CvT__record_line____(__CvT_miT,78,343);if ( __how_much && __n ) 
{__CvT__record_line____(__CvT_miT,78,344);this -> _S_move ( _M_data ( ) + __pos , _M_data ( ) + __pos + __n , __how_much ) ; 

}__CvT__record_line____(__CvT_miT,78,346);_M_set_length ( length ( ) - __n ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
resize ( size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,78,353);
__CvT__record_line____(__CvT_miT,78,354);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,78,355);if ( __size < __n ) 
{__CvT__record_line____(__CvT_miT,78,356);this -> append ( __n - __size , __c ) ; 
}else {__CvT__record_line____(__CvT_miT,78,357);if ( __n < __size ) 
{__CvT__record_line____(__CvT_miT,78,358);this -> _M_erase ( __n , __size - __n ) ; 
}}} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_append ( const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,78,365);
__CvT__record_line____(__CvT_miT,78,366);const size_type __len = __n + this -> size ( ) ; 

__CvT__record_line____(__CvT_miT,78,368);if ( __len <= this -> capacity ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,370);if ( __n ) 
{__CvT__record_line____(__CvT_miT,78,371);this -> _S_copy ( this -> _M_data ( ) + this -> size ( ) , __s , __n ) ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,78,374);this -> _M_mutate ( this -> size ( ) , size_type ( 0 ) , __s , __n ) ; 

}__CvT__record_line____(__CvT_miT,78,376);this -> _M_set_length ( __len ) ; 
__CvT__record_line____(__CvT_miT,78,377);return * this ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
template < typename _InputIterator > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_replace_dispatch ( const_iterator __i1 , const_iterator __i2 , 
_InputIterator __k1 , _InputIterator __k2 , 
std :: __false_type ) 
{ __CvT__record_line____(__CvT_miT,78,387);
__CvT__record_line____(__CvT_miT,78,388);const basic_string __s ( __k1 , __k2 ) ; 
__CvT__record_line____(__CvT_miT,78,389);const size_type __n1 = __i2 - __i1 ; 
__CvT__record_line____(__CvT_miT,78,390);return _M_replace ( __i1 - begin ( ) , __n1 , __s . _M_data ( ) , 
__s . size ( ) ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_replace_aux ( size_type __pos1 , size_type __n1 , size_type __n2 , 
_CharT __c ) 
{ __CvT__record_line____(__CvT_miT,78,399);
__CvT__record_line____(__CvT_miT,78,400);_M_check_length ( __n1 , __n2 , "basic_string::_M_replace_aux" ) ; 

__CvT__record_line____(__CvT_miT,78,402);const size_type __old_size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,78,403);const size_type __new_size = __old_size + __n2 - __n1 ; 

__CvT__record_line____(__CvT_miT,78,405);if ( __new_size <= this -> capacity ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,407);_CharT * __p = this -> _M_data ( ) + __pos1 ; 

__CvT__record_line____(__CvT_miT,78,409);const size_type __how_much = __old_size - __pos1 - __n1 ; 
__CvT__record_line____(__CvT_miT,78,410);if ( __how_much && __n1 != __n2 ) 
{__CvT__record_line____(__CvT_miT,78,411);this -> _S_move ( __p + __n2 , __p + __n1 , __how_much ) ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,78,414);this -> _M_mutate ( __pos1 , __n1 , 0 , __n2 ) ; 

}__CvT__record_line____(__CvT_miT,78,416);if ( __n2 ) 
{__CvT__record_line____(__CvT_miT,78,417);this -> _S_assign ( this -> _M_data ( ) + __pos1 , __n2 , __c ) ; 

}__CvT__record_line____(__CvT_miT,78,419);this -> _M_set_length ( __new_size ) ; 
__CvT__record_line____(__CvT_miT,78,420);return * this ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_replace ( size_type __pos , size_type __len1 , const _CharT * __s , 
const size_type __len2 ) 
{ __CvT__record_line____(__CvT_miT,78,428);
__CvT__record_line____(__CvT_miT,78,429);_M_check_length ( __len1 , __len2 , "basic_string::_M_replace" ) ; 

__CvT__record_line____(__CvT_miT,78,431);const size_type __old_size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,78,432);const size_type __new_size = __old_size + __len2 - __len1 ; 

__CvT__record_line____(__CvT_miT,78,434);if ( __new_size <= this -> capacity ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,436);_CharT * __p = this -> _M_data ( ) + __pos ; 

__CvT__record_line____(__CvT_miT,78,438);const size_type __how_much = __old_size - __pos - __len1 ; 
__CvT__record_line____(__CvT_miT,78,439);if ( _M_disjunct ( __s ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,441);if ( __how_much && __len1 != __len2 ) 
{__CvT__record_line____(__CvT_miT,78,442);this -> _S_move ( __p + __len2 , __p + __len1 , __how_much ) ; 
}__CvT__record_line____(__CvT_miT,78,443);if ( __len2 ) 
{__CvT__record_line____(__CvT_miT,78,444);this -> _S_copy ( __p , __s , __len2 ) ; 
}} 
}else {
{ 

__CvT__record_line____(__CvT_miT,78,449);if ( __len2 && __len2 <= __len1 ) 
{__CvT__record_line____(__CvT_miT,78,450);this -> _S_move ( __p , __s , __len2 ) ; 
}__CvT__record_line____(__CvT_miT,78,451);if ( __how_much && __len1 != __len2 ) 
{__CvT__record_line____(__CvT_miT,78,452);this -> _S_move ( __p + __len2 , __p + __len1 , __how_much ) ; 
}__CvT__record_line____(__CvT_miT,78,453);if ( __len2 > __len1 ) 
{{ 
__CvT__record_line____(__CvT_miT,78,455);if ( __s + __len2 <= __p + __len1 ) 
{__CvT__record_line____(__CvT_miT,78,456);this -> _S_move ( __p , __s , __len2 ) ; 
}else {__CvT__record_line____(__CvT_miT,78,457);if ( __s >= __p + __len1 ) 
{__CvT__record_line____(__CvT_miT,78,458);this -> _S_copy ( __p , __s + __len2 - __len1 , __len2 ) ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,78,461);const size_type __nleft = ( __p + __len1 ) - __s ; 
__CvT__record_line____(__CvT_miT,78,462);this -> _S_move ( __p , __s , __nleft ) ; 
__CvT__record_line____(__CvT_miT,78,463);this -> _S_copy ( __p + __nleft , __p + __len2 , 
__len2 - __nleft ) ; 
} 
}}} 
}} 
}} 
}else {
__CvT__record_line____(__CvT_miT,78,470);this -> _M_mutate ( __pos , __len1 , __s , __len2 ) ; 

}__CvT__record_line____(__CvT_miT,78,472);this -> _M_set_length ( __new_size ) ; 
__CvT__record_line____(__CvT_miT,78,473);return * this ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
copy ( _CharT * __s , size_type __n , size_type __pos ) const 
{ __CvT__record_line____(__CvT_miT,78,480);
__CvT__record_line____(__CvT_miT,78,481);_M_check ( __pos , "basic_string::copy" ) ; 
__CvT__record_line____(__CvT_miT,78,482);__n = _M_limit ( __pos , __n ) ; 
; 
__CvT__record_line____(__CvT_miT,78,484);if ( __n ) 
{__CvT__record_line____(__CvT_miT,78,485);_S_copy ( __s , _M_data ( ) + __pos , __n ) ; 

}__CvT__record_line____(__CvT_miT,78,487);return __n ; 
} 
# 1149 "/usr/include/c++/5/bits/basic_string.tcc" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,78,1153);
; 
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __string_type :: size_type __size_type ; 
__CvT__record_line____(__CvT_miT,78,1157);const __size_type __len = _Traits :: length ( __lhs ) ; 
__CvT__record_line____(__CvT_miT,78,1158);__string_type __str ; 
__CvT__record_line____(__CvT_miT,78,1159);__str . reserve ( __len + __rhs . size ( ) ) ; 
__CvT__record_line____(__CvT_miT,78,1160);__str . append ( __lhs , __len ) ; 
__CvT__record_line____(__CvT_miT,78,1161);__str . append ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,78,1162);return __str ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( _CharT __lhs , const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,78,1168);
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __string_type :: size_type __size_type ; 
__CvT__record_line____(__CvT_miT,78,1171);__string_type __str ; 
__CvT__record_line____(__CvT_miT,78,1172);const __size_type __len = __rhs . size ( ) ; 
__CvT__record_line____(__CvT_miT,78,1173);__str . reserve ( __len + 1 ) ; 
__CvT__record_line____(__CvT_miT,78,1174);__str . append ( __size_type ( 1 ) , __lhs ) ; 
__CvT__record_line____(__CvT_miT,78,1175);__str . append ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,78,1176);return __str ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find ( const _CharT * __s , size_type __pos , size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,78,1183);
; 
__CvT__record_line____(__CvT_miT,78,1185);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,78,1186);const _CharT * __data = _M_data ( ) ; 

__CvT__record_line____(__CvT_miT,78,1188);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,78,1189);return __pos <= __size ? __pos : npos ; 

}__CvT__record_line____(__CvT_miT,78,1191);if ( __n <= __size ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1193);for ( ; __pos <= __size - __n ; ++ __pos ) 
{__CvT__record_line____(__CvT_miT,78,1194);if ( traits_type :: eq ( __data [ __pos ] , __s [ 0 ] ) 
&& traits_type :: compare ( __data + __pos + 1 , 
__s + 1 , __n - 1 ) == 0 ) 
{__CvT__record_line____(__CvT_miT,78,1197);return __pos ; 
}}} 
}__CvT__record_line____(__CvT_miT,78,1199);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find ( _CharT __c , size_type __pos ) const 
{ __CvT__record_line____(__CvT_miT,78,1206);
__CvT__record_line____(__CvT_miT,78,1207);size_type __ret = npos ; 
__CvT__record_line____(__CvT_miT,78,1208);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,78,1209);if ( __pos < __size ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1211);const _CharT * __data = _M_data ( ) ; 
__CvT__record_line____(__CvT_miT,78,1212);const size_type __n = __size - __pos ; 
__CvT__record_line____(__CvT_miT,78,1213);const _CharT * __p = traits_type :: find ( __data + __pos , __n , __c ) ; 
__CvT__record_line____(__CvT_miT,78,1214);if ( __p ) 
{__CvT__record_line____(__CvT_miT,78,1215);__ret = __p - __data ; 
}} 
}__CvT__record_line____(__CvT_miT,78,1217);return __ret ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
rfind ( const _CharT * __s , size_type __pos , size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,78,1224);
; 
__CvT__record_line____(__CvT_miT,78,1226);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,78,1227);if ( __n <= __size ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1229);__pos = std :: min ( size_type ( __size - __n ) , __pos ) ; 
__CvT__record_line____(__CvT_miT,78,1230);const _CharT * __data = _M_data ( ) ; 
__CvT__record_line____(__CvT_miT,78,1231);do {
{ 
__CvT__record_line____(__CvT_miT,78,1233);if ( traits_type :: compare ( __data + __pos , __s , __n ) == 0 ) 
{__CvT__record_line____(__CvT_miT,78,1234);return __pos ; 
}} 
}while ( __pos -- > 0 ) ;
} 
}__CvT__record_line____(__CvT_miT,78,1238);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
rfind ( _CharT __c , size_type __pos ) const 
{ __CvT__record_line____(__CvT_miT,78,1245);
__CvT__record_line____(__CvT_miT,78,1246);size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,78,1247);if ( __size ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1249);if ( -- __size > __pos ) 
{__CvT__record_line____(__CvT_miT,78,1250);__size = __pos ; 
}__CvT__record_line____(__CvT_miT,78,1251);for ( ++ __size ; __size -- > 0 ; ) 
{__CvT__record_line____(__CvT_miT,78,1252);if ( traits_type :: eq ( _M_data ( ) [ __size ] , __c ) ) 
{__CvT__record_line____(__CvT_miT,78,1253);return __size ; 
}}} 
}__CvT__record_line____(__CvT_miT,78,1255);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_first_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,78,1262);
; 
__CvT__record_line____(__CvT_miT,78,1264);for ( ; __n && __pos < this -> size ( ) ; ++ __pos ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1266);const _CharT * __p = traits_type :: find ( __s , __n , _M_data ( ) [ __pos ] ) ; 
__CvT__record_line____(__CvT_miT,78,1267);if ( __p ) 
{__CvT__record_line____(__CvT_miT,78,1268);return __pos ; 
}} 
}__CvT__record_line____(__CvT_miT,78,1270);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_last_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,78,1277);
; 
__CvT__record_line____(__CvT_miT,78,1279);size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,78,1280);if ( __size && __n ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1282);if ( -- __size > __pos ) 
{__CvT__record_line____(__CvT_miT,78,1283);__size = __pos ; 
}__CvT__record_line____(__CvT_miT,78,1284);do {
{ 
__CvT__record_line____(__CvT_miT,78,1286);if ( traits_type :: find ( __s , __n , _M_data ( ) [ __size ] ) ) 
{__CvT__record_line____(__CvT_miT,78,1287);return __size ; 
}} 
}while ( __size -- != 0 ) ;
} 
}__CvT__record_line____(__CvT_miT,78,1291);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_first_not_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,78,1298);
; 
__CvT__record_line____(__CvT_miT,78,1300);for ( ; __pos < this -> size ( ) ; ++ __pos ) 
{__CvT__record_line____(__CvT_miT,78,1301);if ( ! traits_type :: find ( __s , __n , _M_data ( ) [ __pos ] ) ) 
{__CvT__record_line____(__CvT_miT,78,1302);return __pos ; 
}}__CvT__record_line____(__CvT_miT,78,1303);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_first_not_of ( _CharT __c , size_type __pos ) const 
{ __CvT__record_line____(__CvT_miT,78,1310);
__CvT__record_line____(__CvT_miT,78,1311);for ( ; __pos < this -> size ( ) ; ++ __pos ) 
{__CvT__record_line____(__CvT_miT,78,1312);if ( ! traits_type :: eq ( _M_data ( ) [ __pos ] , __c ) ) 
{__CvT__record_line____(__CvT_miT,78,1313);return __pos ; 
}}__CvT__record_line____(__CvT_miT,78,1314);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_last_not_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,78,1321);
; 
__CvT__record_line____(__CvT_miT,78,1323);size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,78,1324);if ( __size ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1326);if ( -- __size > __pos ) 
{__CvT__record_line____(__CvT_miT,78,1327);__size = __pos ; 
}__CvT__record_line____(__CvT_miT,78,1328);do {
{ 
__CvT__record_line____(__CvT_miT,78,1330);if ( ! traits_type :: find ( __s , __n , _M_data ( ) [ __size ] ) ) 
{__CvT__record_line____(__CvT_miT,78,1331);return __size ; 
}} 
}while ( __size -- ) ;
} 
}__CvT__record_line____(__CvT_miT,78,1335);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_last_not_of ( _CharT __c , size_type __pos ) const 
{ __CvT__record_line____(__CvT_miT,78,1342);
__CvT__record_line____(__CvT_miT,78,1343);size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,78,1344);if ( __size ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1346);if ( -- __size > __pos ) 
{__CvT__record_line____(__CvT_miT,78,1347);__size = __pos ; 
}__CvT__record_line____(__CvT_miT,78,1348);do {
{ 
__CvT__record_line____(__CvT_miT,78,1350);if ( ! traits_type :: eq ( _M_data ( ) [ __size ] , __c ) ) 
{__CvT__record_line____(__CvT_miT,78,1351);return __size ; 
}} 
}while ( __size -- ) ;
} 
}__CvT__record_line____(__CvT_miT,78,1355);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( size_type __pos , size_type __n , const basic_string & __str ) const 
{ __CvT__record_line____(__CvT_miT,78,1362);
__CvT__record_line____(__CvT_miT,78,1363);_M_check ( __pos , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,78,1364);__n = _M_limit ( __pos , __n ) ; 
__CvT__record_line____(__CvT_miT,78,1365);const size_type __osize = __str . size ( ) ; 
__CvT__record_line____(__CvT_miT,78,1366);const size_type __len = std :: min ( __n , __osize ) ; 
__CvT__record_line____(__CvT_miT,78,1367);int __r = traits_type :: compare ( _M_data ( ) + __pos , __str . data ( ) , __len ) ; 
__CvT__record_line____(__CvT_miT,78,1368);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,78,1369);__r = _S_compare ( __n , __osize ) ; 
}__CvT__record_line____(__CvT_miT,78,1370);return __r ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( size_type __pos1 , size_type __n1 , const basic_string & __str , 
size_type __pos2 , size_type __n2 ) const 
{ __CvT__record_line____(__CvT_miT,78,1378);
__CvT__record_line____(__CvT_miT,78,1379);_M_check ( __pos1 , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,78,1380);__str . _M_check ( __pos2 , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,78,1381);__n1 = _M_limit ( __pos1 , __n1 ) ; 
__CvT__record_line____(__CvT_miT,78,1382);__n2 = __str . _M_limit ( __pos2 , __n2 ) ; 
__CvT__record_line____(__CvT_miT,78,1383);const size_type __len = std :: min ( __n1 , __n2 ) ; 
__CvT__record_line____(__CvT_miT,78,1384);int __r = traits_type :: compare ( _M_data ( ) + __pos1 , 
__str . data ( ) + __pos2 , __len ) ; 
__CvT__record_line____(__CvT_miT,78,1386);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,78,1387);__r = _S_compare ( __n1 , __n2 ) ; 
}__CvT__record_line____(__CvT_miT,78,1388);return __r ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( const _CharT * __s ) const 
{ __CvT__record_line____(__CvT_miT,78,1395);
; 
__CvT__record_line____(__CvT_miT,78,1397);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,78,1398);const size_type __osize = traits_type :: length ( __s ) ; 
__CvT__record_line____(__CvT_miT,78,1399);const size_type __len = std :: min ( __size , __osize ) ; 
__CvT__record_line____(__CvT_miT,78,1400);int __r = traits_type :: compare ( _M_data ( ) , __s , __len ) ; 
__CvT__record_line____(__CvT_miT,78,1401);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,78,1402);__r = _S_compare ( __size , __osize ) ; 
}__CvT__record_line____(__CvT_miT,78,1403);return __r ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( size_type __pos , size_type __n1 , const _CharT * __s ) const 
{ __CvT__record_line____(__CvT_miT,78,1410);
; 
__CvT__record_line____(__CvT_miT,78,1412);_M_check ( __pos , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,78,1413);__n1 = _M_limit ( __pos , __n1 ) ; 
__CvT__record_line____(__CvT_miT,78,1414);const size_type __osize = traits_type :: length ( __s ) ; 
__CvT__record_line____(__CvT_miT,78,1415);const size_type __len = std :: min ( __n1 , __osize ) ; 
__CvT__record_line____(__CvT_miT,78,1416);int __r = traits_type :: compare ( _M_data ( ) + __pos , __s , __len ) ; 
__CvT__record_line____(__CvT_miT,78,1417);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,78,1418);__r = _S_compare ( __n1 , __osize ) ; 
}__CvT__record_line____(__CvT_miT,78,1419);return __r ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( size_type __pos , size_type __n1 , const _CharT * __s , 
size_type __n2 ) const 
{ __CvT__record_line____(__CvT_miT,78,1427);
; 
__CvT__record_line____(__CvT_miT,78,1429);_M_check ( __pos , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,78,1430);__n1 = _M_limit ( __pos , __n1 ) ; 
__CvT__record_line____(__CvT_miT,78,1431);const size_type __len = std :: min ( __n1 , __n2 ) ; 
__CvT__record_line____(__CvT_miT,78,1432);int __r = traits_type :: compare ( _M_data ( ) + __pos , __s , __len ) ; 
__CvT__record_line____(__CvT_miT,78,1433);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,78,1434);__r = _S_compare ( __n1 , __n2 ) ; 
}__CvT__record_line____(__CvT_miT,78,1435);return __r ; 
} 


template < typename _CharT , typename _Traits , typename _Alloc > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , 
basic_string < _CharT , _Traits , _Alloc >& __str ) 
{ __CvT__record_line____(__CvT_miT,78,1443);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __istream_type :: ios_base __ios_base ; 
typedef typename __istream_type :: int_type __int_type ; 
typedef typename __string_type :: size_type __size_type ; 
typedef ctype < _CharT > __ctype_type ; 
typedef typename __ctype_type :: ctype_base __ctype_base ; 

__CvT__record_line____(__CvT_miT,78,1452);__size_type __extracted = 0 ; 
__CvT__record_line____(__CvT_miT,78,1453);typename __ios_base :: iostate __err = __ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,78,1454);typename __istream_type :: sentry __cerb ( __in , false ) ; 
__CvT__record_line____(__CvT_miT,78,1455);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1457);try 
{ 

__CvT__record_line____(__CvT_miT,78,1460);__str . erase ( ) ; 
__CvT__record_line____(__CvT_miT,78,1461);_CharT __buf [ 128 ] ; 
__CvT__record_line____(__CvT_miT,78,1462);__size_type __len = 0 ; 
__CvT__record_line____(__CvT_miT,78,1463);const streamsize __w = __in . width ( ) ; 
__CvT__record_line____(__CvT_miT,78,1464);const __size_type __n = __w > 0 ? static_cast < __size_type > ( __w ) 
: __str . max_size ( ) ; 
__CvT__record_line____(__CvT_miT,78,1466);const __ctype_type & __ct = use_facet < __ctype_type > ( __in . getloc ( ) ) ; 
__CvT__record_line____(__CvT_miT,78,1467);const __int_type __eof = _Traits :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,78,1468);__int_type __c = __in . rdbuf ( ) -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,78,1470);while ( __extracted < __n 
&& ! _Traits :: eq_int_type ( __c , __eof ) 
&& ! __ct . is ( __ctype_base :: space , 
_Traits :: to_char_type ( __c ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1475);if ( __len == sizeof ( __buf ) / sizeof ( _CharT ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1477);__str . append ( __buf , sizeof ( __buf ) / sizeof ( _CharT ) ) ; 
__CvT__record_line____(__CvT_miT,78,1478);__len = 0 ; 
} 
}__CvT__record_line____(__CvT_miT,78,1480);__buf [ __len ++ ] = _Traits :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,78,1481);++ __extracted ; 
__CvT__record_line____(__CvT_miT,78,1482);__c = __in . rdbuf ( ) -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,78,1484);__str . append ( __buf , __len ) ; 

__CvT__record_line____(__CvT_miT,78,1486);if ( _Traits :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,78,1487);__err |= __ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,78,1488);__in . width ( 0 ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,78,1492);__in . _M_setstate ( __ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,78,1493);throw ; 
} 
catch ( ... ) 
{ 



__CvT__record_line____(__CvT_miT,78,1500);__in . _M_setstate ( __ios_base :: badbit ) ; 
} 
} 

}__CvT__record_line____(__CvT_miT,78,1504);if ( ! __extracted ) 
{__CvT__record_line____(__CvT_miT,78,1505);__err |= __ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,78,1506);if ( __err ) 
{__CvT__record_line____(__CvT_miT,78,1507);__in . setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,78,1508);return __in ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_istream < _CharT , _Traits >& 
getline ( basic_istream < _CharT , _Traits >& __in , 
basic_string < _CharT , _Traits , _Alloc >& __str , _CharT __delim ) 
{ __CvT__record_line____(__CvT_miT,78,1515);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __istream_type :: ios_base __ios_base ; 
typedef typename __istream_type :: int_type __int_type ; 
typedef typename __string_type :: size_type __size_type ; 

__CvT__record_line____(__CvT_miT,78,1522);__size_type __extracted = 0 ; 
__CvT__record_line____(__CvT_miT,78,1523);const __size_type __n = __str . max_size ( ) ; 
__CvT__record_line____(__CvT_miT,78,1524);typename __ios_base :: iostate __err = __ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,78,1525);typename __istream_type :: sentry __cerb ( __in , true ) ; 
__CvT__record_line____(__CvT_miT,78,1526);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1528);try 
{ 
__CvT__record_line____(__CvT_miT,78,1530);__str . erase ( ) ; 
__CvT__record_line____(__CvT_miT,78,1531);const __int_type __idelim = _Traits :: to_int_type ( __delim ) ; 
__CvT__record_line____(__CvT_miT,78,1532);const __int_type __eof = _Traits :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,78,1533);__int_type __c = __in . rdbuf ( ) -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,78,1535);while ( __extracted < __n 
&& ! _Traits :: eq_int_type ( __c , __eof ) 
&& ! _Traits :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1539);__str += _Traits :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,78,1540);++ __extracted ; 
__CvT__record_line____(__CvT_miT,78,1541);__c = __in . rdbuf ( ) -> snextc ( ) ; 
} 

}__CvT__record_line____(__CvT_miT,78,1544);if ( _Traits :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,78,1545);__err |= __ios_base :: eofbit ; 
}else {__CvT__record_line____(__CvT_miT,78,1546);if ( _Traits :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,78,1548);++ __extracted ; 
__CvT__record_line____(__CvT_miT,78,1549);__in . rdbuf ( ) -> sbumpc ( ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,78,1552);__err |= __ios_base :: failbit ; 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,78,1556);__in . _M_setstate ( __ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,78,1557);throw ; 
} 
catch ( ... ) 
{ 



__CvT__record_line____(__CvT_miT,78,1564);__in . _M_setstate ( __ios_base :: badbit ) ; 
} 
} 
}__CvT__record_line____(__CvT_miT,78,1567);if ( ! __extracted ) 
{__CvT__record_line____(__CvT_miT,78,1568);__err |= __ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,78,1569);if ( __err ) 
{__CvT__record_line____(__CvT_miT,78,1570);__in . setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,78,1571);return __in ; 
} 




extern template class basic_string < char > ; 
extern template 
basic_istream < char >& 
operator >> ( basic_istream < char >& , string & ) ; 
extern template 
basic_ostream < char >& 
operator << ( basic_ostream < char >& , const string & ) ; 
extern template 
basic_istream < char >& 
getline ( basic_istream < char >& , string & , char ) ; 
extern template 
basic_istream < char >& 
getline ( basic_istream < char >& , string & ) ; 


extern template class basic_string < wchar_t > ; 
extern template 
basic_istream < wchar_t >& 
operator >> ( basic_istream < wchar_t >& , wstring & ) ; 
extern template 
basic_ostream < wchar_t >& 
operator << ( basic_ostream < wchar_t >& , const wstring & ) ; 
extern template 
basic_istream < wchar_t >& 
getline ( basic_istream < wchar_t >& , wstring & , wchar_t ) ; 
extern template 
basic_istream < wchar_t >& 
getline ( basic_istream < wchar_t >& , wstring & ) ; 




} 
# 54 "/usr/include/c++/5/string" 2 3 
# 2 "hard.c" 2 
# 1 "/usr/include/c++/5/fstream" 1 3 
# 36 "/usr/include/c++/5/fstream" 3 

# 37 "/usr/include/c++/5/fstream" 3 

# 1 "/usr/include/c++/5/istream" 1 3 
# 36 "/usr/include/c++/5/istream" 3 

# 37 "/usr/include/c++/5/istream" 3 

# 1 "/usr/include/c++/5/ios" 1 3 
# 36 "/usr/include/c++/5/ios" 3 

# 37 "/usr/include/c++/5/ios" 3 





# 1 "/usr/include/c++/5/bits/ios_base.h" 1 3 
# 37 "/usr/include/c++/5/bits/ios_base.h" 3 

# 38 "/usr/include/c++/5/bits/ios_base.h" 3 



# 1 "/usr/include/c++/5/bits/locale_classes.h" 1 3 
# 37 "/usr/include/c++/5/bits/locale_classes.h" 3 

# 38 "/usr/include/c++/5/bits/locale_classes.h" 3 





namespace std 
{ 

# 62 "/usr/include/c++/5/bits/locale_classes.h" 3 
class locale 
{ 
public : 


typedef int category ; 


class facet ; 
class id ; 
class _Impl ; 

friend class facet ; 
friend class _Impl ; 

template < typename _Facet > 
friend bool 
has_facet ( const locale & ) throw ( ) ; 

template < typename _Facet > 
friend const _Facet & 
use_facet ( const locale & ) ; 

template < typename _Cache > 
friend struct __use_cache ; 
# 98 "/usr/include/c++/5/bits/locale_classes.h" 3 
static const category none = 0 ; 
static const category ctype = 1L << 0 ; 
static const category numeric = 1L << 1 ; 
static const category collate = 1L << 2 ; 
static const category time = 1L << 3 ; 
static const category monetary = 1L << 4 ; 
static const category messages = 1L << 5 ; 
static const category all = ( ctype | numeric | collate | 
time | monetary | messages ) ; 
# 117 "/usr/include/c++/5/bits/locale_classes.h" 3 
locale ( ) throw ( ) ; 
# 126 "/usr/include/c++/5/bits/locale_classes.h" 3 
locale ( const locale & __other ) throw ( ) ; 
# 136 "/usr/include/c++/5/bits/locale_classes.h" 3 
explicit 
locale ( const char * __s ) ; 
# 151 "/usr/include/c++/5/bits/locale_classes.h" 3 
locale ( const locale & __base , const char * __s , category __cat ) ; 
# 192 "/usr/include/c++/5/bits/locale_classes.h" 3 
locale ( const locale & __base , const locale & __add , category __cat ) ; 
# 205 "/usr/include/c++/5/bits/locale_classes.h" 3 
template < typename _Facet > 
locale ( const locale & __other , _Facet * __f ) ; 


~ locale ( ) throw ( ) ; 
# 219 "/usr/include/c++/5/bits/locale_classes.h" 3 
const locale & 
operator = ( const locale & __other ) throw ( ) ; 
# 234 "/usr/include/c++/5/bits/locale_classes.h" 3 
template < typename _Facet > 
locale 
combine ( const locale & __other ) const ; 






__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
string 
name ( ) const ; 
# 254 "/usr/include/c++/5/bits/locale_classes.h" 3 
bool 
operator == ( const locale & __other ) const throw ( ) ; 







bool 
operator != ( const locale & __other ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,83,265);return ! ( this -> operator == ( __other ) ) ; } 
# 282 "/usr/include/c++/5/bits/locale_classes.h" 3 
template < typename _Char , typename _Traits , typename _Alloc > 
bool 
operator ( ) ( const basic_string < _Char , _Traits , _Alloc >& __s1 , 
const basic_string < _Char , _Traits , _Alloc >& __s2 ) const ; 
# 298 "/usr/include/c++/5/bits/locale_classes.h" 3 
static locale 
global ( const locale & __loc ) ; 




static const locale & 
classic ( ) ; 

private : 

_Impl * _M_impl ; 


static _Impl * _S_classic ; 


static _Impl * _S_global ; 





static const char * const * const _S_categories ; 
# 333 "/usr/include/c++/5/bits/locale_classes.h" 3 
enum { _S_categories_size = 6 + 6 } ; 


static __gthread_once_t _S_once ; 


explicit 
locale ( _Impl * ) throw ( ) ; 

static void 
_S_initialize ( ) ; 

static void 
_S_initialize_once ( ) throw ( ) ; 

static category 
_S_normalize_category ( category ) ; 

void 
_M_coalesce ( const locale & __base , const locale & __add , category __cat ) ; 


static const id * const _S_twinned_facets [ ] ; 

} ; 
# 371 "/usr/include/c++/5/bits/locale_classes.h" 3 
class locale :: facet 
{ 
private : 
friend class locale ; 
friend class locale :: _Impl ; 

mutable _Atomic_word _M_refcount ; 


static __c_locale _S_c_locale ; 


static const char _S_c_name [ 2 ] ; 


static __gthread_once_t _S_once ; 


static void 
_S_initialize_once ( ) ; 

protected : 
# 402 "/usr/include/c++/5/bits/locale_classes.h" 3 
explicit 
facet ( size_t __refs = 0 ) throw ( ) : _M_refcount ( __refs ? 1 : 0 ) 
{ __CvT__record_line____(__CvT_miT,83,404);} 


virtual 
~ facet ( ) ; 

static void 
_S_create_c_locale ( __c_locale & __cloc , const char * __s , 
__c_locale __old = 0 ) ; 

static __c_locale 
_S_clone_c_locale ( __c_locale & __cloc ) throw ( ) ; 

static void 
_S_destroy_c_locale ( __c_locale & __cloc ) ; 

static __c_locale 
_S_lc_ctype_c_locale ( __c_locale __cloc , const char * __s ) ; 



static __c_locale 
_S_get_c_locale ( ) ; 

static const char * 
_S_get_c_name ( ) throw ( ) ; 

private : 
void 
_M_add_reference ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,83,434);__gnu_cxx :: __atomic_add_dispatch ( & _M_refcount , 1 ) ; } 

void 
_M_remove_reference ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,83,438);

; 
__CvT__record_line____(__CvT_miT,83,441);if ( __gnu_cxx :: __exchange_and_add_dispatch ( & _M_refcount , - 1 ) == 1 ) 
{{ 
; 
__CvT__record_line____(__CvT_miT,83,444);try 
{ __CvT__record_line____(__CvT_miT,83,445);delete this ; } 
catch ( ... ) 
{ } 
} 
}} 

facet ( const facet & ) ; 

facet & 
operator = ( const facet & ) ; 

class __shim ; 

const facet * _M_sso_shim ( const id * ) const ; 
const facet * _M_cow_shim ( const id * ) const ; 
} ; 
# 474 "/usr/include/c++/5/bits/locale_classes.h" 3 
class locale :: id 
{ 
private : 
friend class locale ; 
friend class locale :: _Impl ; 

template < typename _Facet > 
friend const _Facet & 
use_facet ( const locale & ) ; 

template < typename _Facet > 
friend bool 
has_facet ( const locale & ) throw ( ) ; 




mutable size_t _M_index ; 


static _Atomic_word _S_refcount ; 

void 
operator = ( const id & ) ; 

id ( const id & ) ; 

public : 



id ( ) { __CvT__record_line____(__CvT_miT,83,505);} 

size_t 
_M_id ( ) const throw ( ) ; 
} ; 



class locale :: _Impl 
{ 
public : 

friend class locale ; 
friend class locale :: facet ; 

template < typename _Facet > 
friend bool 
has_facet ( const locale & ) throw ( ) ; 

template < typename _Facet > 
friend const _Facet & 
use_facet ( const locale & ) ; 

template < typename _Cache > 
friend struct __use_cache ; 

private : 

_Atomic_word _M_refcount ; 
const facet ** _M_facets ; 
size_t _M_facets_size ; 
const facet ** _M_caches ; 
char ** _M_names ; 
static const locale :: id * const _S_id_ctype [ ] ; 
static const locale :: id * const _S_id_numeric [ ] ; 
static const locale :: id * const _S_id_collate [ ] ; 
static const locale :: id * const _S_id_time [ ] ; 
static const locale :: id * const _S_id_monetary [ ] ; 
static const locale :: id * const _S_id_messages [ ] ; 
static const locale :: id * const * const _S_facet_categories [ ] ; 

void 
_M_add_reference ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,83,548);__gnu_cxx :: __atomic_add_dispatch ( & _M_refcount , 1 ) ; } 

void 
_M_remove_reference ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,83,552);

; 
__CvT__record_line____(__CvT_miT,83,555);if ( __gnu_cxx :: __exchange_and_add_dispatch ( & _M_refcount , - 1 ) == 1 ) 
{{ 
; 
__CvT__record_line____(__CvT_miT,83,558);try 
{ __CvT__record_line____(__CvT_miT,83,559);delete this ; } 
catch ( ... ) 
{ } 
} 
}} 

_Impl ( const _Impl & , size_t ) ; 
_Impl ( const char * , size_t ) ; 
_Impl ( size_t ) throw ( ) ; 

~ _Impl ( ) throw ( ) ; 

_Impl ( const _Impl & ) ; 

void 
operator = ( const _Impl & ) ; 

bool 
_M_check_same_name ( ) 
{ __CvT__record_line____(__CvT_miT,83,578);
__CvT__record_line____(__CvT_miT,83,579);bool __ret = true ; 
__CvT__record_line____(__CvT_miT,83,580);if ( _M_names [ 1 ] ) 

{__CvT__record_line____(__CvT_miT,83,582);for ( size_t __i = 0 ; __ret && __i < _S_categories_size - 1 ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,83,583);__ret = __builtin_strcmp ( _M_names [ __i ] , _M_names [ __i + 1 ] ) == 0 ; 
}}__CvT__record_line____(__CvT_miT,83,584);return __ret ; 
} 

void 
_M_replace_categories ( const _Impl * , category ) ; 

void 
_M_replace_category ( const _Impl * , const locale :: id * const * ) ; 

void 
_M_replace_facet ( const _Impl * , const locale :: id * ) ; 

void 
_M_install_facet ( const locale :: id * , const facet * ) ; 

template < typename _Facet > 
void 
_M_init_facet ( _Facet * __facet ) 
{ __CvT__record_line____(__CvT_miT,83,602);_M_install_facet ( & _Facet :: id , __facet ) ; } 

template < typename _Facet > 
void 
_M_init_facet_unchecked ( _Facet * __facet ) 
{ __CvT__record_line____(__CvT_miT,83,607);
__CvT__record_line____(__CvT_miT,83,608);__facet -> _M_add_reference ( ) ; 
__CvT__record_line____(__CvT_miT,83,609);_M_facets [ _Facet :: id . _M_id ( ) ] = __facet ; 
} 

void 
_M_install_cache ( const facet * , size_t ) ; 

void _M_init_extra ( facet ** ) ; 
void _M_init_extra ( void * , void * , const char * , const char * ) ; 
} ; 
# 632 "/usr/include/c++/5/bits/locale_classes.h" 3 
template < typename _CharT > 
class __cxx11 :: collate : public locale :: facet 
{ 
public : 



typedef _CharT char_type ; 
typedef basic_string < _CharT > string_type ; 


protected : 


__c_locale _M_c_locale_collate ; 

public : 

static locale :: id id ; 
# 659 "/usr/include/c++/5/bits/locale_classes.h" 3 
explicit 
collate ( size_t __refs = 0 ) 
: facet ( __refs ) , _M_c_locale_collate ( _S_get_c_locale ( ) ) 
{ __CvT__record_line____(__CvT_miT,83,662);} 
# 673 "/usr/include/c++/5/bits/locale_classes.h" 3 
explicit 
collate ( __c_locale __cloc , size_t __refs = 0 ) 
: facet ( __refs ) , _M_c_locale_collate ( _S_clone_c_locale ( __cloc ) ) 
{ __CvT__record_line____(__CvT_miT,83,676);} 
# 690 "/usr/include/c++/5/bits/locale_classes.h" 3 
int 
compare ( const _CharT * __lo1 , const _CharT * __hi1 , 
const _CharT * __lo2 , const _CharT * __hi2 ) const 
{ __CvT__record_line____(__CvT_miT,83,693);return this -> do_compare ( __lo1 , __hi1 , __lo2 , __hi2 ) ; } 
# 709 "/usr/include/c++/5/bits/locale_classes.h" 3 
string_type 
transform ( const _CharT * __lo , const _CharT * __hi ) const 
{ __CvT__record_line____(__CvT_miT,83,711);return this -> do_transform ( __lo , __hi ) ; } 
# 723 "/usr/include/c++/5/bits/locale_classes.h" 3 
long 
hash ( const _CharT * __lo , const _CharT * __hi ) const 
{ __CvT__record_line____(__CvT_miT,83,725);return this -> do_hash ( __lo , __hi ) ; } 


int 
_M_compare ( const _CharT * , const _CharT * ) const throw ( ) ; 

size_t 
_M_transform ( _CharT * , const _CharT * , size_t ) const throw ( ) ; 

protected : 

virtual 
~ collate ( ) 
{ __CvT__record_line____(__CvT_miT,83,738);_S_destroy_c_locale ( _M_c_locale_collate ) ; } 
# 752 "/usr/include/c++/5/bits/locale_classes.h" 3 
virtual int 
do_compare ( const _CharT * __lo1 , const _CharT * __hi1 , 
const _CharT * __lo2 , const _CharT * __hi2 ) const ; 
# 766 "/usr/include/c++/5/bits/locale_classes.h" 3 
virtual string_type 
do_transform ( const _CharT * __lo , const _CharT * __hi ) const ; 
# 779 "/usr/include/c++/5/bits/locale_classes.h" 3 
virtual long 
do_hash ( const _CharT * __lo , const _CharT * __hi ) const ; 
} ; 

template < typename _CharT > 
locale :: id collate < _CharT >:: id ; 


template <> 
int 
collate < char >:: _M_compare ( const char * , const char * ) const throw ( ) ; 

template <> 
size_t 
collate < char >:: _M_transform ( char * , const char * , size_t ) const throw ( ) ; 


template <> 
int 
collate < wchar_t >:: _M_compare ( const wchar_t * , const wchar_t * ) const throw ( ) ; 

template <> 
size_t 
collate < wchar_t >:: _M_transform ( wchar_t * , const wchar_t * , size_t ) const throw ( ) ; 



template < typename _CharT > 
class __cxx11 :: collate_byname : public collate < _CharT > 
{ 
public : 


typedef _CharT char_type ; 
typedef basic_string < _CharT > string_type ; 


explicit 
collate_byname ( const char * __s , size_t __refs = 0 ) 
: collate < _CharT > ( __refs ) 
{ __CvT__record_line____(__CvT_miT,83,819);
__CvT__record_line____(__CvT_miT,83,820);if ( __builtin_strcmp ( __s , "C" ) != 0 
&& __builtin_strcmp ( __s , "POSIX" ) != 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,83,823);this -> _S_destroy_c_locale ( this -> _M_c_locale_collate ) ; 
__CvT__record_line____(__CvT_miT,83,824);this -> _S_create_c_locale ( this -> _M_c_locale_collate , __s ) ; 
} 
}} 







protected : 
virtual 
~ collate_byname ( ) { __CvT__record_line____(__CvT_miT,83,836);} 
} ; 


} 

# 1 "/usr/include/c++/5/bits/locale_classes.tcc" 1 3 
# 37 "/usr/include/c++/5/bits/locale_classes.tcc" 3 

# 38 "/usr/include/c++/5/bits/locale_classes.tcc" 3 

namespace std 
{ 


template < typename _Facet > 
locale :: 
locale ( const locale & __other , _Facet * __f ) 
{ __CvT__record_line____(__CvT_miT,84,46);
__CvT__record_line____(__CvT_miT,84,47);_M_impl = new _Impl ( * __other . _M_impl , 1 ) ; 

__CvT__record_line____(__CvT_miT,84,49);try 
{ __CvT__record_line____(__CvT_miT,84,50);_M_impl -> _M_install_facet ( & _Facet :: id , __f ) ; } 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,84,53);_M_impl -> _M_remove_reference ( ) ; 
__CvT__record_line____(__CvT_miT,84,54);throw ; 
} 
__CvT__record_line____(__CvT_miT,84,56);delete [ ] _M_impl -> _M_names [ 0 ] ; 
__CvT__record_line____(__CvT_miT,84,57);_M_impl -> _M_names [ 0 ] = 0 ; 
} 

template < typename _Facet > 
locale 
locale :: 
combine ( const locale & __other ) const 
{ __CvT__record_line____(__CvT_miT,84,64);
__CvT__record_line____(__CvT_miT,84,65);_Impl * __tmp = new _Impl ( * _M_impl , 1 ) ; 
__CvT__record_line____(__CvT_miT,84,66);try 
{ 
__CvT__record_line____(__CvT_miT,84,68);__tmp -> _M_replace_facet ( __other . _M_impl , & _Facet :: id ) ; 
} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,84,72);__tmp -> _M_remove_reference ( ) ; 
__CvT__record_line____(__CvT_miT,84,73);throw ; 
} 
__CvT__record_line____(__CvT_miT,84,75);return locale ( __tmp ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
bool 
locale :: 
operator ( ) ( const basic_string < _CharT , _Traits , _Alloc >& __s1 , 
const basic_string < _CharT , _Traits , _Alloc >& __s2 ) const 
{ __CvT__record_line____(__CvT_miT,84,83);
typedef std :: collate < _CharT > __collate_type ; 
__CvT__record_line____(__CvT_miT,84,85);const __collate_type & __collate = use_facet < __collate_type > ( * this ) ; 
__CvT__record_line____(__CvT_miT,84,86);return ( __collate . compare ( __s1 . data ( ) , __s1 . data ( ) + __s1 . length ( ) , 
__s2 . data ( ) , __s2 . data ( ) + __s2 . length ( ) ) < 0 ) ; 
} 
# 102 "/usr/include/c++/5/bits/locale_classes.tcc" 3 
template < typename _Facet > 
bool 
has_facet ( const locale & __loc ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,84,105);
__CvT__record_line____(__CvT_miT,84,106);const size_t __i = _Facet :: id . _M_id ( ) ; 
__CvT__record_line____(__CvT_miT,84,107);const locale :: facet ** __facets = __loc . _M_impl -> _M_facets ; 
__CvT__record_line____(__CvT_miT,84,108);return ( __i < __loc . _M_impl -> _M_facets_size 

&& dynamic_cast < const _Facet *> ( __facets [ __i ] ) ) ; 



} 
# 130 "/usr/include/c++/5/bits/locale_classes.tcc" 3 
template < typename _Facet > 
const _Facet & 
use_facet ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,84,133);
__CvT__record_line____(__CvT_miT,84,134);const size_t __i = _Facet :: id . _M_id ( ) ; 
__CvT__record_line____(__CvT_miT,84,135);const locale :: facet ** __facets = __loc . _M_impl -> _M_facets ; 
__CvT__record_line____(__CvT_miT,84,136);if ( __i >= __loc . _M_impl -> _M_facets_size || ! __facets [ __i ] ) 
{__CvT__record_line____(__CvT_miT,84,137);__throw_bad_cast ( ) ; 

}__CvT__record_line____(__CvT_miT,84,139);return dynamic_cast < const _Facet &> ( * __facets [ __i ] ) ; 



} 



template < typename _CharT > 
int 
collate < _CharT >:: _M_compare ( const _CharT * , const _CharT * ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,84,150);return 0 ; } 


template < typename _CharT > 
size_t 
collate < _CharT >:: _M_transform ( _CharT * , const _CharT * , size_t ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,84,156);return 0 ; } 

template < typename _CharT > 
int 
collate < _CharT >:: 
do_compare ( const _CharT * __lo1 , const _CharT * __hi1 , 
const _CharT * __lo2 , const _CharT * __hi2 ) const 
{ __CvT__record_line____(__CvT_miT,84,163);


__CvT__record_line____(__CvT_miT,84,166);const string_type __one ( __lo1 , __hi1 ) ; 
__CvT__record_line____(__CvT_miT,84,167);const string_type __two ( __lo2 , __hi2 ) ; 

__CvT__record_line____(__CvT_miT,84,169);const _CharT * __p = __one . c_str ( ) ; 
__CvT__record_line____(__CvT_miT,84,170);const _CharT * __pend = __one . data ( ) + __one . length ( ) ; 
__CvT__record_line____(__CvT_miT,84,171);const _CharT * __q = __two . c_str ( ) ; 
__CvT__record_line____(__CvT_miT,84,172);const _CharT * __qend = __two . data ( ) + __two . length ( ) ; 




__CvT__record_line____(__CvT_miT,84,177);for ( ; ; ) 
{{ 
__CvT__record_line____(__CvT_miT,84,179);const int __res = _M_compare ( __p , __q ) ; 
__CvT__record_line____(__CvT_miT,84,180);if ( __res ) 
{__CvT__record_line____(__CvT_miT,84,181);return __res ; 

}__CvT__record_line____(__CvT_miT,84,183);__p += char_traits < _CharT >:: length ( __p ) ; 
__CvT__record_line____(__CvT_miT,84,184);__q += char_traits < _CharT >:: length ( __q ) ; 
__CvT__record_line____(__CvT_miT,84,185);if ( __p == __pend && __q == __qend ) 
{__CvT__record_line____(__CvT_miT,84,186);return 0 ; 
}else {__CvT__record_line____(__CvT_miT,84,187);if ( __p == __pend ) 
{__CvT__record_line____(__CvT_miT,84,188);return - 1 ; 
}else {__CvT__record_line____(__CvT_miT,84,189);if ( __q == __qend ) 
{__CvT__record_line____(__CvT_miT,84,190);return 1 ; 

}}}__CvT__record_line____(__CvT_miT,84,192);__p ++ ; 
__CvT__record_line____(__CvT_miT,84,193);__q ++ ; 
} 
}} 

template < typename _CharT > 
typename collate < _CharT >:: string_type 
collate < _CharT >:: 
do_transform ( const _CharT * __lo , const _CharT * __hi ) const 
{ __CvT__record_line____(__CvT_miT,84,201);
__CvT__record_line____(__CvT_miT,84,202);string_type __ret ; 


__CvT__record_line____(__CvT_miT,84,205);const string_type __str ( __lo , __hi ) ; 

__CvT__record_line____(__CvT_miT,84,207);const _CharT * __p = __str . c_str ( ) ; 
__CvT__record_line____(__CvT_miT,84,208);const _CharT * __pend = __str . data ( ) + __str . length ( ) ; 

__CvT__record_line____(__CvT_miT,84,210);size_t __len = ( __hi - __lo ) * 2 ; 

__CvT__record_line____(__CvT_miT,84,212);_CharT * __c = new _CharT [ __len ] ; 

__CvT__record_line____(__CvT_miT,84,214);try 
{ 



__CvT__record_line____(__CvT_miT,84,219);for ( ; ; ) 
{{ 

__CvT__record_line____(__CvT_miT,84,222);size_t __res = _M_transform ( __c , __p , __len ) ; 


__CvT__record_line____(__CvT_miT,84,225);if ( __res >= __len ) 
{{ 
__CvT__record_line____(__CvT_miT,84,227);__len = __res + 1 ; 
__CvT__record_line____(__CvT_miT,84,228);delete [ ] __c , __c = 0 ; 
__CvT__record_line____(__CvT_miT,84,229);__c = new _CharT [ __len ] ; 
__CvT__record_line____(__CvT_miT,84,230);__res = _M_transform ( __c , __p , __len ) ; 
} 

}__CvT__record_line____(__CvT_miT,84,233);__ret . append ( __c , __res ) ; 
__CvT__record_line____(__CvT_miT,84,234);__p += char_traits < _CharT >:: length ( __p ) ; 
__CvT__record_line____(__CvT_miT,84,235);if ( __p == __pend ) 
{__CvT__record_line____(__CvT_miT,84,236);break ; 

}__CvT__record_line____(__CvT_miT,84,238);__p ++ ; 
__CvT__record_line____(__CvT_miT,84,239);__ret . push_back ( _CharT ( ) ) ; 
} 
}} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,84,244);delete [ ] __c ; 
__CvT__record_line____(__CvT_miT,84,245);throw ; 
} 

__CvT__record_line____(__CvT_miT,84,248);delete [ ] __c ; 

__CvT__record_line____(__CvT_miT,84,250);return __ret ; 
} 

template < typename _CharT > 
long 
collate < _CharT >:: 
do_hash ( const _CharT * __lo , const _CharT * __hi ) const 
{ __CvT__record_line____(__CvT_miT,84,257);
__CvT__record_line____(__CvT_miT,84,258);unsigned long __val = 0 ; 
__CvT__record_line____(__CvT_miT,84,259);for ( ; __lo < __hi ; ++ __lo ) 
{__CvT__record_line____(__CvT_miT,84,260);__val = 
* __lo + ( ( __val << 7 ) 
| ( __val >> ( __gnu_cxx :: __numeric_traits < unsigned long >:: 
__digits - 7 ) ) ) ; 
}__CvT__record_line____(__CvT_miT,84,264);return static_cast < long > ( __val ) ; 
} 




extern template class collate < char > ; 
extern template class collate_byname < char > ; 

extern template 
const collate < char >& 
use_facet < collate < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < collate < char > > ( const locale & ) ; 


extern template class collate < wchar_t > ; 
extern template class collate_byname < wchar_t > ; 

extern template 
const collate < wchar_t >& 
use_facet < collate < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < collate < wchar_t > > ( const locale & ) ; 




} 
# 843 "/usr/include/c++/5/bits/locale_classes.h" 2 3 
# 42 "/usr/include/c++/5/bits/ios_base.h" 2 3 


# 1 "/usr/include/c++/5/stdexcept" 1 3 
# 36 "/usr/include/c++/5/stdexcept" 3 

# 37 "/usr/include/c++/5/stdexcept" 3 




namespace std 
{ 





struct __cow_string 
{ 
union { 
const char * _M_p ; 
char _M_bytes [ sizeof ( const char * ) ] ; 
} ; 

__cow_string ( ) ; 
__cow_string ( const std :: string & ) ; 
__cow_string ( const char * , size_t ) ; 
__cow_string ( const __cow_string & ) throw ( ) ; 
__cow_string & operator = ( const __cow_string & ) throw ( ) ; 
~ __cow_string ( ) ; 




} ; 

typedef basic_string < char > __sso_string ; 
# 113 "/usr/include/c++/5/stdexcept" 3 
class logic_error : public exception 
{ 
__cow_string _M_msg ; 

public : 

explicit 
logic_error ( const string & __arg ) ; 







logic_error ( const logic_error & ) throw ( ) ; 
logic_error & operator = ( const logic_error & ) throw ( ) ; 


virtual ~ logic_error ( ) throw ( ) ; 



virtual const char * 
what ( ) const throw ( ) ; 
} ; 



class domain_error : public logic_error 
{ 
public : 
explicit domain_error ( const string & __arg ) ; 



virtual ~ domain_error ( ) throw ( ) ; 
} ; 


class invalid_argument : public logic_error 
{ 
public : 
explicit invalid_argument ( const string & __arg ) ; 



virtual ~ invalid_argument ( ) throw ( ) ; 
} ; 



class length_error : public logic_error 
{ 
public : 
explicit length_error ( const string & __arg ) ; 



virtual ~ length_error ( ) throw ( ) ; 
} ; 



class out_of_range : public logic_error 
{ 
public : 
explicit out_of_range ( const string & __arg ) ; 



virtual ~ out_of_range ( ) throw ( ) ; 
} ; 






class runtime_error : public exception 
{ 
__cow_string _M_msg ; 

public : 

explicit 
runtime_error ( const string & __arg ) ; 







runtime_error ( const runtime_error & ) throw ( ) ; 
runtime_error & operator = ( const runtime_error & ) throw ( ) ; 


virtual ~ runtime_error ( ) throw ( ) ; 



virtual const char * 
what ( ) const throw ( ) ; 
} ; 


class range_error : public runtime_error 
{ 
public : 
explicit range_error ( const string & __arg ) ; 



virtual ~ range_error ( ) throw ( ) ; 
} ; 


class overflow_error : public runtime_error 
{ 
public : 
explicit overflow_error ( const string & __arg ) ; 



virtual ~ overflow_error ( ) throw ( ) ; 
} ; 


class underflow_error : public runtime_error 
{ 
public : 
explicit underflow_error ( const string & __arg ) ; 



virtual ~ underflow_error ( ) throw ( ) ; 
} ; 




} 
# 45 "/usr/include/c++/5/bits/ios_base.h" 2 3 




namespace std 
{ 






enum _Ios_Fmtflags 
{ 
_S_boolalpha = 1L << 0 , 
_S_dec = 1L << 1 , 
_S_fixed = 1L << 2 , 
_S_hex = 1L << 3 , 
_S_internal = 1L << 4 , 
_S_left = 1L << 5 , 
_S_oct = 1L << 6 , 
_S_right = 1L << 7 , 
_S_scientific = 1L << 8 , 
_S_showbase = 1L << 9 , 
_S_showpoint = 1L << 10 , 
_S_showpos = 1L << 11 , 
_S_skipws = 1L << 12 , 
_S_unitbuf = 1L << 13 , 
_S_uppercase = 1L << 14 , 
_S_adjustfield = _S_left | _S_right | _S_internal , 
_S_basefield = _S_dec | _S_oct | _S_hex , 
_S_floatfield = _S_scientific | _S_fixed , 
_S_ios_fmtflags_end = 1L << 16 , 
_S_ios_fmtflags_max = 0x7fffffff , 
_S_ios_fmtflags_min = ~ 0x7fffffff 
} ; 

inline _Ios_Fmtflags 
operator & ( _Ios_Fmtflags __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,82,84);return _Ios_Fmtflags ( static_cast < int > ( __a ) & static_cast < int > ( __b ) ) ; } 

inline _Ios_Fmtflags 
operator | ( _Ios_Fmtflags __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,82,88);return _Ios_Fmtflags ( static_cast < int > ( __a ) | static_cast < int > ( __b ) ) ; } 

inline _Ios_Fmtflags 
operator ^ ( _Ios_Fmtflags __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,82,92);return _Ios_Fmtflags ( static_cast < int > ( __a ) ^ static_cast < int > ( __b ) ) ; } 

inline _Ios_Fmtflags 
operator ~ ( _Ios_Fmtflags __a ) 
{ __CvT__record_line____(__CvT_miT,82,96);return _Ios_Fmtflags ( ~ static_cast < int > ( __a ) ) ; } 

inline const _Ios_Fmtflags & 
operator |= ( _Ios_Fmtflags & __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,82,100);return __a = __a | __b ; } 

inline const _Ios_Fmtflags & 
operator &= ( _Ios_Fmtflags & __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,82,104);return __a = __a & __b ; } 

inline const _Ios_Fmtflags & 
operator ^= ( _Ios_Fmtflags & __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,82,108);return __a = __a ^ __b ; } 


enum _Ios_Openmode 
{ 
_S_app = 1L << 0 , 
_S_ate = 1L << 1 , 
_S_bin = 1L << 2 , 
_S_in = 1L << 3 , 
_S_out = 1L << 4 , 
_S_trunc = 1L << 5 , 
_S_ios_openmode_end = 1L << 16 , 
_S_ios_openmode_max = 0x7fffffff , 
_S_ios_openmode_min = ~ 0x7fffffff 
} ; 

inline _Ios_Openmode 
operator & ( _Ios_Openmode __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,82,126);return _Ios_Openmode ( static_cast < int > ( __a ) & static_cast < int > ( __b ) ) ; } 

inline _Ios_Openmode 
operator | ( _Ios_Openmode __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,82,130);return _Ios_Openmode ( static_cast < int > ( __a ) | static_cast < int > ( __b ) ) ; } 

inline _Ios_Openmode 
operator ^ ( _Ios_Openmode __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,82,134);return _Ios_Openmode ( static_cast < int > ( __a ) ^ static_cast < int > ( __b ) ) ; } 

inline _Ios_Openmode 
operator ~ ( _Ios_Openmode __a ) 
{ __CvT__record_line____(__CvT_miT,82,138);return _Ios_Openmode ( ~ static_cast < int > ( __a ) ) ; } 

inline const _Ios_Openmode & 
operator |= ( _Ios_Openmode & __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,82,142);return __a = __a | __b ; } 

inline const _Ios_Openmode & 
operator &= ( _Ios_Openmode & __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,82,146);return __a = __a & __b ; } 

inline const _Ios_Openmode & 
operator ^= ( _Ios_Openmode & __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,82,150);return __a = __a ^ __b ; } 


enum _Ios_Iostate 
{ 
_S_goodbit = 0 , 
_S_badbit = 1L << 0 , 
_S_eofbit = 1L << 1 , 
_S_failbit = 1L << 2 , 
_S_ios_iostate_end = 1L << 16 , 
_S_ios_iostate_max = 0x7fffffff , 
_S_ios_iostate_min = ~ 0x7fffffff 
} ; 

inline _Ios_Iostate 
operator & ( _Ios_Iostate __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,82,166);return _Ios_Iostate ( static_cast < int > ( __a ) & static_cast < int > ( __b ) ) ; } 

inline _Ios_Iostate 
operator | ( _Ios_Iostate __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,82,170);return _Ios_Iostate ( static_cast < int > ( __a ) | static_cast < int > ( __b ) ) ; } 

inline _Ios_Iostate 
operator ^ ( _Ios_Iostate __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,82,174);return _Ios_Iostate ( static_cast < int > ( __a ) ^ static_cast < int > ( __b ) ) ; } 

inline _Ios_Iostate 
operator ~ ( _Ios_Iostate __a ) 
{ __CvT__record_line____(__CvT_miT,82,178);return _Ios_Iostate ( ~ static_cast < int > ( __a ) ) ; } 

inline const _Ios_Iostate & 
operator |= ( _Ios_Iostate & __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,82,182);return __a = __a | __b ; } 

inline const _Ios_Iostate & 
operator &= ( _Ios_Iostate & __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,82,186);return __a = __a & __b ; } 

inline const _Ios_Iostate & 
operator ^= ( _Ios_Iostate & __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,82,190);return __a = __a ^ __b ; } 


enum _Ios_Seekdir 
{ 
_S_beg = 0 , 
_S_cur = 1 , 
_S_end = 2 , 
_S_ios_seekdir_end = 1L << 16 
} ; 
# 228 "/usr/include/c++/5/bits/ios_base.h" 3 
class ios_base 
{ 



struct system_error : std :: runtime_error 
{ 

struct error_code 
{ 
error_code ( ) { __CvT__record_line____(__CvT_miT,82,238);} 
private : 
int _M_value ; 
const void * _M_cat ; 
} _M_code ; 
} ; 


public : 
# 255 "/usr/include/c++/5/bits/ios_base.h" 3 
class __attribute ( ( __abi_tag__ ( "cxx11" ) ) ) failure : public system_error 
{ 
public : 
explicit 
failure ( const string & __str ) ; 
# 269 "/usr/include/c++/5/bits/ios_base.h" 3 
virtual 
~ failure ( ) throw ( ) ; 

virtual const char * 
what ( ) const throw ( ) ; 
} ; 
# 323 "/usr/include/c++/5/bits/ios_base.h" 3 
typedef _Ios_Fmtflags fmtflags ; 


static const fmtflags boolalpha = _S_boolalpha ; 


static const fmtflags dec = _S_dec ; 


static const fmtflags fixed = _S_fixed ; 


static const fmtflags hex = _S_hex ; 




static const fmtflags internal = _S_internal ; 



static const fmtflags left = _S_left ; 


static const fmtflags oct = _S_oct ; 



static const fmtflags right = _S_right ; 


static const fmtflags scientific = _S_scientific ; 



static const fmtflags showbase = _S_showbase ; 



static const fmtflags showpoint = _S_showpoint ; 


static const fmtflags showpos = _S_showpos ; 


static const fmtflags skipws = _S_skipws ; 


static const fmtflags unitbuf = _S_unitbuf ; 



static const fmtflags uppercase = _S_uppercase ; 


static const fmtflags adjustfield = _S_adjustfield ; 


static const fmtflags basefield = _S_basefield ; 


static const fmtflags floatfield = _S_floatfield ; 
# 398 "/usr/include/c++/5/bits/ios_base.h" 3 
typedef _Ios_Iostate iostate ; 



static const iostate badbit = _S_badbit ; 


static const iostate eofbit = _S_eofbit ; 




static const iostate failbit = _S_failbit ; 


static const iostate goodbit = _S_goodbit ; 
# 429 "/usr/include/c++/5/bits/ios_base.h" 3 
typedef _Ios_Openmode openmode ; 


static const openmode app = _S_app ; 


static const openmode ate = _S_ate ; 




static const openmode binary = _S_bin ; 


static const openmode in = _S_in ; 


static const openmode out = _S_out ; 


static const openmode trunc = _S_trunc ; 
# 461 "/usr/include/c++/5/bits/ios_base.h" 3 
typedef _Ios_Seekdir seekdir ; 


static const seekdir beg = _S_beg ; 


static const seekdir cur = _S_cur ; 


static const seekdir end = _S_end ; 


typedef int io_state ; 
typedef int open_mode ; 
typedef int seek_dir ; 

typedef std :: streampos streampos ; 
typedef std :: streamoff streamoff ; 
# 487 "/usr/include/c++/5/bits/ios_base.h" 3 
enum event 
{ 
erase_event , 
imbue_event , 
copyfmt_event 
} ; 
# 504 "/usr/include/c++/5/bits/ios_base.h" 3 
typedef void ( * event_callback ) ( event __e , ios_base & __b , int __i ) ; 
# 516 "/usr/include/c++/5/bits/ios_base.h" 3 
void 
register_callback ( event_callback __fn , int __index ) ; 

protected : 
streamsize _M_precision ; 
streamsize _M_width ; 
fmtflags _M_flags ; 
iostate _M_exception ; 
iostate _M_streambuf_state ; 



struct _Callback_list 
{ 

_Callback_list * _M_next ; 
ios_base :: event_callback _M_fn ; 
int _M_index ; 
_Atomic_word _M_refcount ; 

_Callback_list ( ios_base :: event_callback __fn , int __index , 
_Callback_list * __cb ) 
: _M_next ( __cb ) , _M_fn ( __fn ) , _M_index ( __index ) , _M_refcount ( 0 ) { __CvT__record_line____(__CvT_miT,82,538);} 

void 
_M_add_reference ( ) { __CvT__record_line____(__CvT_miT,82,541);__gnu_cxx :: __atomic_add_dispatch ( & _M_refcount , 1 ) ; } 


int 
_M_remove_reference ( ) 
{ __CvT__record_line____(__CvT_miT,82,546);

; 
__CvT__record_line____(__CvT_miT,82,549);int __res = __gnu_cxx :: __exchange_and_add_dispatch ( & _M_refcount , - 1 ) ; 
__CvT__record_line____(__CvT_miT,82,550);if ( __res == 0 ) 
{{ 
; 
} 
}__CvT__record_line____(__CvT_miT,82,554);return __res ; 
} 
} ; 

_Callback_list * _M_callbacks ; 

void 
_M_call_callbacks ( event __ev ) throw ( ) ; 

void 
_M_dispose_callbacks ( void ) throw ( ) ; 


struct _Words 
{ 
void * _M_pword ; 
long _M_iword ; 
_Words ( ) : _M_pword ( 0 ) , _M_iword ( 0 ) { __CvT__record_line____(__CvT_miT,82,571);} 
} ; 


_Words _M_word_zero ; 



enum { _S_local_word_size = 8 } ; 
_Words _M_local_word [ _S_local_word_size ] ; 


int _M_word_size ; 
_Words * _M_word ; 

_Words & 
_M_grow_words ( int __index , bool __iword ) ; 


locale _M_ios_locale ; 

void 
_M_init ( ) throw ( ) ; 

public : 





class Init 
{ 
friend class ios_base ; 
public : 
Init ( ) ; 
~ Init ( ) ; 

private : 
static _Atomic_word _S_refcount ; 
static bool _S_synced_with_stdio ; 
} ; 






fmtflags 
flags ( ) const 
{ __CvT__record_line____(__CvT_miT,82,620);return _M_flags ; } 
# 629 "/usr/include/c++/5/bits/ios_base.h" 3 
fmtflags 
flags ( fmtflags __fmtfl ) 
{ __CvT__record_line____(__CvT_miT,82,631);
__CvT__record_line____(__CvT_miT,82,632);fmtflags __old = _M_flags ; 
__CvT__record_line____(__CvT_miT,82,633);_M_flags = __fmtfl ; 
__CvT__record_line____(__CvT_miT,82,634);return __old ; 
} 
# 645 "/usr/include/c++/5/bits/ios_base.h" 3 
fmtflags 
setf ( fmtflags __fmtfl ) 
{ __CvT__record_line____(__CvT_miT,82,647);
__CvT__record_line____(__CvT_miT,82,648);fmtflags __old = _M_flags ; 
__CvT__record_line____(__CvT_miT,82,649);_M_flags |= __fmtfl ; 
__CvT__record_line____(__CvT_miT,82,650);return __old ; 
} 
# 662 "/usr/include/c++/5/bits/ios_base.h" 3 
fmtflags 
setf ( fmtflags __fmtfl , fmtflags __mask ) 
{ __CvT__record_line____(__CvT_miT,82,664);
__CvT__record_line____(__CvT_miT,82,665);fmtflags __old = _M_flags ; 
__CvT__record_line____(__CvT_miT,82,666);_M_flags &= ~ __mask ; 
__CvT__record_line____(__CvT_miT,82,667);_M_flags |= ( __fmtfl & __mask ) ; 
__CvT__record_line____(__CvT_miT,82,668);return __old ; 
} 







void 
unsetf ( fmtflags __mask ) 
{ __CvT__record_line____(__CvT_miT,82,679);_M_flags &= ~ __mask ; } 
# 688 "/usr/include/c++/5/bits/ios_base.h" 3 
streamsize 
precision ( ) const 
{ __CvT__record_line____(__CvT_miT,82,690);return _M_precision ; } 






streamsize 
precision ( streamsize __prec ) 
{ __CvT__record_line____(__CvT_miT,82,699);
__CvT__record_line____(__CvT_miT,82,700);streamsize __old = _M_precision ; 
__CvT__record_line____(__CvT_miT,82,701);_M_precision = __prec ; 
__CvT__record_line____(__CvT_miT,82,702);return __old ; 
} 







streamsize 
width ( ) const 
{ __CvT__record_line____(__CvT_miT,82,713);return _M_width ; } 






streamsize 
width ( streamsize __wide ) 
{ __CvT__record_line____(__CvT_miT,82,722);
__CvT__record_line____(__CvT_miT,82,723);streamsize __old = _M_width ; 
__CvT__record_line____(__CvT_miT,82,724);_M_width = __wide ; 
__CvT__record_line____(__CvT_miT,82,725);return __old ; 
} 
# 739 "/usr/include/c++/5/bits/ios_base.h" 3 
static bool 
sync_with_stdio ( bool __sync = true ) ; 
# 751 "/usr/include/c++/5/bits/ios_base.h" 3 
locale 
imbue ( const locale & __loc ) throw ( ) ; 
# 762 "/usr/include/c++/5/bits/ios_base.h" 3 
locale 
getloc ( ) const 
{ __CvT__record_line____(__CvT_miT,82,764);return _M_ios_locale ; } 
# 773 "/usr/include/c++/5/bits/ios_base.h" 3 
const locale & 
_M_getloc ( ) const 
{ __CvT__record_line____(__CvT_miT,82,775);return _M_ios_locale ; } 
# 792 "/usr/include/c++/5/bits/ios_base.h" 3 
static int 
xalloc ( ) throw ( ) ; 
# 808 "/usr/include/c++/5/bits/ios_base.h" 3 
long & 
iword ( int __ix ) 
{ __CvT__record_line____(__CvT_miT,82,810);
__CvT__record_line____(__CvT_miT,82,811);_Words & __word = ( __ix < _M_word_size ) 
? _M_word [ __ix ] : _M_grow_words ( __ix , true ) ; 
__CvT__record_line____(__CvT_miT,82,813);return __word . _M_iword ; 
} 
# 829 "/usr/include/c++/5/bits/ios_base.h" 3 
void *& 
pword ( int __ix ) 
{ __CvT__record_line____(__CvT_miT,82,831);
__CvT__record_line____(__CvT_miT,82,832);_Words & __word = ( __ix < _M_word_size ) 
? _M_word [ __ix ] : _M_grow_words ( __ix , false ) ; 
__CvT__record_line____(__CvT_miT,82,834);return __word . _M_pword ; 
} 
# 846 "/usr/include/c++/5/bits/ios_base.h" 3 
virtual ~ ios_base ( ) ; 

protected : 
ios_base ( ) throw ( ) ; 




private : 
ios_base ( const ios_base & ) ; 

ios_base & 
operator = ( const ios_base & ) ; 
# 873 "/usr/include/c++/5/bits/ios_base.h" 3 
} ; 



inline ios_base & 
boolalpha ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,879);
__CvT__record_line____(__CvT_miT,82,880);__base . setf ( ios_base :: boolalpha ) ; 
__CvT__record_line____(__CvT_miT,82,881);return __base ; 
} 


inline ios_base & 
noboolalpha ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,887);
__CvT__record_line____(__CvT_miT,82,888);__base . unsetf ( ios_base :: boolalpha ) ; 
__CvT__record_line____(__CvT_miT,82,889);return __base ; 
} 


inline ios_base & 
showbase ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,895);
__CvT__record_line____(__CvT_miT,82,896);__base . setf ( ios_base :: showbase ) ; 
__CvT__record_line____(__CvT_miT,82,897);return __base ; 
} 


inline ios_base & 
noshowbase ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,903);
__CvT__record_line____(__CvT_miT,82,904);__base . unsetf ( ios_base :: showbase ) ; 
__CvT__record_line____(__CvT_miT,82,905);return __base ; 
} 


inline ios_base & 
showpoint ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,911);
__CvT__record_line____(__CvT_miT,82,912);__base . setf ( ios_base :: showpoint ) ; 
__CvT__record_line____(__CvT_miT,82,913);return __base ; 
} 


inline ios_base & 
noshowpoint ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,919);
__CvT__record_line____(__CvT_miT,82,920);__base . unsetf ( ios_base :: showpoint ) ; 
__CvT__record_line____(__CvT_miT,82,921);return __base ; 
} 


inline ios_base & 
showpos ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,927);
__CvT__record_line____(__CvT_miT,82,928);__base . setf ( ios_base :: showpos ) ; 
__CvT__record_line____(__CvT_miT,82,929);return __base ; 
} 


inline ios_base & 
noshowpos ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,935);
__CvT__record_line____(__CvT_miT,82,936);__base . unsetf ( ios_base :: showpos ) ; 
__CvT__record_line____(__CvT_miT,82,937);return __base ; 
} 


inline ios_base & 
skipws ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,943);
__CvT__record_line____(__CvT_miT,82,944);__base . setf ( ios_base :: skipws ) ; 
__CvT__record_line____(__CvT_miT,82,945);return __base ; 
} 


inline ios_base & 
noskipws ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,951);
__CvT__record_line____(__CvT_miT,82,952);__base . unsetf ( ios_base :: skipws ) ; 
__CvT__record_line____(__CvT_miT,82,953);return __base ; 
} 


inline ios_base & 
uppercase ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,959);
__CvT__record_line____(__CvT_miT,82,960);__base . setf ( ios_base :: uppercase ) ; 
__CvT__record_line____(__CvT_miT,82,961);return __base ; 
} 


inline ios_base & 
nouppercase ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,967);
__CvT__record_line____(__CvT_miT,82,968);__base . unsetf ( ios_base :: uppercase ) ; 
__CvT__record_line____(__CvT_miT,82,969);return __base ; 
} 


inline ios_base & 
unitbuf ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,975);
__CvT__record_line____(__CvT_miT,82,976);__base . setf ( ios_base :: unitbuf ) ; 
__CvT__record_line____(__CvT_miT,82,977);return __base ; 
} 


inline ios_base & 
nounitbuf ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,983);
__CvT__record_line____(__CvT_miT,82,984);__base . unsetf ( ios_base :: unitbuf ) ; 
__CvT__record_line____(__CvT_miT,82,985);return __base ; 
} 



inline ios_base & 
internal ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,992);
__CvT__record_line____(__CvT_miT,82,993);__base . setf ( ios_base :: internal , ios_base :: adjustfield ) ; 
__CvT__record_line____(__CvT_miT,82,994);return __base ; 
} 


inline ios_base & 
left ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,1000);
__CvT__record_line____(__CvT_miT,82,1001);__base . setf ( ios_base :: left , ios_base :: adjustfield ) ; 
__CvT__record_line____(__CvT_miT,82,1002);return __base ; 
} 


inline ios_base & 
right ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,1008);
__CvT__record_line____(__CvT_miT,82,1009);__base . setf ( ios_base :: right , ios_base :: adjustfield ) ; 
__CvT__record_line____(__CvT_miT,82,1010);return __base ; 
} 



inline ios_base & 
dec ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,1017);
__CvT__record_line____(__CvT_miT,82,1018);__base . setf ( ios_base :: dec , ios_base :: basefield ) ; 
__CvT__record_line____(__CvT_miT,82,1019);return __base ; 
} 


inline ios_base & 
hex ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,1025);
__CvT__record_line____(__CvT_miT,82,1026);__base . setf ( ios_base :: hex , ios_base :: basefield ) ; 
__CvT__record_line____(__CvT_miT,82,1027);return __base ; 
} 


inline ios_base & 
oct ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,1033);
__CvT__record_line____(__CvT_miT,82,1034);__base . setf ( ios_base :: oct , ios_base :: basefield ) ; 
__CvT__record_line____(__CvT_miT,82,1035);return __base ; 
} 



inline ios_base & 
fixed ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,1042);
__CvT__record_line____(__CvT_miT,82,1043);__base . setf ( ios_base :: fixed , ios_base :: floatfield ) ; 
__CvT__record_line____(__CvT_miT,82,1044);return __base ; 
} 


inline ios_base & 
scientific ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,82,1050);
__CvT__record_line____(__CvT_miT,82,1051);__base . setf ( ios_base :: scientific , ios_base :: floatfield ) ; 
__CvT__record_line____(__CvT_miT,82,1052);return __base ; 
} 
# 1076 "/usr/include/c++/5/bits/ios_base.h" 3 

} 
# 43 "/usr/include/c++/5/ios" 2 3 
# 1 "/usr/include/c++/5/streambuf" 1 3 
# 36 "/usr/include/c++/5/streambuf" 3 

# 37 "/usr/include/c++/5/streambuf" 3 
# 45 "/usr/include/c++/5/streambuf" 3 
namespace std 
{ 


template < typename _CharT , typename _Traits > 
streamsize 
__copy_streambufs_eof ( basic_streambuf < _CharT , _Traits >* , 
basic_streambuf < _CharT , _Traits >* , bool & ) ; 
# 119 "/usr/include/c++/5/streambuf" 3 
template < typename _CharT , typename _Traits > 
class basic_streambuf 
{ 
public : 






typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 




typedef basic_streambuf < char_type , traits_type > __streambuf_type ; 


friend class basic_ios < char_type , traits_type > ; 
friend class basic_istream < char_type , traits_type > ; 
friend class basic_ostream < char_type , traits_type > ; 
friend class istreambuf_iterator < char_type , traits_type > ; 
friend class ostreambuf_iterator < char_type , traits_type > ; 

friend streamsize 
__copy_streambufs_eof <> ( basic_streambuf * , basic_streambuf * , bool & ) ; 

template < bool _IsMove , typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
_CharT2 *>:: __type 
__copy_move_a2 ( istreambuf_iterator < _CharT2 > , 
istreambuf_iterator < _CharT2 > , _CharT2 * ) ; 

template < typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
istreambuf_iterator < _CharT2 > >:: __type 
find ( istreambuf_iterator < _CharT2 > , istreambuf_iterator < _CharT2 > , 
const _CharT2 & ) ; 

template < typename _CharT2 , typename _Traits2 > 
friend basic_istream < _CharT2 , _Traits2 >& 
operator >> ( basic_istream < _CharT2 , _Traits2 >& , _CharT2 * ) ; 

template < typename _CharT2 , typename _Traits2 , typename _Alloc > 
friend basic_istream < _CharT2 , _Traits2 >& 
operator >> ( basic_istream < _CharT2 , _Traits2 >& , 
basic_string < _CharT2 , _Traits2 , _Alloc >& ) ; 

template < typename _CharT2 , typename _Traits2 , typename _Alloc > 
friend basic_istream < _CharT2 , _Traits2 >& 
getline ( basic_istream < _CharT2 , _Traits2 >& , 
basic_string < _CharT2 , _Traits2 , _Alloc >& , _CharT2 ) ; 

protected : 







char_type * _M_in_beg ; 
char_type * _M_in_cur ; 
char_type * _M_in_end ; 
char_type * _M_out_beg ; 
char_type * _M_out_cur ; 
char_type * _M_out_end ; 


locale _M_buf_locale ; 

public : 

virtual 
~ basic_streambuf ( ) 
{ __CvT__record_line____(__CvT_miT,86,198);} 
# 208 "/usr/include/c++/5/streambuf" 3 
locale 
pubimbue ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,86,210);
__CvT__record_line____(__CvT_miT,86,211);locale __tmp ( this -> getloc ( ) ) ; 
__CvT__record_line____(__CvT_miT,86,212);this -> imbue ( __loc ) ; 
__CvT__record_line____(__CvT_miT,86,213);_M_buf_locale = __loc ; 
__CvT__record_line____(__CvT_miT,86,214);return __tmp ; 
} 
# 225 "/usr/include/c++/5/streambuf" 3 
locale 
getloc ( ) const 
{ __CvT__record_line____(__CvT_miT,86,227);return _M_buf_locale ; } 
# 238 "/usr/include/c++/5/streambuf" 3 
basic_streambuf * 
pubsetbuf ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,86,240);return this -> setbuf ( __s , __n ) ; } 
# 250 "/usr/include/c++/5/streambuf" 3 
pos_type 
pubseekoff ( off_type __off , ios_base :: seekdir __way , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,86,253);return this -> seekoff ( __off , __way , __mode ) ; } 
# 262 "/usr/include/c++/5/streambuf" 3 
pos_type 
pubseekpos ( pos_type __sp , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,86,265);return this -> seekpos ( __sp , __mode ) ; } 




int 
pubsync ( ) { __CvT__record_line____(__CvT_miT,86,271);return this -> sync ( ) ; } 
# 283 "/usr/include/c++/5/streambuf" 3 
streamsize 
in_avail ( ) 
{ __CvT__record_line____(__CvT_miT,86,285);
__CvT__record_line____(__CvT_miT,86,286);const streamsize __ret = this -> egptr ( ) - this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,86,287);return __ret ? __ret : this -> showmanyc ( ) ; 
} 
# 297 "/usr/include/c++/5/streambuf" 3 
int_type 
snextc ( ) 
{ __CvT__record_line____(__CvT_miT,86,299);
__CvT__record_line____(__CvT_miT,86,300);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,86,301);if ( __builtin_expect ( ! traits_type :: eq_int_type ( this -> sbumpc ( ) , 
__ret ) , true ) ) 
{__CvT__record_line____(__CvT_miT,86,303);__ret = this -> sgetc ( ) ; 
}__CvT__record_line____(__CvT_miT,86,304);return __ret ; 
} 
# 315 "/usr/include/c++/5/streambuf" 3 
int_type 
sbumpc ( ) 
{ __CvT__record_line____(__CvT_miT,86,317);
__CvT__record_line____(__CvT_miT,86,318);int_type __ret ; 
__CvT__record_line____(__CvT_miT,86,319);if ( __builtin_expect ( this -> gptr ( ) < this -> egptr ( ) , true ) ) 
{{ 
__CvT__record_line____(__CvT_miT,86,321);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
__CvT__record_line____(__CvT_miT,86,322);this -> gbump ( 1 ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,86,325);__ret = this -> uflow ( ) ; 
}__CvT__record_line____(__CvT_miT,86,326);return __ret ; 
} 
# 337 "/usr/include/c++/5/streambuf" 3 
int_type 
sgetc ( ) 
{ __CvT__record_line____(__CvT_miT,86,339);
__CvT__record_line____(__CvT_miT,86,340);int_type __ret ; 
__CvT__record_line____(__CvT_miT,86,341);if ( __builtin_expect ( this -> gptr ( ) < this -> egptr ( ) , true ) ) 
{__CvT__record_line____(__CvT_miT,86,342);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
}else {
__CvT__record_line____(__CvT_miT,86,344);__ret = this -> underflow ( ) ; 
}__CvT__record_line____(__CvT_miT,86,345);return __ret ; 
} 
# 356 "/usr/include/c++/5/streambuf" 3 
streamsize 
sgetn ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,86,358);return this -> xsgetn ( __s , __n ) ; } 
# 371 "/usr/include/c++/5/streambuf" 3 
int_type 
sputbackc ( char_type __c ) 
{ __CvT__record_line____(__CvT_miT,86,373);
__CvT__record_line____(__CvT_miT,86,374);int_type __ret ; 
__CvT__record_line____(__CvT_miT,86,375);const bool __testpos = this -> eback ( ) < this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,86,376);if ( __builtin_expect ( ! __testpos || 
! traits_type :: eq ( __c , this -> gptr ( ) [ - 1 ] ) , false ) ) 
{__CvT__record_line____(__CvT_miT,86,378);__ret = this -> pbackfail ( traits_type :: to_int_type ( __c ) ) ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,86,381);this -> gbump ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,86,382);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
} 
}__CvT__record_line____(__CvT_miT,86,384);return __ret ; 
} 
# 396 "/usr/include/c++/5/streambuf" 3 
int_type 
sungetc ( ) 
{ __CvT__record_line____(__CvT_miT,86,398);
__CvT__record_line____(__CvT_miT,86,399);int_type __ret ; 
__CvT__record_line____(__CvT_miT,86,400);if ( __builtin_expect ( this -> eback ( ) < this -> gptr ( ) , true ) ) 
{{ 
__CvT__record_line____(__CvT_miT,86,402);this -> gbump ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,86,403);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,86,406);__ret = this -> pbackfail ( ) ; 
}__CvT__record_line____(__CvT_miT,86,407);return __ret ; 
} 
# 423 "/usr/include/c++/5/streambuf" 3 
int_type 
sputc ( char_type __c ) 
{ __CvT__record_line____(__CvT_miT,86,425);
__CvT__record_line____(__CvT_miT,86,426);int_type __ret ; 
__CvT__record_line____(__CvT_miT,86,427);if ( __builtin_expect ( this -> pptr ( ) < this -> epptr ( ) , true ) ) 
{{ 
__CvT__record_line____(__CvT_miT,86,429);* this -> pptr ( ) = __c ; 
__CvT__record_line____(__CvT_miT,86,430);this -> pbump ( 1 ) ; 
__CvT__record_line____(__CvT_miT,86,431);__ret = traits_type :: to_int_type ( __c ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,86,434);__ret = this -> overflow ( traits_type :: to_int_type ( __c ) ) ; 
}__CvT__record_line____(__CvT_miT,86,435);return __ret ; 
} 
# 449 "/usr/include/c++/5/streambuf" 3 
streamsize 
sputn ( const char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,86,451);return this -> xsputn ( __s , __n ) ; } 

protected : 
# 463 "/usr/include/c++/5/streambuf" 3 
basic_streambuf ( ) 
: _M_in_beg ( 0 ) , _M_in_cur ( 0 ) , _M_in_end ( 0 ) , 
_M_out_beg ( 0 ) , _M_out_cur ( 0 ) , _M_out_end ( 0 ) , 
_M_buf_locale ( locale ( ) ) 
{ __CvT__record_line____(__CvT_miT,86,467);} 
# 481 "/usr/include/c++/5/streambuf" 3 
char_type * 
eback ( ) const { __CvT__record_line____(__CvT_miT,86,482);return _M_in_beg ; } 

char_type * 
gptr ( ) const { __CvT__record_line____(__CvT_miT,86,485);return _M_in_cur ; } 

char_type * 
egptr ( ) const { __CvT__record_line____(__CvT_miT,86,488);return _M_in_end ; } 
# 497 "/usr/include/c++/5/streambuf" 3 
void 
gbump ( int __n ) { __CvT__record_line____(__CvT_miT,86,498);_M_in_cur += __n ; } 
# 508 "/usr/include/c++/5/streambuf" 3 
void 
setg ( char_type * __gbeg , char_type * __gnext , char_type * __gend ) 
{ __CvT__record_line____(__CvT_miT,86,510);
__CvT__record_line____(__CvT_miT,86,511);_M_in_beg = __gbeg ; 
__CvT__record_line____(__CvT_miT,86,512);_M_in_cur = __gnext ; 
__CvT__record_line____(__CvT_miT,86,513);_M_in_end = __gend ; 
} 
# 528 "/usr/include/c++/5/streambuf" 3 
char_type * 
pbase ( ) const { __CvT__record_line____(__CvT_miT,86,529);return _M_out_beg ; } 

char_type * 
pptr ( ) const { __CvT__record_line____(__CvT_miT,86,532);return _M_out_cur ; } 

char_type * 
epptr ( ) const { __CvT__record_line____(__CvT_miT,86,535);return _M_out_end ; } 
# 544 "/usr/include/c++/5/streambuf" 3 
void 
pbump ( int __n ) { __CvT__record_line____(__CvT_miT,86,545);_M_out_cur += __n ; } 
# 554 "/usr/include/c++/5/streambuf" 3 
void 
setp ( char_type * __pbeg , char_type * __pend ) 
{ __CvT__record_line____(__CvT_miT,86,556);
__CvT__record_line____(__CvT_miT,86,557);_M_out_beg = _M_out_cur = __pbeg ; 
__CvT__record_line____(__CvT_miT,86,558);_M_out_end = __pend ; 
} 
# 575 "/usr/include/c++/5/streambuf" 3 
virtual void 
imbue ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,86,577);} 
# 590 "/usr/include/c++/5/streambuf" 3 
virtual basic_streambuf < char_type , _Traits >* 
setbuf ( char_type * , streamsize ) 
{ __CvT__record_line____(__CvT_miT,86,592);return this ; } 
# 601 "/usr/include/c++/5/streambuf" 3 
virtual pos_type 
seekoff ( off_type , ios_base :: seekdir , 
ios_base :: openmode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,86,604);return pos_type ( off_type ( - 1 ) ) ; } 
# 613 "/usr/include/c++/5/streambuf" 3 
virtual pos_type 
seekpos ( pos_type , 
ios_base :: openmode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,86,616);return pos_type ( off_type ( - 1 ) ) ; } 
# 626 "/usr/include/c++/5/streambuf" 3 
virtual int 
sync ( ) { __CvT__record_line____(__CvT_miT,86,627);return 0 ; } 
# 648 "/usr/include/c++/5/streambuf" 3 
virtual streamsize 
showmanyc ( ) { __CvT__record_line____(__CvT_miT,86,649);return 0 ; } 
# 664 "/usr/include/c++/5/streambuf" 3 
virtual streamsize 
xsgetn ( char_type * __s , streamsize __n ) ; 
# 686 "/usr/include/c++/5/streambuf" 3 
virtual int_type 
underflow ( ) 
{ __CvT__record_line____(__CvT_miT,86,688);return traits_type :: eof ( ) ; } 
# 699 "/usr/include/c++/5/streambuf" 3 
virtual int_type 
uflow ( ) 
{ __CvT__record_line____(__CvT_miT,86,701);
__CvT__record_line____(__CvT_miT,86,702);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,86,703);const bool __testeof = traits_type :: eq_int_type ( this -> underflow ( ) , 
__ret ) ; 
__CvT__record_line____(__CvT_miT,86,705);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,86,707);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
__CvT__record_line____(__CvT_miT,86,708);this -> gbump ( 1 ) ; 
} 
}__CvT__record_line____(__CvT_miT,86,710);return __ret ; 
} 
# 723 "/usr/include/c++/5/streambuf" 3 
virtual int_type 
pbackfail ( int_type __c = traits_type :: eof ( ) ) 
{ __CvT__record_line____(__CvT_miT,86,725);return traits_type :: eof ( ) ; } 
# 741 "/usr/include/c++/5/streambuf" 3 
virtual streamsize 
xsputn ( const char_type * __s , streamsize __n ) ; 
# 767 "/usr/include/c++/5/streambuf" 3 
virtual int_type 
overflow ( int_type __c = traits_type :: eof ( ) ) 
{ __CvT__record_line____(__CvT_miT,86,769);return traits_type :: eof ( ) ; } 



public : 
# 782 "/usr/include/c++/5/streambuf" 3 
void 
stossc ( ) 
{ __CvT__record_line____(__CvT_miT,86,784);
__CvT__record_line____(__CvT_miT,86,785);if ( this -> gptr ( ) < this -> egptr ( ) ) 
{__CvT__record_line____(__CvT_miT,86,786);this -> gbump ( 1 ) ; 
}else {
__CvT__record_line____(__CvT_miT,86,788);this -> uflow ( ) ; 
}} 



void 
__safe_gbump ( streamsize __n ) { __CvT__record_line____(__CvT_miT,86,794);_M_in_cur += __n ; } 

void 
__safe_pbump ( streamsize __n ) { __CvT__record_line____(__CvT_miT,86,797);_M_out_cur += __n ; } 


private : 



basic_streambuf ( const basic_streambuf & ) ; 

basic_streambuf & 
operator = ( const basic_streambuf & ) ; 
# 822 "/usr/include/c++/5/streambuf" 3 
} ; 
# 836 "/usr/include/c++/5/streambuf" 3 
template <> 
streamsize 
__copy_streambufs_eof ( basic_streambuf < char >* __sbin , 
basic_streambuf < char >* __sbout , bool & __ineof ) ; 

template <> 
streamsize 
__copy_streambufs_eof ( basic_streambuf < wchar_t >* __sbin , 
basic_streambuf < wchar_t >* __sbout , bool & __ineof ) ; 



} 

# 1 "/usr/include/c++/5/bits/streambuf.tcc" 1 3 
# 37 "/usr/include/c++/5/bits/streambuf.tcc" 3 

# 38 "/usr/include/c++/5/bits/streambuf.tcc" 3 

namespace std 
{ 


template < typename _CharT , typename _Traits > 
streamsize 
basic_streambuf < _CharT , _Traits >:: 
xsgetn ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,87,47);
__CvT__record_line____(__CvT_miT,87,48);streamsize __ret = 0 ; 
__CvT__record_line____(__CvT_miT,87,49);while ( __ret < __n ) 
{{ 
__CvT__record_line____(__CvT_miT,87,51);const streamsize __buf_len = this -> egptr ( ) - this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,87,52);if ( __buf_len ) 
{{ 
__CvT__record_line____(__CvT_miT,87,54);const streamsize __remaining = __n - __ret ; 
__CvT__record_line____(__CvT_miT,87,55);const streamsize __len = std :: min ( __buf_len , __remaining ) ; 
__CvT__record_line____(__CvT_miT,87,56);traits_type :: copy ( __s , this -> gptr ( ) , __len ) ; 
__CvT__record_line____(__CvT_miT,87,57);__ret += __len ; 
__CvT__record_line____(__CvT_miT,87,58);__s += __len ; 
__CvT__record_line____(__CvT_miT,87,59);this -> __safe_gbump ( __len ) ; 
} 

}__CvT__record_line____(__CvT_miT,87,62);if ( __ret < __n ) 
{{ 
__CvT__record_line____(__CvT_miT,87,64);const int_type __c = this -> uflow ( ) ; 
__CvT__record_line____(__CvT_miT,87,65);if ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,87,67);traits_type :: assign ( * __s ++ , traits_type :: to_char_type ( __c ) ) ; 
__CvT__record_line____(__CvT_miT,87,68);++ __ret ; 
} 
}else {
__CvT__record_line____(__CvT_miT,87,71);break ; 
}} 
}} 
}__CvT__record_line____(__CvT_miT,87,74);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_streambuf < _CharT , _Traits >:: 
xsputn ( const char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,87,81);
__CvT__record_line____(__CvT_miT,87,82);streamsize __ret = 0 ; 
__CvT__record_line____(__CvT_miT,87,83);while ( __ret < __n ) 
{{ 
__CvT__record_line____(__CvT_miT,87,85);const streamsize __buf_len = this -> epptr ( ) - this -> pptr ( ) ; 
__CvT__record_line____(__CvT_miT,87,86);if ( __buf_len ) 
{{ 
__CvT__record_line____(__CvT_miT,87,88);const streamsize __remaining = __n - __ret ; 
__CvT__record_line____(__CvT_miT,87,89);const streamsize __len = std :: min ( __buf_len , __remaining ) ; 
__CvT__record_line____(__CvT_miT,87,90);traits_type :: copy ( this -> pptr ( ) , __s , __len ) ; 
__CvT__record_line____(__CvT_miT,87,91);__ret += __len ; 
__CvT__record_line____(__CvT_miT,87,92);__s += __len ; 
__CvT__record_line____(__CvT_miT,87,93);this -> __safe_pbump ( __len ) ; 
} 

}__CvT__record_line____(__CvT_miT,87,96);if ( __ret < __n ) 
{{ 
__CvT__record_line____(__CvT_miT,87,98);int_type __c = this -> overflow ( traits_type :: to_int_type ( * __s ) ) ; 
__CvT__record_line____(__CvT_miT,87,99);if ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,87,101);++ __ret ; 
__CvT__record_line____(__CvT_miT,87,102);++ __s ; 
} 
}else {
__CvT__record_line____(__CvT_miT,87,105);break ; 
}} 
}} 
}__CvT__record_line____(__CvT_miT,87,108);return __ret ; 
} 




template < typename _CharT , typename _Traits > 
streamsize 
__copy_streambufs_eof ( basic_streambuf < _CharT , _Traits >* __sbin , 
basic_streambuf < _CharT , _Traits >* __sbout , 
bool & __ineof ) 
{ __CvT__record_line____(__CvT_miT,87,119);
__CvT__record_line____(__CvT_miT,87,120);streamsize __ret = 0 ; 
__CvT__record_line____(__CvT_miT,87,121);__ineof = true ; 
__CvT__record_line____(__CvT_miT,87,122);typename _Traits :: int_type __c = __sbin -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,87,123);while ( ! _Traits :: eq_int_type ( __c , _Traits :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,87,125);__c = __sbout -> sputc ( _Traits :: to_char_type ( __c ) ) ; 
__CvT__record_line____(__CvT_miT,87,126);if ( _Traits :: eq_int_type ( __c , _Traits :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,87,128);__ineof = false ; 
__CvT__record_line____(__CvT_miT,87,129);break ; 
} 
}__CvT__record_line____(__CvT_miT,87,131);++ __ret ; 
__CvT__record_line____(__CvT_miT,87,132);__c = __sbin -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,87,134);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
inline streamsize 
__copy_streambufs ( basic_streambuf < _CharT , _Traits >* __sbin , 
basic_streambuf < _CharT , _Traits >* __sbout ) 
{ __CvT__record_line____(__CvT_miT,87,141);
__CvT__record_line____(__CvT_miT,87,142);bool __ineof ; 
__CvT__record_line____(__CvT_miT,87,143);return __copy_streambufs_eof ( __sbin , __sbout , __ineof ) ; 
} 




extern template class basic_streambuf < char > ; 
extern template 
streamsize 
__copy_streambufs ( basic_streambuf < char >* , 
basic_streambuf < char >* ) ; 
extern template 
streamsize 
__copy_streambufs_eof ( basic_streambuf < char >* , 
basic_streambuf < char >* , bool & ) ; 


extern template class basic_streambuf < wchar_t > ; 
extern template 
streamsize 
__copy_streambufs ( basic_streambuf < wchar_t >* , 
basic_streambuf < wchar_t >* ) ; 
extern template 
streamsize 
__copy_streambufs_eof ( basic_streambuf < wchar_t >* , 
basic_streambuf < wchar_t >* , bool & ) ; 




} 
# 851 "/usr/include/c++/5/streambuf" 2 3 
# 44 "/usr/include/c++/5/ios" 2 3 
# 1 "/usr/include/c++/5/bits/basic_ios.h" 1 3 
# 33 "/usr/include/c++/5/bits/basic_ios.h" 3 

# 34 "/usr/include/c++/5/bits/basic_ios.h" 3 



# 1 "/usr/include/c++/5/bits/locale_facets.h" 1 3 
# 37 "/usr/include/c++/5/bits/locale_facets.h" 3 

# 38 "/usr/include/c++/5/bits/locale_facets.h" 3 

# 1 "/usr/include/c++/5/cwctype" 1 3 
# 39 "/usr/include/c++/5/cwctype" 3 

# 40 "/usr/include/c++/5/cwctype" 3 
# 50 "/usr/include/c++/5/cwctype" 3 
# 1 "/usr/include/wctype.h" 1 3 4 
# 33 "/usr/include/wctype.h" 3 4 
# 1 "/usr/include/wchar.h" 1 3 4 
# 34 "/usr/include/wctype.h" 2 3 4 
# 49 "/usr/include/wctype.h" 3 4 



typedef unsigned long int wctype_t ; 

# 71 "/usr/include/wctype.h" 3 4 
enum 
{ 
__ISwupper = 0 , 
__ISwlower = 1 , 
__ISwalpha = 2 , 
__ISwdigit = 3 , 
__ISwxdigit = 4 , 
__ISwspace = 5 , 
__ISwprint = 6 , 
__ISwgraph = 7 , 
__ISwblank = 8 , 
__ISwcntrl = 9 , 
__ISwpunct = 10 , 
__ISwalnum = 11 , 

_ISwupper = ( ( __ISwupper ) < 8 ? ( int ) ( ( 1UL << ( __ISwupper ) ) << 24 ) : ( ( __ISwupper ) < 16 ? ( int ) ( ( 1UL << ( __ISwupper ) ) << 8 ) : ( ( __ISwupper ) < 24 ? ( int ) ( ( 1UL << ( __ISwupper ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwupper ) ) >> 24 ) ) ) ) , 
_ISwlower = ( ( __ISwlower ) < 8 ? ( int ) ( ( 1UL << ( __ISwlower ) ) << 24 ) : ( ( __ISwlower ) < 16 ? ( int ) ( ( 1UL << ( __ISwlower ) ) << 8 ) : ( ( __ISwlower ) < 24 ? ( int ) ( ( 1UL << ( __ISwlower ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwlower ) ) >> 24 ) ) ) ) , 
_ISwalpha = ( ( __ISwalpha ) < 8 ? ( int ) ( ( 1UL << ( __ISwalpha ) ) << 24 ) : ( ( __ISwalpha ) < 16 ? ( int ) ( ( 1UL << ( __ISwalpha ) ) << 8 ) : ( ( __ISwalpha ) < 24 ? ( int ) ( ( 1UL << ( __ISwalpha ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwalpha ) ) >> 24 ) ) ) ) , 
_ISwdigit = ( ( __ISwdigit ) < 8 ? ( int ) ( ( 1UL << ( __ISwdigit ) ) << 24 ) : ( ( __ISwdigit ) < 16 ? ( int ) ( ( 1UL << ( __ISwdigit ) ) << 8 ) : ( ( __ISwdigit ) < 24 ? ( int ) ( ( 1UL << ( __ISwdigit ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwdigit ) ) >> 24 ) ) ) ) , 
_ISwxdigit = ( ( __ISwxdigit ) < 8 ? ( int ) ( ( 1UL << ( __ISwxdigit ) ) << 24 ) : ( ( __ISwxdigit ) < 16 ? ( int ) ( ( 1UL << ( __ISwxdigit ) ) << 8 ) : ( ( __ISwxdigit ) < 24 ? ( int ) ( ( 1UL << ( __ISwxdigit ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwxdigit ) ) >> 24 ) ) ) ) , 
_ISwspace = ( ( __ISwspace ) < 8 ? ( int ) ( ( 1UL << ( __ISwspace ) ) << 24 ) : ( ( __ISwspace ) < 16 ? ( int ) ( ( 1UL << ( __ISwspace ) ) << 8 ) : ( ( __ISwspace ) < 24 ? ( int ) ( ( 1UL << ( __ISwspace ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwspace ) ) >> 24 ) ) ) ) , 
_ISwprint = ( ( __ISwprint ) < 8 ? ( int ) ( ( 1UL << ( __ISwprint ) ) << 24 ) : ( ( __ISwprint ) < 16 ? ( int ) ( ( 1UL << ( __ISwprint ) ) << 8 ) : ( ( __ISwprint ) < 24 ? ( int ) ( ( 1UL << ( __ISwprint ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwprint ) ) >> 24 ) ) ) ) , 
_ISwgraph = ( ( __ISwgraph ) < 8 ? ( int ) ( ( 1UL << ( __ISwgraph ) ) << 24 ) : ( ( __ISwgraph ) < 16 ? ( int ) ( ( 1UL << ( __ISwgraph ) ) << 8 ) : ( ( __ISwgraph ) < 24 ? ( int ) ( ( 1UL << ( __ISwgraph ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwgraph ) ) >> 24 ) ) ) ) , 
_ISwblank = ( ( __ISwblank ) < 8 ? ( int ) ( ( 1UL << ( __ISwblank ) ) << 24 ) : ( ( __ISwblank ) < 16 ? ( int ) ( ( 1UL << ( __ISwblank ) ) << 8 ) : ( ( __ISwblank ) < 24 ? ( int ) ( ( 1UL << ( __ISwblank ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwblank ) ) >> 24 ) ) ) ) , 
_ISwcntrl = ( ( __ISwcntrl ) < 8 ? ( int ) ( ( 1UL << ( __ISwcntrl ) ) << 24 ) : ( ( __ISwcntrl ) < 16 ? ( int ) ( ( 1UL << ( __ISwcntrl ) ) << 8 ) : ( ( __ISwcntrl ) < 24 ? ( int ) ( ( 1UL << ( __ISwcntrl ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwcntrl ) ) >> 24 ) ) ) ) , 
_ISwpunct = ( ( __ISwpunct ) < 8 ? ( int ) ( ( 1UL << ( __ISwpunct ) ) << 24 ) : ( ( __ISwpunct ) < 16 ? ( int ) ( ( 1UL << ( __ISwpunct ) ) << 8 ) : ( ( __ISwpunct ) < 24 ? ( int ) ( ( 1UL << ( __ISwpunct ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwpunct ) ) >> 24 ) ) ) ) , 
_ISwalnum = ( ( __ISwalnum ) < 8 ? ( int ) ( ( 1UL << ( __ISwalnum ) ) << 24 ) : ( ( __ISwalnum ) < 16 ? ( int ) ( ( 1UL << ( __ISwalnum ) ) << 8 ) : ( ( __ISwalnum ) < 24 ? ( int ) ( ( 1UL << ( __ISwalnum ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwalnum ) ) >> 24 ) ) ) ) 
} ; 



extern "C" { 








extern int iswalnum ( wint_t __wc ) throw ( ) ; 





extern int iswalpha ( wint_t __wc ) throw ( ) ; 


extern int iswcntrl ( wint_t __wc ) throw ( ) ; 



extern int iswdigit ( wint_t __wc ) throw ( ) ; 



extern int iswgraph ( wint_t __wc ) throw ( ) ; 




extern int iswlower ( wint_t __wc ) throw ( ) ; 


extern int iswprint ( wint_t __wc ) throw ( ) ; 




extern int iswpunct ( wint_t __wc ) throw ( ) ; 




extern int iswspace ( wint_t __wc ) throw ( ) ; 




extern int iswupper ( wint_t __wc ) throw ( ) ; 




extern int iswxdigit ( wint_t __wc ) throw ( ) ; 





extern int iswblank ( wint_t __wc ) throw ( ) ; 
# 171 "/usr/include/wctype.h" 3 4 
extern wctype_t wctype ( const char * __property ) throw ( ) ; 



extern int iswctype ( wint_t __wc , wctype_t __desc ) throw ( ) ; 










typedef const __int32_t * wctrans_t ; 







extern wint_t towlower ( wint_t __wc ) throw ( ) ; 


extern wint_t towupper ( wint_t __wc ) throw ( ) ; 


} 
# 213 "/usr/include/wctype.h" 3 4 
extern "C" { 




extern wctrans_t wctrans ( const char * __property ) throw ( ) ; 


extern wint_t towctrans ( wint_t __wc , wctrans_t __desc ) throw ( ) ; 








extern int iswalnum_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 





extern int iswalpha_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 


extern int iswcntrl_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 



extern int iswdigit_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 



extern int iswgraph_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswlower_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 


extern int iswprint_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswpunct_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswspace_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswupper_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswxdigit_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswblank_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 



extern wctype_t wctype_l ( const char * __property , __locale_t __locale ) 
throw ( ) ; 



extern int iswctype_l ( wint_t __wc , wctype_t __desc , __locale_t __locale ) 
throw ( ) ; 







extern wint_t towlower_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 


extern wint_t towupper_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 



extern wctrans_t wctrans_l ( const char * __property , __locale_t __locale ) 
throw ( ) ; 


extern wint_t towctrans_l ( wint_t __wc , wctrans_t __desc , 
__locale_t __locale ) throw ( ) ; 



} 
# 51 "/usr/include/c++/5/cwctype" 2 3 
# 80 "/usr/include/c++/5/cwctype" 3 
namespace std 
{ 
using :: wctrans_t ; 
using :: wctype_t ; 
using :: wint_t ; 

using :: iswalnum ; 
using :: iswalpha ; 

using :: iswblank ; 

using :: iswcntrl ; 
using :: iswctype ; 
using :: iswdigit ; 
using :: iswgraph ; 
using :: iswlower ; 
using :: iswprint ; 
using :: iswpunct ; 
using :: iswspace ; 
using :: iswupper ; 
using :: iswxdigit ; 
using :: towctrans ; 
using :: towlower ; 
using :: towupper ; 
using :: wctrans ; 
using :: wctype ; 
} 
# 40 "/usr/include/c++/5/bits/locale_facets.h" 2 3 
# 1 "/usr/include/c++/5/cctype" 1 3 
# 39 "/usr/include/c++/5/cctype" 3 

# 40 "/usr/include/c++/5/cctype" 3 
# 41 "/usr/include/c++/5/bits/locale_facets.h" 2 3 
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/ctype_base.h" 1 3 
# 36 "/usr/include/x86_64-linux-gnu/c++/5/bits/ctype_base.h" 3 
namespace std 
{ 



struct ctype_base 
{ 

typedef const int * __to_type ; 



typedef unsigned short mask ; 
static const mask upper = _ISupper ; 
static const mask lower = _ISlower ; 
static const mask alpha = _ISalpha ; 
static const mask digit = _ISdigit ; 
static const mask xdigit = _ISxdigit ; 
static const mask space = _ISspace ; 
static const mask print = _ISprint ; 
static const mask graph = _ISalpha | _ISdigit | _ISpunct ; 
static const mask cntrl = _IScntrl ; 
static const mask punct = _ISpunct ; 
static const mask alnum = _ISalpha | _ISdigit ; 



} ; 


} 
# 42 "/usr/include/c++/5/bits/locale_facets.h" 2 3 






# 1 "/usr/include/c++/5/bits/streambuf_iterator.h" 1 3 
# 33 "/usr/include/c++/5/bits/streambuf_iterator.h" 3 

# 34 "/usr/include/c++/5/bits/streambuf_iterator.h" 3 




namespace std 
{ 

# 49 "/usr/include/c++/5/bits/streambuf_iterator.h" 3 
template < typename _CharT , typename _Traits > 
class istreambuf_iterator 
: public iterator < input_iterator_tag , _CharT , typename _Traits :: off_type , 
_CharT * , 




_CharT &> 

{ 
public : 



typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef basic_streambuf < _CharT , _Traits > streambuf_type ; 
typedef basic_istream < _CharT , _Traits > istream_type ; 


template < typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
ostreambuf_iterator < _CharT2 > >:: __type 
copy ( istreambuf_iterator < _CharT2 > , istreambuf_iterator < _CharT2 > , 
ostreambuf_iterator < _CharT2 > ) ; 

template < bool _IsMove , typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
_CharT2 *>:: __type 
__copy_move_a2 ( istreambuf_iterator < _CharT2 > , 
istreambuf_iterator < _CharT2 > , _CharT2 * ) ; 

template < typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
istreambuf_iterator < _CharT2 > >:: __type 
find ( istreambuf_iterator < _CharT2 > , istreambuf_iterator < _CharT2 > , 
const _CharT2 & ) ; 

private : 







mutable streambuf_type * _M_sbuf ; 
mutable int_type _M_c ; 

public : 

istreambuf_iterator ( ) throw ( ) 
: _M_sbuf ( 0 ) , _M_c ( traits_type :: eof ( ) ) { __CvT__record_line____(__CvT_miT,93,103);} 
# 112 "/usr/include/c++/5/bits/streambuf_iterator.h" 3 
istreambuf_iterator ( istream_type & __s ) throw ( ) 
: _M_sbuf ( __s . rdbuf ( ) ) , _M_c ( traits_type :: eof ( ) ) { __CvT__record_line____(__CvT_miT,93,113);} 


istreambuf_iterator ( streambuf_type * __s ) throw ( ) 
: _M_sbuf ( __s ) , _M_c ( traits_type :: eof ( ) ) { __CvT__record_line____(__CvT_miT,93,117);} 




char_type 
operator * ( ) const 
{ __CvT__record_line____(__CvT_miT,93,124);







__CvT__record_line____(__CvT_miT,93,132);return traits_type :: to_char_type ( _M_get ( ) ) ; 
} 


istreambuf_iterator & 
operator ++ ( ) 
{ __CvT__record_line____(__CvT_miT,93,138);


; 
__CvT__record_line____(__CvT_miT,93,142);if ( _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,93,144);_M_sbuf -> sbumpc ( ) ; 
__CvT__record_line____(__CvT_miT,93,145);_M_c = traits_type :: eof ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,93,147);return * this ; 
} 


istreambuf_iterator 
operator ++ ( int ) 
{ __CvT__record_line____(__CvT_miT,93,153);


; 

__CvT__record_line____(__CvT_miT,93,158);istreambuf_iterator __old = * this ; 
__CvT__record_line____(__CvT_miT,93,159);if ( _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,93,161);__old . _M_c = _M_sbuf -> sbumpc ( ) ; 
__CvT__record_line____(__CvT_miT,93,162);_M_c = traits_type :: eof ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,93,164);return __old ; 
} 





bool 
equal ( const istreambuf_iterator & __b ) const 
{ __CvT__record_line____(__CvT_miT,93,173);return _M_at_eof ( ) == __b . _M_at_eof ( ) ; } 

private : 
int_type 
_M_get ( ) const 
{ __CvT__record_line____(__CvT_miT,93,178);
__CvT__record_line____(__CvT_miT,93,179);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,93,180);int_type __ret = __eof ; 
__CvT__record_line____(__CvT_miT,93,181);if ( _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,93,183);if ( ! traits_type :: eq_int_type ( _M_c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,93,184);__ret = _M_c ; 
}else {__CvT__record_line____(__CvT_miT,93,185);if ( ! traits_type :: eq_int_type ( ( __ret = _M_sbuf -> sgetc ( ) ) , 
__eof ) ) 
{__CvT__record_line____(__CvT_miT,93,187);_M_c = __ret ; 
}else {
__CvT__record_line____(__CvT_miT,93,189);_M_sbuf = 0 ; 
}}} 
}__CvT__record_line____(__CvT_miT,93,191);return __ret ; 
} 

bool 
_M_at_eof ( ) const 
{ __CvT__record_line____(__CvT_miT,93,196);
__CvT__record_line____(__CvT_miT,93,197);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,93,198);return traits_type :: eq_int_type ( _M_get ( ) , __eof ) ; 
} 
} ; 

template < typename _CharT , typename _Traits > 
inline bool 
operator == ( const istreambuf_iterator < _CharT , _Traits >& __a , 
const istreambuf_iterator < _CharT , _Traits >& __b ) 
{ __CvT__record_line____(__CvT_miT,93,206);return __a . equal ( __b ) ; } 

template < typename _CharT , typename _Traits > 
inline bool 
operator != ( const istreambuf_iterator < _CharT , _Traits >& __a , 
const istreambuf_iterator < _CharT , _Traits >& __b ) 
{ __CvT__record_line____(__CvT_miT,93,212);return ! __a . equal ( __b ) ; } 


template < typename _CharT , typename _Traits > 
class ostreambuf_iterator 
: public iterator < output_iterator_tag , void , void , void , void > 
{ 
public : 



typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef basic_streambuf < _CharT , _Traits > streambuf_type ; 
typedef basic_ostream < _CharT , _Traits > ostream_type ; 


template < typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
ostreambuf_iterator < _CharT2 > >:: __type 
copy ( istreambuf_iterator < _CharT2 > , istreambuf_iterator < _CharT2 > , 
ostreambuf_iterator < _CharT2 > ) ; 

private : 
streambuf_type * _M_sbuf ; 
bool _M_failed ; 

public : 

ostreambuf_iterator ( ostream_type & __s ) throw ( ) 
: _M_sbuf ( __s . rdbuf ( ) ) , _M_failed ( ! _M_sbuf ) { __CvT__record_line____(__CvT_miT,93,242);} 


ostreambuf_iterator ( streambuf_type * __s ) throw ( ) 
: _M_sbuf ( __s ) , _M_failed ( ! _M_sbuf ) { __CvT__record_line____(__CvT_miT,93,246);} 


ostreambuf_iterator & 
operator = ( _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,93,251);
__CvT__record_line____(__CvT_miT,93,252);if ( ! _M_failed && 
_Traits :: eq_int_type ( _M_sbuf -> sputc ( __c ) , _Traits :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,93,254);_M_failed = true ; 
}__CvT__record_line____(__CvT_miT,93,255);return * this ; 
} 


ostreambuf_iterator & 
operator * ( ) 
{ __CvT__record_line____(__CvT_miT,93,261);return * this ; } 


ostreambuf_iterator & 
operator ++ ( int ) 
{ __CvT__record_line____(__CvT_miT,93,266);return * this ; } 


ostreambuf_iterator & 
operator ++ ( ) 
{ __CvT__record_line____(__CvT_miT,93,271);return * this ; } 


bool 
failed ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,93,276);return _M_failed ; } 

ostreambuf_iterator & 
_M_put ( const _CharT * __ws , streamsize __len ) 
{ __CvT__record_line____(__CvT_miT,93,280);
__CvT__record_line____(__CvT_miT,93,281);if ( __builtin_expect ( ! _M_failed , true ) 
&& __builtin_expect ( this -> _M_sbuf -> sputn ( __ws , __len ) != __len , 
false ) ) 
{__CvT__record_line____(__CvT_miT,93,284);_M_failed = true ; 
}__CvT__record_line____(__CvT_miT,93,285);return * this ; 
} 
} ; 


template < typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT > >:: __type 
copy ( istreambuf_iterator < _CharT > __first , 
istreambuf_iterator < _CharT > __last , 
ostreambuf_iterator < _CharT > __result ) 
{ __CvT__record_line____(__CvT_miT,93,296);
__CvT__record_line____(__CvT_miT,93,297);if ( __first . _M_sbuf && ! __last . _M_sbuf && ! __result . _M_failed ) 
{{ 
__CvT__record_line____(__CvT_miT,93,299);bool __ineof ; 
__CvT__record_line____(__CvT_miT,93,300);__copy_streambufs_eof ( __first . _M_sbuf , __result . _M_sbuf , __ineof ) ; 
__CvT__record_line____(__CvT_miT,93,301);if ( ! __ineof ) 
{__CvT__record_line____(__CvT_miT,93,302);__result . _M_failed = true ; 
}} 
}__CvT__record_line____(__CvT_miT,93,304);return __result ; 
} 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT > >:: __type 
__copy_move_a2 ( _CharT * __first , _CharT * __last , 
ostreambuf_iterator < _CharT > __result ) 
{ __CvT__record_line____(__CvT_miT,93,312);
__CvT__record_line____(__CvT_miT,93,313);const streamsize __num = __last - __first ; 
__CvT__record_line____(__CvT_miT,93,314);if ( __num > 0 ) 
{__CvT__record_line____(__CvT_miT,93,315);__result . _M_put ( __first , __num ) ; 
}__CvT__record_line____(__CvT_miT,93,316);return __result ; 
} 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT > >:: __type 
__copy_move_a2 ( const _CharT * __first , const _CharT * __last , 
ostreambuf_iterator < _CharT > __result ) 
{ __CvT__record_line____(__CvT_miT,93,324);
__CvT__record_line____(__CvT_miT,93,325);const streamsize __num = __last - __first ; 
__CvT__record_line____(__CvT_miT,93,326);if ( __num > 0 ) 
{__CvT__record_line____(__CvT_miT,93,327);__result . _M_put ( __first , __num ) ; 
}__CvT__record_line____(__CvT_miT,93,328);return __result ; 
} 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
_CharT *>:: __type 
__copy_move_a2 ( istreambuf_iterator < _CharT > __first , 
istreambuf_iterator < _CharT > __last , _CharT * __result ) 
{ __CvT__record_line____(__CvT_miT,93,336);
typedef istreambuf_iterator < _CharT > __is_iterator_type ; 
typedef typename __is_iterator_type :: traits_type traits_type ; 
typedef typename __is_iterator_type :: streambuf_type streambuf_type ; 
typedef typename traits_type :: int_type int_type ; 

__CvT__record_line____(__CvT_miT,93,342);if ( __first . _M_sbuf && ! __last . _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,93,344);streambuf_type * __sb = __first . _M_sbuf ; 
__CvT__record_line____(__CvT_miT,93,345);int_type __c = __sb -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,93,346);while ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,93,348);const streamsize __n = __sb -> egptr ( ) - __sb -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,93,349);if ( __n > 1 ) 
{{ 
__CvT__record_line____(__CvT_miT,93,351);traits_type :: copy ( __result , __sb -> gptr ( ) , __n ) ; 
__CvT__record_line____(__CvT_miT,93,352);__sb -> __safe_gbump ( __n ) ; 
__CvT__record_line____(__CvT_miT,93,353);__result += __n ; 
__CvT__record_line____(__CvT_miT,93,354);__c = __sb -> underflow ( ) ; 
} 
}else {
{ 
__CvT__record_line____(__CvT_miT,93,358);* __result ++ = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,93,359);__c = __sb -> snextc ( ) ; 
} 
}} 
}} 
}__CvT__record_line____(__CvT_miT,93,363);return __result ; 
} 

template < typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
istreambuf_iterator < _CharT > >:: __type 
find ( istreambuf_iterator < _CharT > __first , 
istreambuf_iterator < _CharT > __last , const _CharT & __val ) 
{ __CvT__record_line____(__CvT_miT,93,371);
typedef istreambuf_iterator < _CharT > __is_iterator_type ; 
typedef typename __is_iterator_type :: traits_type traits_type ; 
typedef typename __is_iterator_type :: streambuf_type streambuf_type ; 
typedef typename traits_type :: int_type int_type ; 

__CvT__record_line____(__CvT_miT,93,377);if ( __first . _M_sbuf && ! __last . _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,93,379);const int_type __ival = traits_type :: to_int_type ( __val ) ; 
__CvT__record_line____(__CvT_miT,93,380);streambuf_type * __sb = __first . _M_sbuf ; 
__CvT__record_line____(__CvT_miT,93,381);int_type __c = __sb -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,93,382);while ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) 
&& ! traits_type :: eq_int_type ( __c , __ival ) ) 
{{ 
__CvT__record_line____(__CvT_miT,93,385);streamsize __n = __sb -> egptr ( ) - __sb -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,93,386);if ( __n > 1 ) 
{{ 
__CvT__record_line____(__CvT_miT,93,388);const _CharT * __p = traits_type :: find ( __sb -> gptr ( ) , 
__n , __val ) ; 
__CvT__record_line____(__CvT_miT,93,390);if ( __p ) 
{__CvT__record_line____(__CvT_miT,93,391);__n = __p - __sb -> gptr ( ) ; 
}__CvT__record_line____(__CvT_miT,93,392);__sb -> __safe_gbump ( __n ) ; 
__CvT__record_line____(__CvT_miT,93,393);__c = __sb -> sgetc ( ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,93,396);__c = __sb -> snextc ( ) ; 
}} 

}__CvT__record_line____(__CvT_miT,93,399);if ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,93,400);__first . _M_c = __c ; 
}else {
__CvT__record_line____(__CvT_miT,93,402);__first . _M_sbuf = 0 ; 
}} 
}__CvT__record_line____(__CvT_miT,93,404);return __first ; 
} 




} 
# 49 "/usr/include/c++/5/bits/locale_facets.h" 2 3 

namespace std 
{ 

# 71 "/usr/include/c++/5/bits/locale_facets.h" 3 
template < typename _Tp > 
void 
__convert_to_v ( const char * , _Tp & , ios_base :: iostate & , 
const __c_locale & ) throw ( ) ; 


template <> 
void 
__convert_to_v ( const char * , float & , ios_base :: iostate & , 
const __c_locale & ) throw ( ) ; 

template <> 
void 
__convert_to_v ( const char * , double & , ios_base :: iostate & , 
const __c_locale & ) throw ( ) ; 

template <> 
void 
__convert_to_v ( const char * , long double & , ios_base :: iostate & , 
const __c_locale & ) throw ( ) ; 



template < typename _CharT , typename _Traits > 
struct __pad 
{ 
static void 
_S_pad ( ios_base & __io , _CharT __fill , _CharT * __news , 
const _CharT * __olds , streamsize __newlen , streamsize __oldlen ) ; 
} ; 






template < typename _CharT > 
_CharT * 
__add_grouping ( _CharT * __s , _CharT __sep , 
const char * __gbeg , size_t __gsize , 
const _CharT * __first , const _CharT * __last ) ; 




template < typename _CharT > 
inline 
ostreambuf_iterator < _CharT > 
__write ( ostreambuf_iterator < _CharT > __s , const _CharT * __ws , int __len ) 
{ __CvT__record_line____(__CvT_miT,89,120);
__CvT__record_line____(__CvT_miT,89,121);__s . _M_put ( __ws , __len ) ; 
__CvT__record_line____(__CvT_miT,89,122);return __s ; 
} 


template < typename _CharT , typename _OutIter > 
inline 
_OutIter 
__write ( _OutIter __s , const _CharT * __ws , int __len ) 
{ __CvT__record_line____(__CvT_miT,89,130);
__CvT__record_line____(__CvT_miT,89,131);for ( int __j = 0 ; __j < __len ; __j ++ , ++ __s ) 
{__CvT__record_line____(__CvT_miT,89,132);* __s = __ws [ __j ] ; 
}__CvT__record_line____(__CvT_miT,89,133);return __s ; 
} 
# 149 "/usr/include/c++/5/bits/locale_facets.h" 3 
template < typename _CharT > 
class __ctype_abstract_base : public locale :: facet , public ctype_base 
{ 
public : 


typedef _CharT char_type ; 
# 168 "/usr/include/c++/5/bits/locale_facets.h" 3 
bool 
is ( mask __m , char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,89,170);return this -> do_is ( __m , __c ) ; } 
# 185 "/usr/include/c++/5/bits/locale_facets.h" 3 
const char_type * 
is ( const char_type * __lo , const char_type * __hi , mask * __vec ) const 
{ __CvT__record_line____(__CvT_miT,89,187);return this -> do_is ( __lo , __hi , __vec ) ; } 
# 201 "/usr/include/c++/5/bits/locale_facets.h" 3 
const char_type * 
scan_is ( mask __m , const char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,89,203);return this -> do_scan_is ( __m , __lo , __hi ) ; } 
# 217 "/usr/include/c++/5/bits/locale_facets.h" 3 
const char_type * 
scan_not ( mask __m , const char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,89,219);return this -> do_scan_not ( __m , __lo , __hi ) ; } 
# 231 "/usr/include/c++/5/bits/locale_facets.h" 3 
char_type 
toupper ( char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,89,233);return this -> do_toupper ( __c ) ; } 
# 246 "/usr/include/c++/5/bits/locale_facets.h" 3 
const char_type * 
toupper ( char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,89,248);return this -> do_toupper ( __lo , __hi ) ; } 
# 260 "/usr/include/c++/5/bits/locale_facets.h" 3 
char_type 
tolower ( char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,89,262);return this -> do_tolower ( __c ) ; } 
# 275 "/usr/include/c++/5/bits/locale_facets.h" 3 
const char_type * 
tolower ( char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,89,277);return this -> do_tolower ( __lo , __hi ) ; } 
# 292 "/usr/include/c++/5/bits/locale_facets.h" 3 
char_type 
widen ( char __c ) const 
{ __CvT__record_line____(__CvT_miT,89,294);return this -> do_widen ( __c ) ; } 
# 311 "/usr/include/c++/5/bits/locale_facets.h" 3 
const char * 
widen ( const char * __lo , const char * __hi , char_type * __to ) const 
{ __CvT__record_line____(__CvT_miT,89,313);return this -> do_widen ( __lo , __hi , __to ) ; } 
# 330 "/usr/include/c++/5/bits/locale_facets.h" 3 
char 
narrow ( char_type __c , char __dfault ) const 
{ __CvT__record_line____(__CvT_miT,89,332);return this -> do_narrow ( __c , __dfault ) ; } 
# 352 "/usr/include/c++/5/bits/locale_facets.h" 3 
const char_type * 
narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const 
{ __CvT__record_line____(__CvT_miT,89,355);return this -> do_narrow ( __lo , __hi , __dfault , __to ) ; } 

protected : 
explicit 
__ctype_abstract_base ( size_t __refs = 0 ) : facet ( __refs ) { __CvT__record_line____(__CvT_miT,89,359);} 

virtual 
~ __ctype_abstract_base ( ) { __CvT__record_line____(__CvT_miT,89,362);} 
# 377 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual bool 
do_is ( mask __m , char_type __c ) const = 0 ; 
# 396 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_is ( const char_type * __lo , const char_type * __hi , 
mask * __vec ) const = 0 ; 
# 415 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_scan_is ( mask __m , const char_type * __lo , 
const char_type * __hi ) const = 0 ; 
# 434 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_scan_not ( mask __m , const char_type * __lo , 
const char_type * __hi ) const = 0 ; 
# 452 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char_type 
do_toupper ( char_type __c ) const = 0 ; 
# 469 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_toupper ( char_type * __lo , const char_type * __hi ) const = 0 ; 
# 485 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char_type 
do_tolower ( char_type __c ) const = 0 ; 
# 502 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_tolower ( char_type * __lo , const char_type * __hi ) const = 0 ; 
# 521 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char_type 
do_widen ( char __c ) const = 0 ; 
# 542 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char * 
do_widen ( const char * __lo , const char * __hi , char_type * __to ) const = 0 ; 
# 563 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char 
do_narrow ( char_type __c , char __dfault ) const = 0 ; 
# 588 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const = 0 ; 
} ; 
# 611 "/usr/include/c++/5/bits/locale_facets.h" 3 
template < typename _CharT > 
class ctype : public __ctype_abstract_base < _CharT > 
{ 
public : 

typedef _CharT char_type ; 
typedef typename __ctype_abstract_base < _CharT >:: mask mask ; 


static locale :: id id ; 

explicit 
ctype ( size_t __refs = 0 ) : __ctype_abstract_base < _CharT > ( __refs ) { __CvT__record_line____(__CvT_miT,89,623);} 

protected : 
virtual 
~ ctype ( ) ; 

virtual bool 
do_is ( mask __m , char_type __c ) const ; 

virtual const char_type * 
do_is ( const char_type * __lo , const char_type * __hi , mask * __vec ) const ; 

virtual const char_type * 
do_scan_is ( mask __m , const char_type * __lo , const char_type * __hi ) const ; 

virtual const char_type * 
do_scan_not ( mask __m , const char_type * __lo , 
const char_type * __hi ) const ; 

virtual char_type 
do_toupper ( char_type __c ) const ; 

virtual const char_type * 
do_toupper ( char_type * __lo , const char_type * __hi ) const ; 

virtual char_type 
do_tolower ( char_type __c ) const ; 

virtual const char_type * 
do_tolower ( char_type * __lo , const char_type * __hi ) const ; 

virtual char_type 
do_widen ( char __c ) const ; 

virtual const char * 
do_widen ( const char * __lo , const char * __hi , char_type * __dest ) const ; 

virtual char 
do_narrow ( char_type , char __dfault ) const ; 

virtual const char_type * 
do_narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const ; 
} ; 

template < typename _CharT > 
locale :: id ctype < _CharT >:: id ; 
# 680 "/usr/include/c++/5/bits/locale_facets.h" 3 
template <> 
class ctype < char > : public locale :: facet , public ctype_base 
{ 
public : 


typedef char char_type ; 

protected : 

__c_locale _M_c_locale_ctype ; 
bool _M_del ; 
__to_type _M_toupper ; 
__to_type _M_tolower ; 
const mask * _M_table ; 
mutable char _M_widen_ok ; 
mutable char _M_widen [ 1 + static_cast < unsigned char > ( - 1 ) ] ; 
mutable char _M_narrow [ 1 + static_cast < unsigned char > ( - 1 ) ] ; 
mutable char _M_narrow_ok ; 


public : 

static locale :: id id ; 

static const size_t table_size = 1 + static_cast < unsigned char > ( - 1 ) ; 
# 717 "/usr/include/c++/5/bits/locale_facets.h" 3 
explicit 
ctype ( const mask * __table = 0 , bool __del = false , size_t __refs = 0 ) ; 
# 730 "/usr/include/c++/5/bits/locale_facets.h" 3 
explicit 
ctype ( __c_locale __cloc , const mask * __table = 0 , bool __del = false , 
size_t __refs = 0 ) ; 
# 743 "/usr/include/c++/5/bits/locale_facets.h" 3 
inline bool 
is ( mask __m , char __c ) const ; 
# 758 "/usr/include/c++/5/bits/locale_facets.h" 3 
inline const char * 
is ( const char * __lo , const char * __hi , mask * __vec ) const ; 
# 772 "/usr/include/c++/5/bits/locale_facets.h" 3 
inline const char * 
scan_is ( mask __m , const char * __lo , const char * __hi ) const ; 
# 786 "/usr/include/c++/5/bits/locale_facets.h" 3 
inline const char * 
scan_not ( mask __m , const char * __lo , const char * __hi ) const ; 
# 801 "/usr/include/c++/5/bits/locale_facets.h" 3 
char_type 
toupper ( char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,89,803);return this -> do_toupper ( __c ) ; } 
# 818 "/usr/include/c++/5/bits/locale_facets.h" 3 
const char_type * 
toupper ( char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,89,820);return this -> do_toupper ( __lo , __hi ) ; } 
# 834 "/usr/include/c++/5/bits/locale_facets.h" 3 
char_type 
tolower ( char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,89,836);return this -> do_tolower ( __c ) ; } 
# 851 "/usr/include/c++/5/bits/locale_facets.h" 3 
const char_type * 
tolower ( char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,89,853);return this -> do_tolower ( __lo , __hi ) ; } 
# 871 "/usr/include/c++/5/bits/locale_facets.h" 3 
char_type 
widen ( char __c ) const 
{ __CvT__record_line____(__CvT_miT,89,873);
__CvT__record_line____(__CvT_miT,89,874);if ( _M_widen_ok ) 
{__CvT__record_line____(__CvT_miT,89,875);return _M_widen [ static_cast < unsigned char > ( __c ) ] ; 
}__CvT__record_line____(__CvT_miT,89,876);this -> _M_widen_init ( ) ; 
__CvT__record_line____(__CvT_miT,89,877);return this -> do_widen ( __c ) ; 
} 
# 898 "/usr/include/c++/5/bits/locale_facets.h" 3 
const char * 
widen ( const char * __lo , const char * __hi , char_type * __to ) const 
{ __CvT__record_line____(__CvT_miT,89,900);
__CvT__record_line____(__CvT_miT,89,901);if ( _M_widen_ok == 1 ) 
{{ 
__CvT__record_line____(__CvT_miT,89,903);__builtin_memcpy ( __to , __lo , __hi - __lo ) ; 
__CvT__record_line____(__CvT_miT,89,904);return __hi ; 
} 
}__CvT__record_line____(__CvT_miT,89,906);if ( ! _M_widen_ok ) 
{__CvT__record_line____(__CvT_miT,89,907);_M_widen_init ( ) ; 
}__CvT__record_line____(__CvT_miT,89,908);return this -> do_widen ( __lo , __hi , __to ) ; 
} 
# 929 "/usr/include/c++/5/bits/locale_facets.h" 3 
char 
narrow ( char_type __c , char __dfault ) const 
{ __CvT__record_line____(__CvT_miT,89,931);
__CvT__record_line____(__CvT_miT,89,932);if ( _M_narrow [ static_cast < unsigned char > ( __c ) ] ) 
{__CvT__record_line____(__CvT_miT,89,933);return _M_narrow [ static_cast < unsigned char > ( __c ) ] ; 
}__CvT__record_line____(__CvT_miT,89,934);const char __t = do_narrow ( __c , __dfault ) ; 
__CvT__record_line____(__CvT_miT,89,935);if ( __t != __dfault ) 
{__CvT__record_line____(__CvT_miT,89,936);_M_narrow [ static_cast < unsigned char > ( __c ) ] = __t ; 
}__CvT__record_line____(__CvT_miT,89,937);return __t ; 
} 
# 962 "/usr/include/c++/5/bits/locale_facets.h" 3 
const char_type * 
narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const 
{ __CvT__record_line____(__CvT_miT,89,965);
__CvT__record_line____(__CvT_miT,89,966);if ( __builtin_expect ( _M_narrow_ok == 1 , true ) ) 
{{ 
__CvT__record_line____(__CvT_miT,89,968);__builtin_memcpy ( __to , __lo , __hi - __lo ) ; 
__CvT__record_line____(__CvT_miT,89,969);return __hi ; 
} 
}__CvT__record_line____(__CvT_miT,89,971);if ( ! _M_narrow_ok ) 
{__CvT__record_line____(__CvT_miT,89,972);_M_narrow_init ( ) ; 
}__CvT__record_line____(__CvT_miT,89,973);return this -> do_narrow ( __lo , __hi , __dfault , __to ) ; 
} 





const mask * 
table ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,89,982);return _M_table ; } 


static const mask * 
classic_table ( ) throw ( ) ; 
protected : 







virtual 
~ ctype ( ) ; 
# 1011 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char_type 
do_toupper ( char_type __c ) const ; 
# 1028 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_toupper ( char_type * __lo , const char_type * __hi ) const ; 
# 1044 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char_type 
do_tolower ( char_type __c ) const ; 
# 1061 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_tolower ( char_type * __lo , const char_type * __hi ) const ; 
# 1081 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char_type 
do_widen ( char __c ) const 
{ __CvT__record_line____(__CvT_miT,89,1083);return __c ; } 
# 1104 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char * 
do_widen ( const char * __lo , const char * __hi , char_type * __to ) const 
{ __CvT__record_line____(__CvT_miT,89,1106);
__CvT__record_line____(__CvT_miT,89,1107);__builtin_memcpy ( __to , __lo , __hi - __lo ) ; 
__CvT__record_line____(__CvT_miT,89,1108);return __hi ; 
} 
# 1130 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char 
do_narrow ( char_type __c , char __dfault ) const 
{ __CvT__record_line____(__CvT_miT,89,1132);return __c ; } 
# 1156 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const 
{ __CvT__record_line____(__CvT_miT,89,1159);
__CvT__record_line____(__CvT_miT,89,1160);__builtin_memcpy ( __to , __lo , __hi - __lo ) ; 
__CvT__record_line____(__CvT_miT,89,1161);return __hi ; 
} 

private : 
void _M_narrow_init ( ) const ; 
void _M_widen_init ( ) const ; 
} ; 
# 1181 "/usr/include/c++/5/bits/locale_facets.h" 3 
template <> 
class ctype < wchar_t > : public __ctype_abstract_base < wchar_t > 
{ 
public : 


typedef wchar_t char_type ; 
typedef wctype_t __wmask_type ; 

protected : 
__c_locale _M_c_locale_ctype ; 


bool _M_narrow_ok ; 
char _M_narrow [ 128 ] ; 
wint_t _M_widen [ 1 + static_cast < unsigned char > ( - 1 ) ] ; 


mask _M_bit [ 16 ] ; 
__wmask_type _M_wmask [ 16 ] ; 

public : 


static locale :: id id ; 
# 1214 "/usr/include/c++/5/bits/locale_facets.h" 3 
explicit 
ctype ( size_t __refs = 0 ) ; 
# 1225 "/usr/include/c++/5/bits/locale_facets.h" 3 
explicit 
ctype ( __c_locale __cloc , size_t __refs = 0 ) ; 

protected : 
__wmask_type 
_M_convert_to_wmask ( const mask __m ) const throw ( ) ; 


virtual 
~ ctype ( ) ; 
# 1249 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual bool 
do_is ( mask __m , char_type __c ) const ; 
# 1268 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_is ( const char_type * __lo , const char_type * __hi , mask * __vec ) const ; 
# 1286 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_scan_is ( mask __m , const char_type * __lo , const char_type * __hi ) const ; 
# 1304 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_scan_not ( mask __m , const char_type * __lo , 
const char_type * __hi ) const ; 
# 1321 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char_type 
do_toupper ( char_type __c ) const ; 
# 1338 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_toupper ( char_type * __lo , const char_type * __hi ) const ; 
# 1354 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char_type 
do_tolower ( char_type __c ) const ; 
# 1371 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_tolower ( char_type * __lo , const char_type * __hi ) const ; 
# 1391 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char_type 
do_widen ( char __c ) const ; 
# 1413 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char * 
do_widen ( const char * __lo , const char * __hi , char_type * __to ) const ; 
# 1436 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char 
do_narrow ( char_type __c , char __dfault ) const ; 
# 1462 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual const char_type * 
do_narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const ; 


void 
_M_initialize_ctype ( ) throw ( ) ; 
} ; 



template < typename _CharT > 
class ctype_byname : public ctype < _CharT > 
{ 
public : 
typedef typename ctype < _CharT >:: mask mask ; 

explicit 
ctype_byname ( const char * __s , size_t __refs = 0 ) ; 







protected : 
virtual 
~ ctype_byname ( ) { __CvT__record_line____(__CvT_miT,89,1490);} ; 
} ; 


template <> 
class ctype_byname < char > : public ctype < char > 
{ 
public : 
explicit 
ctype_byname ( const char * __s , size_t __refs = 0 ) ; 






protected : 
virtual 
~ ctype_byname ( ) ; 
} ; 


template <> 
class ctype_byname < wchar_t > : public ctype < wchar_t > 
{ 
public : 
explicit 
ctype_byname ( const char * __s , size_t __refs = 0 ) ; 






protected : 
virtual 
~ ctype_byname ( ) ; 
} ; 



} 


# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/ctype_inline.h" 1 3 
# 37 "/usr/include/x86_64-linux-gnu/c++/5/bits/ctype_inline.h" 3 
namespace std 
{ 


bool 
ctype < char >:: 
is ( mask __m , char __c ) const 
{ __CvT__record_line____(__CvT_miT,94,44);return _M_table [ static_cast < unsigned char > ( __c ) ] & __m ; } 

const char * 
ctype < char >:: 
is ( const char * __low , const char * __high , mask * __vec ) const 
{ __CvT__record_line____(__CvT_miT,94,49);
__CvT__record_line____(__CvT_miT,94,50);while ( __low < __high ) 
{__CvT__record_line____(__CvT_miT,94,51);* __vec ++ = _M_table [ static_cast < unsigned char > ( * __low ++ ) ] ; 
}__CvT__record_line____(__CvT_miT,94,52);return __high ; 
} 

const char * 
ctype < char >:: 
scan_is ( mask __m , const char * __low , const char * __high ) const 
{ __CvT__record_line____(__CvT_miT,94,58);
__CvT__record_line____(__CvT_miT,94,59);while ( __low < __high 
&& ! ( _M_table [ static_cast < unsigned char > ( * __low ) ] & __m ) ) 
{__CvT__record_line____(__CvT_miT,94,61);++ __low ; 
}__CvT__record_line____(__CvT_miT,94,62);return __low ; 
} 

const char * 
ctype < char >:: 
scan_not ( mask __m , const char * __low , const char * __high ) const 
{ __CvT__record_line____(__CvT_miT,94,68);
__CvT__record_line____(__CvT_miT,94,69);while ( __low < __high 
&& ( _M_table [ static_cast < unsigned char > ( * __low ) ] & __m ) != 0 ) 
{__CvT__record_line____(__CvT_miT,94,71);++ __low ; 
}__CvT__record_line____(__CvT_miT,94,72);return __low ; 
} 


} 
# 1535 "/usr/include/c++/5/bits/locale_facets.h" 2 3 

namespace std 
{ 



class __num_base 
{ 
public : 


enum 
{ 
_S_ominus , 
_S_oplus , 
_S_ox , 
_S_oX , 
_S_odigits , 
_S_odigits_end = _S_odigits + 16 , 
_S_oudigits = _S_odigits_end , 
_S_oudigits_end = _S_oudigits + 16 , 
_S_oe = _S_odigits + 14 , 
_S_oE = _S_oudigits + 14 , 
_S_oend = _S_oudigits_end 
} ; 






static const char * _S_atoms_out ; 



static const char * _S_atoms_in ; 

enum 
{ 
_S_iminus , 
_S_iplus , 
_S_ix , 
_S_iX , 
_S_izero , 
_S_ie = _S_izero + 14 , 
_S_iE = _S_izero + 20 , 
_S_iend = 26 
} ; 



static void 
_S_format_float ( const ios_base & __io , char * __fptr , char __mod ) throw ( ) ; 
} ; 

template < typename _CharT > 
struct __numpunct_cache : public locale :: facet 
{ 
const char * _M_grouping ; 
size_t _M_grouping_size ; 
bool _M_use_grouping ; 
const _CharT * _M_truename ; 
size_t _M_truename_size ; 
const _CharT * _M_falsename ; 
size_t _M_falsename_size ; 
_CharT _M_decimal_point ; 
_CharT _M_thousands_sep ; 





_CharT _M_atoms_out [ __num_base :: _S_oend ] ; 





_CharT _M_atoms_in [ __num_base :: _S_iend ] ; 

bool _M_allocated ; 

__numpunct_cache ( size_t __refs = 0 ) 
: facet ( __refs ) , _M_grouping ( 0 ) , _M_grouping_size ( 0 ) , 
_M_use_grouping ( false ) , 
_M_truename ( 0 ) , _M_truename_size ( 0 ) , _M_falsename ( 0 ) , 
_M_falsename_size ( 0 ) , _M_decimal_point ( _CharT ( ) ) , 
_M_thousands_sep ( _CharT ( ) ) , _M_allocated ( false ) 
{ __CvT__record_line____(__CvT_miT,89,1623);} 

~ __numpunct_cache ( ) ; 

void 
_M_cache ( const locale & __loc ) ; 

private : 
__numpunct_cache & 
operator = ( const __numpunct_cache & ) ; 

explicit 
__numpunct_cache ( const __numpunct_cache & ) ; 
} ; 

template < typename _CharT > 
__numpunct_cache < _CharT >:: ~ __numpunct_cache ( ) 
{ __CvT__record_line____(__CvT_miT,89,1640);
__CvT__record_line____(__CvT_miT,89,1641);if ( _M_allocated ) 
{{ 
__CvT__record_line____(__CvT_miT,89,1643);delete [ ] _M_grouping ; 
__CvT__record_line____(__CvT_miT,89,1644);delete [ ] _M_truename ; 
__CvT__record_line____(__CvT_miT,89,1645);delete [ ] _M_falsename ; 
} 
}} 

namespace __cxx11 { 
# 1665 "/usr/include/c++/5/bits/locale_facets.h" 3 
template < typename _CharT > 
class numpunct : public locale :: facet 
{ 
public : 



typedef _CharT char_type ; 
typedef basic_string < _CharT > string_type ; 

typedef __numpunct_cache < _CharT > __cache_type ; 

protected : 
__cache_type * _M_data ; 

public : 

static locale :: id id ; 






explicit 
numpunct ( size_t __refs = 0 ) 
: facet ( __refs ) , _M_data ( 0 ) 
{ __CvT__record_line____(__CvT_miT,89,1692);_M_initialize_numpunct ( ) ; } 
# 1703 "/usr/include/c++/5/bits/locale_facets.h" 3 
explicit 
numpunct ( __cache_type * __cache , size_t __refs = 0 ) 
: facet ( __refs ) , _M_data ( __cache ) 
{ __CvT__record_line____(__CvT_miT,89,1706);_M_initialize_numpunct ( ) ; } 
# 1717 "/usr/include/c++/5/bits/locale_facets.h" 3 
explicit 
numpunct ( __c_locale __cloc , size_t __refs = 0 ) 
: facet ( __refs ) , _M_data ( 0 ) 
{ __CvT__record_line____(__CvT_miT,89,1720);_M_initialize_numpunct ( __cloc ) ; } 
# 1731 "/usr/include/c++/5/bits/locale_facets.h" 3 
char_type 
decimal_point ( ) const 
{ __CvT__record_line____(__CvT_miT,89,1733);return this -> do_decimal_point ( ) ; } 
# 1744 "/usr/include/c++/5/bits/locale_facets.h" 3 
char_type 
thousands_sep ( ) const 
{ __CvT__record_line____(__CvT_miT,89,1746);return this -> do_thousands_sep ( ) ; } 
# 1775 "/usr/include/c++/5/bits/locale_facets.h" 3 
string 
grouping ( ) const 
{ __CvT__record_line____(__CvT_miT,89,1777);return this -> do_grouping ( ) ; } 
# 1788 "/usr/include/c++/5/bits/locale_facets.h" 3 
string_type 
truename ( ) const 
{ __CvT__record_line____(__CvT_miT,89,1790);return this -> do_truename ( ) ; } 
# 1801 "/usr/include/c++/5/bits/locale_facets.h" 3 
string_type 
falsename ( ) const 
{ __CvT__record_line____(__CvT_miT,89,1803);return this -> do_falsename ( ) ; } 

protected : 

virtual 
~ numpunct ( ) ; 
# 1818 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char_type 
do_decimal_point ( ) const 
{ __CvT__record_line____(__CvT_miT,89,1820);return _M_data -> _M_decimal_point ; } 
# 1830 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual char_type 
do_thousands_sep ( ) const 
{ __CvT__record_line____(__CvT_miT,89,1832);return _M_data -> _M_thousands_sep ; } 
# 1843 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual string 
do_grouping ( ) const 
{ __CvT__record_line____(__CvT_miT,89,1845);return _M_data -> _M_grouping ; } 
# 1856 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual string_type 
do_truename ( ) const 
{ __CvT__record_line____(__CvT_miT,89,1858);return _M_data -> _M_truename ; } 
# 1869 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual string_type 
do_falsename ( ) const 
{ __CvT__record_line____(__CvT_miT,89,1871);return _M_data -> _M_falsename ; } 


void 
_M_initialize_numpunct ( __c_locale __cloc = 0 ) ; 
} ; 

template < typename _CharT > 
locale :: id numpunct < _CharT >:: id ; 

template <> 
numpunct < char >:: ~ numpunct ( ) ; 

template <> 
void 
numpunct < char >:: _M_initialize_numpunct ( __c_locale __cloc ) ; 


template <> 
numpunct < wchar_t >:: ~ numpunct ( ) ; 

template <> 
void 
numpunct < wchar_t >:: _M_initialize_numpunct ( __c_locale __cloc ) ; 



template < typename _CharT > 
class numpunct_byname : public numpunct < _CharT > 
{ 
public : 
typedef _CharT char_type ; 
typedef basic_string < _CharT > string_type ; 

explicit 
numpunct_byname ( const char * __s , size_t __refs = 0 ) 
: numpunct < _CharT > ( __refs ) 
{ __CvT__record_line____(__CvT_miT,89,1908);
__CvT__record_line____(__CvT_miT,89,1909);if ( __builtin_strcmp ( __s , "C" ) != 0 
&& __builtin_strcmp ( __s , "POSIX" ) != 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,89,1912);__c_locale __tmp ; 
__CvT__record_line____(__CvT_miT,89,1913);this -> _S_create_c_locale ( __tmp , __s ) ; 
__CvT__record_line____(__CvT_miT,89,1914);this -> _M_initialize_numpunct ( __tmp ) ; 
__CvT__record_line____(__CvT_miT,89,1915);this -> _S_destroy_c_locale ( __tmp ) ; 
} 
}} 







protected : 
virtual 
~ numpunct_byname ( ) { __CvT__record_line____(__CvT_miT,89,1927);} 
} ; 

} 


# 1947 "/usr/include/c++/5/bits/locale_facets.h" 3 
template < typename _CharT , typename _InIter > 
class num_get : public locale :: facet 
{ 
public : 



typedef _CharT char_type ; 
typedef _InIter iter_type ; 



static locale :: id id ; 
# 1968 "/usr/include/c++/5/bits/locale_facets.h" 3 
explicit 
num_get ( size_t __refs = 0 ) : facet ( __refs ) { __CvT__record_line____(__CvT_miT,89,1969);} 
# 1994 "/usr/include/c++/5/bits/locale_facets.h" 3 
iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , bool & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,1997);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 
# 2031 "/usr/include/c++/5/bits/locale_facets.h" 3 
iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2034);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned short & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2039);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned int & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2044);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned long & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2049);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 


iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long long & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2055);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned long long & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2060);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 
# 2091 "/usr/include/c++/5/bits/locale_facets.h" 3 
iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , float & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2094);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , double & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2099);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long double & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2104);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 
# 2134 "/usr/include/c++/5/bits/locale_facets.h" 3 
iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , void *& __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2137);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

protected : 

virtual ~ num_get ( ) { __CvT__record_line____(__CvT_miT,89,2141);} 

__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
iter_type 
_M_extract_float ( iter_type , iter_type , ios_base & , ios_base :: iostate & , 
string & ) const ; 

template < typename _ValueT > 
__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
iter_type 
_M_extract_int ( iter_type , iter_type , ios_base & , ios_base :: iostate & , 
_ValueT & ) const ; 

template < typename _CharT2 > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , int >:: __type 
_M_find ( const _CharT2 * , size_t __len , _CharT2 __c ) const 
{ __CvT__record_line____(__CvT_miT,89,2157);
__CvT__record_line____(__CvT_miT,89,2158);int __ret = - 1 ; 
__CvT__record_line____(__CvT_miT,89,2159);if ( __len <= 10 ) 
{{ 
__CvT__record_line____(__CvT_miT,89,2161);if ( __c >= _CharT2 ( '0' ) && __c < _CharT2 ( _CharT2 ( '0' ) + __len ) ) 
{__CvT__record_line____(__CvT_miT,89,2162);__ret = __c - _CharT2 ( '0' ) ; 
}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,89,2166);if ( __c >= _CharT2 ( '0' ) && __c <= _CharT2 ( '9' ) ) 
{__CvT__record_line____(__CvT_miT,89,2167);__ret = __c - _CharT2 ( '0' ) ; 
}else {__CvT__record_line____(__CvT_miT,89,2168);if ( __c >= _CharT2 ( 'a' ) && __c <= _CharT2 ( 'f' ) ) 
{__CvT__record_line____(__CvT_miT,89,2169);__ret = 10 + ( __c - _CharT2 ( 'a' ) ) ; 
}else {__CvT__record_line____(__CvT_miT,89,2170);if ( __c >= _CharT2 ( 'A' ) && __c <= _CharT2 ( 'F' ) ) 
{__CvT__record_line____(__CvT_miT,89,2171);__ret = 10 + ( __c - _CharT2 ( 'A' ) ) ; 
}}}} 
}__CvT__record_line____(__CvT_miT,89,2173);return __ret ; 
} 

template < typename _CharT2 > 
typename __gnu_cxx :: __enable_if <! __is_char < _CharT2 >:: __value , 
int >:: __type 
_M_find ( const _CharT2 * __zero , size_t __len , _CharT2 __c ) const 
{ __CvT__record_line____(__CvT_miT,89,2180);
__CvT__record_line____(__CvT_miT,89,2181);int __ret = - 1 ; 
__CvT__record_line____(__CvT_miT,89,2182);const char_type * __q = char_traits < _CharT2 >:: find ( __zero , __len , __c ) ; 
__CvT__record_line____(__CvT_miT,89,2183);if ( __q ) 
{{ 
__CvT__record_line____(__CvT_miT,89,2185);__ret = __q - __zero ; 
__CvT__record_line____(__CvT_miT,89,2186);if ( __ret > 15 ) 
{__CvT__record_line____(__CvT_miT,89,2187);__ret -= 6 ; 
}} 
}__CvT__record_line____(__CvT_miT,89,2189);return __ret ; 
} 
# 2207 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , bool & ) const ; 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2213);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned short & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2218);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned int & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2223);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned long & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2228);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 


virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long long & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2234);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned long long & __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2239);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 


virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , float & ) const ; 

virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , 
double & ) const ; 







virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , 
long double & ) const ; 


virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , void *& ) const ; 
# 2270 "/usr/include/c++/5/bits/locale_facets.h" 3 
} ; 

template < typename _CharT , typename _InIter > 
locale :: id num_get < _CharT , _InIter >:: id ; 
# 2288 "/usr/include/c++/5/bits/locale_facets.h" 3 
template < typename _CharT , typename _OutIter > 
class num_put : public locale :: facet 
{ 
public : 



typedef _CharT char_type ; 
typedef _OutIter iter_type ; 



static locale :: id id ; 
# 2309 "/usr/include/c++/5/bits/locale_facets.h" 3 
explicit 
num_put ( size_t __refs = 0 ) : facet ( __refs ) { __CvT__record_line____(__CvT_miT,89,2310);} 
# 2327 "/usr/include/c++/5/bits/locale_facets.h" 3 
iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , bool __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2329);return this -> do_put ( __s , __io , __fill , __v ) ; } 
# 2369 "/usr/include/c++/5/bits/locale_facets.h" 3 
iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , long __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2371);return this -> do_put ( __s , __io , __fill , __v ) ; } 

iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , 
unsigned long __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2376);return this -> do_put ( __s , __io , __fill , __v ) ; } 


iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , long long __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2381);return this -> do_put ( __s , __io , __fill , __v ) ; } 

iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , 
unsigned long long __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2386);return this -> do_put ( __s , __io , __fill , __v ) ; } 
# 2432 "/usr/include/c++/5/bits/locale_facets.h" 3 
iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , double __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2434);return this -> do_put ( __s , __io , __fill , __v ) ; } 

iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , 
long double __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2439);return this -> do_put ( __s , __io , __fill , __v ) ; } 
# 2457 "/usr/include/c++/5/bits/locale_facets.h" 3 
iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , 
const void * __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2460);return this -> do_put ( __s , __io , __fill , __v ) ; } 

protected : 
template < typename _ValueT > 
iter_type 
_M_insert_float ( iter_type , ios_base & __io , char_type __fill , 
char __mod , _ValueT __v ) const ; 

void 
_M_group_float ( const char * __grouping , size_t __grouping_size , 
char_type __sep , const char_type * __p , char_type * __new , 
char_type * __cs , int & __len ) const ; 

template < typename _ValueT > 
iter_type 
_M_insert_int ( iter_type , ios_base & __io , char_type __fill , 
_ValueT __v ) const ; 

void 
_M_group_int ( const char * __grouping , size_t __grouping_size , 
char_type __sep , ios_base & __io , char_type * __new , 
char_type * __cs , int & __len ) const ; 

void 
_M_pad ( char_type __fill , streamsize __w , ios_base & __io , 
char_type * __new , const char_type * __cs , int & __len ) const ; 


virtual 
~ num_put ( ) { __CvT__record_line____(__CvT_miT,89,2489);} ; 
# 2505 "/usr/include/c++/5/bits/locale_facets.h" 3 
virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , bool __v ) const ; 

virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , long __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2510);return _M_insert_int ( __s , __io , __fill , __v ) ; } 

virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
unsigned long __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2515);return _M_insert_int ( __s , __io , __fill , __v ) ; } 


virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
long long __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2521);return _M_insert_int ( __s , __io , __fill , __v ) ; } 

virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
unsigned long long __v ) const 
{ __CvT__record_line____(__CvT_miT,89,2526);return _M_insert_int ( __s , __io , __fill , __v ) ; } 


virtual iter_type 
do_put ( iter_type , ios_base & , char_type , double ) const ; 






virtual iter_type 
do_put ( iter_type , ios_base & , char_type , long double ) const ; 


virtual iter_type 
do_put ( iter_type , ios_base & , char_type , const void * ) const ; 







} ; 

template < typename _CharT , typename _OutIter > 
locale :: id num_put < _CharT , _OutIter >:: id ; 









template < typename _CharT > 
inline bool 
isspace ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,89,2566);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: space , __c ) ; } 


template < typename _CharT > 
inline bool 
isprint ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,89,2572);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: print , __c ) ; } 


template < typename _CharT > 
inline bool 
iscntrl ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,89,2578);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: cntrl , __c ) ; } 


template < typename _CharT > 
inline bool 
isupper ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,89,2584);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: upper , __c ) ; } 


template < typename _CharT > 
inline bool 
islower ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,89,2590);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: lower , __c ) ; } 


template < typename _CharT > 
inline bool 
isalpha ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,89,2596);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: alpha , __c ) ; } 


template < typename _CharT > 
inline bool 
isdigit ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,89,2602);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: digit , __c ) ; } 


template < typename _CharT > 
inline bool 
ispunct ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,89,2608);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: punct , __c ) ; } 


template < typename _CharT > 
inline bool 
isxdigit ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,89,2614);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: xdigit , __c ) ; } 


template < typename _CharT > 
inline bool 
isalnum ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,89,2620);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: alnum , __c ) ; } 


template < typename _CharT > 
inline bool 
isgraph ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,89,2626);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: graph , __c ) ; } 
# 2637 "/usr/include/c++/5/bits/locale_facets.h" 3 
template < typename _CharT > 
inline _CharT 
toupper ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,89,2640);return use_facet < ctype < _CharT > > ( __loc ) . toupper ( __c ) ; } 


template < typename _CharT > 
inline _CharT 
tolower ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,89,2646);return use_facet < ctype < _CharT > > ( __loc ) . tolower ( __c ) ; } 


} 

# 1 "/usr/include/c++/5/bits/locale_facets.tcc" 1 3 
# 33 "/usr/include/c++/5/bits/locale_facets.tcc" 3 

# 34 "/usr/include/c++/5/bits/locale_facets.tcc" 3 

namespace std 
{ 




template < typename _Facet > 
struct __use_cache 
{ 
const _Facet * 
operator ( ) ( const locale & __loc ) const ; 
} ; 


template < typename _CharT > 
struct __use_cache < __numpunct_cache < _CharT > > 
{ 
const __numpunct_cache < _CharT >* 
operator ( ) ( const locale & __loc ) const 
{ __CvT__record_line____(__CvT_miT,95,54);
__CvT__record_line____(__CvT_miT,95,55);const size_t __i = numpunct < _CharT >:: id . _M_id ( ) ; 
__CvT__record_line____(__CvT_miT,95,56);const locale :: facet ** __caches = __loc . _M_impl -> _M_caches ; 
__CvT__record_line____(__CvT_miT,95,57);if ( ! __caches [ __i ] ) 
{{ 
__CvT__record_line____(__CvT_miT,95,59);__numpunct_cache < _CharT >* __tmp = 0 ; 
__CvT__record_line____(__CvT_miT,95,60);try 
{ 
__CvT__record_line____(__CvT_miT,95,62);__tmp = new __numpunct_cache < _CharT > ; 
__CvT__record_line____(__CvT_miT,95,63);__tmp -> _M_cache ( __loc ) ; 
} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,95,67);delete __tmp ; 
__CvT__record_line____(__CvT_miT,95,68);throw ; 
} 
__CvT__record_line____(__CvT_miT,95,70);__loc . _M_impl -> _M_install_cache ( __tmp , __i ) ; 
} 
}__CvT__record_line____(__CvT_miT,95,72);return static_cast < const __numpunct_cache < _CharT >*> ( __caches [ __i ] ) ; 
} 
} ; 

template < typename _CharT > 
void 
__numpunct_cache < _CharT >:: _M_cache ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,95,79);
__CvT__record_line____(__CvT_miT,95,80);const numpunct < _CharT >& __np = use_facet < numpunct < _CharT > > ( __loc ) ; 

__CvT__record_line____(__CvT_miT,95,82);char * __grouping = 0 ; 
__CvT__record_line____(__CvT_miT,95,83);_CharT * __truename = 0 ; 
__CvT__record_line____(__CvT_miT,95,84);_CharT * __falsename = 0 ; 
__CvT__record_line____(__CvT_miT,95,85);try 
{ 
__CvT__record_line____(__CvT_miT,95,87);const string & __g = __np . grouping ( ) ; 
__CvT__record_line____(__CvT_miT,95,88);_M_grouping_size = __g . size ( ) ; 
__CvT__record_line____(__CvT_miT,95,89);__grouping = new char [ _M_grouping_size ] ; 
__CvT__record_line____(__CvT_miT,95,90);__g . copy ( __grouping , _M_grouping_size ) ; 
__CvT__record_line____(__CvT_miT,95,91);_M_use_grouping = ( _M_grouping_size 
&& static_cast < signed char > ( __grouping [ 0 ] ) > 0 
&& ( __grouping [ 0 ] 
!= __gnu_cxx :: __numeric_traits < char >:: __max ) ) ; 

__CvT__record_line____(__CvT_miT,95,96);const basic_string < _CharT >& __tn = __np . truename ( ) ; 
__CvT__record_line____(__CvT_miT,95,97);_M_truename_size = __tn . size ( ) ; 
__CvT__record_line____(__CvT_miT,95,98);__truename = new _CharT [ _M_truename_size ] ; 
__CvT__record_line____(__CvT_miT,95,99);__tn . copy ( __truename , _M_truename_size ) ; 

__CvT__record_line____(__CvT_miT,95,101);const basic_string < _CharT >& __fn = __np . falsename ( ) ; 
__CvT__record_line____(__CvT_miT,95,102);_M_falsename_size = __fn . size ( ) ; 
__CvT__record_line____(__CvT_miT,95,103);__falsename = new _CharT [ _M_falsename_size ] ; 
__CvT__record_line____(__CvT_miT,95,104);__fn . copy ( __falsename , _M_falsename_size ) ; 

__CvT__record_line____(__CvT_miT,95,106);_M_decimal_point = __np . decimal_point ( ) ; 
__CvT__record_line____(__CvT_miT,95,107);_M_thousands_sep = __np . thousands_sep ( ) ; 

__CvT__record_line____(__CvT_miT,95,109);const ctype < _CharT >& __ct = use_facet < ctype < _CharT > > ( __loc ) ; 
__CvT__record_line____(__CvT_miT,95,110);__ct . widen ( __num_base :: _S_atoms_out , 
__num_base :: _S_atoms_out 
+ __num_base :: _S_oend , _M_atoms_out ) ; 
__CvT__record_line____(__CvT_miT,95,113);__ct . widen ( __num_base :: _S_atoms_in , 
__num_base :: _S_atoms_in 
+ __num_base :: _S_iend , _M_atoms_in ) ; 

__CvT__record_line____(__CvT_miT,95,117);_M_grouping = __grouping ; 
__CvT__record_line____(__CvT_miT,95,118);_M_truename = __truename ; 
__CvT__record_line____(__CvT_miT,95,119);_M_falsename = __falsename ; 
__CvT__record_line____(__CvT_miT,95,120);_M_allocated = true ; 
} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,95,124);delete [ ] __grouping ; 
__CvT__record_line____(__CvT_miT,95,125);delete [ ] __truename ; 
__CvT__record_line____(__CvT_miT,95,126);delete [ ] __falsename ; 
__CvT__record_line____(__CvT_miT,95,127);throw ; 
} 
} 
# 139 "/usr/include/c++/5/bits/locale_facets.tcc" 3 
bool 
__verify_grouping ( const char * __grouping , size_t __grouping_size , 
const string & __grouping_tmp ) throw ( ) ; 



template < typename _CharT , typename _InIter > 
__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
_InIter 
num_get < _CharT , _InIter >:: 
_M_extract_float ( _InIter __beg , _InIter __end , ios_base & __io , 
ios_base :: iostate & __err , string & __xtrc ) const 
{ __CvT__record_line____(__CvT_miT,95,151);
typedef char_traits < _CharT > __traits_type ; 
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,95,154);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,95,155);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,95,156);const __cache_type * __lc = __uc ( __loc ) ; 
__CvT__record_line____(__CvT_miT,95,157);const _CharT * __lit = __lc -> _M_atoms_in ; 
__CvT__record_line____(__CvT_miT,95,158);char_type __c = char_type ( ) ; 


__CvT__record_line____(__CvT_miT,95,161);bool __testeof = __beg == __end ; 


__CvT__record_line____(__CvT_miT,95,164);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,95,166);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,95,167);const bool __plus = __c == __lit [ __num_base :: _S_iplus ] ; 
__CvT__record_line____(__CvT_miT,95,168);if ( ( __plus || __c == __lit [ __num_base :: _S_iminus ] ) 
&& ! ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
&& ! ( __c == __lc -> _M_decimal_point ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,172);__xtrc += __plus ? '+' : '-' ; 
__CvT__record_line____(__CvT_miT,95,173);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,95,174);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,95,176);__testeof = true ; 
}} 
}} 


}__CvT__record_line____(__CvT_miT,95,181);bool __found_mantissa = false ; 
__CvT__record_line____(__CvT_miT,95,182);int __sep_pos = 0 ; 
__CvT__record_line____(__CvT_miT,95,183);while ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,95,185);if ( ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
|| __c == __lc -> _M_decimal_point ) 
{__CvT__record_line____(__CvT_miT,95,187);break ; 
}else {__CvT__record_line____(__CvT_miT,95,188);if ( __c == __lit [ __num_base :: _S_izero ] ) 
{{ 
__CvT__record_line____(__CvT_miT,95,190);if ( ! __found_mantissa ) 
{{ 
__CvT__record_line____(__CvT_miT,95,192);__xtrc += '0' ; 
__CvT__record_line____(__CvT_miT,95,193);__found_mantissa = true ; 
} 
}__CvT__record_line____(__CvT_miT,95,195);++ __sep_pos ; 

__CvT__record_line____(__CvT_miT,95,197);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,95,198);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,95,200);__testeof = true ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,95,203);break ; 
}}} 


}__CvT__record_line____(__CvT_miT,95,207);bool __found_dec = false ; 
__CvT__record_line____(__CvT_miT,95,208);bool __found_sci = false ; 
__CvT__record_line____(__CvT_miT,95,209);string __found_grouping ; 
__CvT__record_line____(__CvT_miT,95,210);if ( __lc -> _M_use_grouping ) 
{__CvT__record_line____(__CvT_miT,95,211);__found_grouping . reserve ( 32 ) ; 
}__CvT__record_line____(__CvT_miT,95,212);const char_type * __lit_zero = __lit + __num_base :: _S_izero ; 

__CvT__record_line____(__CvT_miT,95,214);if ( ! __lc -> _M_allocated ) 

{__CvT__record_line____(__CvT_miT,95,216);while ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,95,218);const int __digit = _M_find ( __lit_zero , 10 , __c ) ; 
__CvT__record_line____(__CvT_miT,95,219);if ( __digit != - 1 ) 
{{ 
__CvT__record_line____(__CvT_miT,95,221);__xtrc += '0' + __digit ; 
__CvT__record_line____(__CvT_miT,95,222);__found_mantissa = true ; 
} 
}else {__CvT__record_line____(__CvT_miT,95,224);if ( __c == __lc -> _M_decimal_point 
&& ! __found_dec && ! __found_sci ) 
{{ 
__CvT__record_line____(__CvT_miT,95,227);__xtrc += '.' ; 
__CvT__record_line____(__CvT_miT,95,228);__found_dec = true ; 
} 
}else {__CvT__record_line____(__CvT_miT,95,230);if ( ( __c == __lit [ __num_base :: _S_ie ] 
|| __c == __lit [ __num_base :: _S_iE ] ) 
&& ! __found_sci && __found_mantissa ) 
{{ 

__CvT__record_line____(__CvT_miT,95,235);__xtrc += 'e' ; 
__CvT__record_line____(__CvT_miT,95,236);__found_sci = true ; 


__CvT__record_line____(__CvT_miT,95,239);if ( ++ __beg != __end ) 
{{ 
__CvT__record_line____(__CvT_miT,95,241);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,95,242);const bool __plus = __c == __lit [ __num_base :: _S_iplus ] ; 
__CvT__record_line____(__CvT_miT,95,243);if ( __plus || __c == __lit [ __num_base :: _S_iminus ] ) 
{__CvT__record_line____(__CvT_miT,95,244);__xtrc += __plus ? '+' : '-' ; 
}else {
__CvT__record_line____(__CvT_miT,95,246);continue ; 
}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,95,250);__testeof = true ; 
__CvT__record_line____(__CvT_miT,95,251);break ; 
} 
}} 
}else {
__CvT__record_line____(__CvT_miT,95,255);break ; 

}}}__CvT__record_line____(__CvT_miT,95,257);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,95,258);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,95,260);__testeof = true ; 
}} 
}}else {
__CvT__record_line____(__CvT_miT,95,263);while ( ! __testeof ) 
{{ 


__CvT__record_line____(__CvT_miT,95,267);if ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
{{ 
__CvT__record_line____(__CvT_miT,95,269);if ( ! __found_dec && ! __found_sci ) 
{{ 


__CvT__record_line____(__CvT_miT,95,273);if ( __sep_pos ) 
{{ 
__CvT__record_line____(__CvT_miT,95,275);__found_grouping += static_cast < char > ( __sep_pos ) ; 
__CvT__record_line____(__CvT_miT,95,276);__sep_pos = 0 ; 
} 
}else {
{ 


__CvT__record_line____(__CvT_miT,95,282);__xtrc . clear ( ) ; 
__CvT__record_line____(__CvT_miT,95,283);break ; 
} 
}} 
}else {
__CvT__record_line____(__CvT_miT,95,287);break ; 
}} 
}else {__CvT__record_line____(__CvT_miT,95,289);if ( __c == __lc -> _M_decimal_point ) 
{{ 
__CvT__record_line____(__CvT_miT,95,291);if ( ! __found_dec && ! __found_sci ) 
{{ 



__CvT__record_line____(__CvT_miT,95,296);if ( __found_grouping . size ( ) ) 
{__CvT__record_line____(__CvT_miT,95,297);__found_grouping += static_cast < char > ( __sep_pos ) ; 
}__CvT__record_line____(__CvT_miT,95,298);__xtrc += '.' ; 
__CvT__record_line____(__CvT_miT,95,299);__found_dec = true ; 
} 
}else {
__CvT__record_line____(__CvT_miT,95,302);break ; 
}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,95,306);const char_type * __q = 
__traits_type :: find ( __lit_zero , 10 , __c ) ; 
__CvT__record_line____(__CvT_miT,95,308);if ( __q ) 
{{ 
__CvT__record_line____(__CvT_miT,95,310);__xtrc += '0' + ( __q - __lit_zero ) ; 
__CvT__record_line____(__CvT_miT,95,311);__found_mantissa = true ; 
__CvT__record_line____(__CvT_miT,95,312);++ __sep_pos ; 
} 
}else {__CvT__record_line____(__CvT_miT,95,314);if ( ( __c == __lit [ __num_base :: _S_ie ] 
|| __c == __lit [ __num_base :: _S_iE ] ) 
&& ! __found_sci && __found_mantissa ) 
{{ 

__CvT__record_line____(__CvT_miT,95,319);if ( __found_grouping . size ( ) && ! __found_dec ) 
{__CvT__record_line____(__CvT_miT,95,320);__found_grouping += static_cast < char > ( __sep_pos ) ; 
}__CvT__record_line____(__CvT_miT,95,321);__xtrc += 'e' ; 
__CvT__record_line____(__CvT_miT,95,322);__found_sci = true ; 


__CvT__record_line____(__CvT_miT,95,325);if ( ++ __beg != __end ) 
{{ 
__CvT__record_line____(__CvT_miT,95,327);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,95,328);const bool __plus = __c == __lit [ __num_base :: _S_iplus ] ; 
__CvT__record_line____(__CvT_miT,95,329);if ( ( __plus || __c == __lit [ __num_base :: _S_iminus ] ) 
&& ! ( __lc -> _M_use_grouping 
&& __c == __lc -> _M_thousands_sep ) 
&& ! ( __c == __lc -> _M_decimal_point ) ) 
{__CvT__record_line____(__CvT_miT,95,333);__xtrc += __plus ? '+' : '-' ; 
}else {
__CvT__record_line____(__CvT_miT,95,335);continue ; 
}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,95,339);__testeof = true ; 
__CvT__record_line____(__CvT_miT,95,340);break ; 
} 
}} 
}else {
__CvT__record_line____(__CvT_miT,95,344);break ; 
}}} 

}}__CvT__record_line____(__CvT_miT,95,347);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,95,348);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,95,350);__testeof = true ; 
}} 



}}__CvT__record_line____(__CvT_miT,95,355);if ( __found_grouping . size ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,95,358);if ( ! __found_dec && ! __found_sci ) 
{__CvT__record_line____(__CvT_miT,95,359);__found_grouping += static_cast < char > ( __sep_pos ) ; 

}__CvT__record_line____(__CvT_miT,95,361);if ( ! std :: __verify_grouping ( __lc -> _M_grouping , 
__lc -> _M_grouping_size , 
__found_grouping ) ) 
{__CvT__record_line____(__CvT_miT,95,364);__err = ios_base :: failbit ; 
}} 

}__CvT__record_line____(__CvT_miT,95,367);return __beg ; 
} 

template < typename _CharT , typename _InIter > 
template < typename _ValueT > 
__attribute ( ( __abi_tag__ ( "cxx11" ) ) ) 
_InIter 
num_get < _CharT , _InIter >:: 
_M_extract_int ( _InIter __beg , _InIter __end , ios_base & __io , 
ios_base :: iostate & __err , _ValueT & __v ) const 
{ __CvT__record_line____(__CvT_miT,95,377);
typedef char_traits < _CharT > __traits_type ; 
using __gnu_cxx :: __add_unsigned ; 
typedef typename __add_unsigned < _ValueT >:: __type __unsigned_type ; 
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,95,382);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,95,383);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,95,384);const __cache_type * __lc = __uc ( __loc ) ; 
__CvT__record_line____(__CvT_miT,95,385);const _CharT * __lit = __lc -> _M_atoms_in ; 
__CvT__record_line____(__CvT_miT,95,386);char_type __c = char_type ( ) ; 


__CvT__record_line____(__CvT_miT,95,389);const ios_base :: fmtflags __basefield = __io . flags ( ) 
& ios_base :: basefield ; 
__CvT__record_line____(__CvT_miT,95,391);const bool __oct = __basefield == ios_base :: oct ; 
__CvT__record_line____(__CvT_miT,95,392);int __base = __oct ? 8 : ( __basefield == ios_base :: hex ? 16 : 10 ) ; 


__CvT__record_line____(__CvT_miT,95,395);bool __testeof = __beg == __end ; 


__CvT__record_line____(__CvT_miT,95,398);bool __negative = false ; 
__CvT__record_line____(__CvT_miT,95,399);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,95,401);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,95,402);__negative = __c == __lit [ __num_base :: _S_iminus ] ; 
__CvT__record_line____(__CvT_miT,95,403);if ( ( __negative || __c == __lit [ __num_base :: _S_iplus ] ) 
&& ! ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
&& ! ( __c == __lc -> _M_decimal_point ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,407);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,95,408);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,95,410);__testeof = true ; 
}} 
}} 



}__CvT__record_line____(__CvT_miT,95,416);bool __found_zero = false ; 
__CvT__record_line____(__CvT_miT,95,417);int __sep_pos = 0 ; 
__CvT__record_line____(__CvT_miT,95,418);while ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,95,420);if ( ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
|| __c == __lc -> _M_decimal_point ) 
{__CvT__record_line____(__CvT_miT,95,422);break ; 
}else {__CvT__record_line____(__CvT_miT,95,423);if ( __c == __lit [ __num_base :: _S_izero ] 
&& ( ! __found_zero || __base == 10 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,426);__found_zero = true ; 
__CvT__record_line____(__CvT_miT,95,427);++ __sep_pos ; 
__CvT__record_line____(__CvT_miT,95,428);if ( __basefield == 0 ) 
{__CvT__record_line____(__CvT_miT,95,429);__base = 8 ; 
}__CvT__record_line____(__CvT_miT,95,430);if ( __base == 8 ) 
{__CvT__record_line____(__CvT_miT,95,431);__sep_pos = 0 ; 
}} 
}else {__CvT__record_line____(__CvT_miT,95,433);if ( __found_zero 
&& ( __c == __lit [ __num_base :: _S_ix ] 
|| __c == __lit [ __num_base :: _S_iX ] ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,437);if ( __basefield == 0 ) 
{__CvT__record_line____(__CvT_miT,95,438);__base = 16 ; 
}__CvT__record_line____(__CvT_miT,95,439);if ( __base == 16 ) 
{{ 
__CvT__record_line____(__CvT_miT,95,441);__found_zero = false ; 
__CvT__record_line____(__CvT_miT,95,442);__sep_pos = 0 ; 
} 
}else {
__CvT__record_line____(__CvT_miT,95,445);break ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,95,448);break ; 

}}}__CvT__record_line____(__CvT_miT,95,450);if ( ++ __beg != __end ) 
{{ 
__CvT__record_line____(__CvT_miT,95,452);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,95,453);if ( ! __found_zero ) 
{__CvT__record_line____(__CvT_miT,95,454);break ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,95,457);__testeof = true ; 
}} 



}__CvT__record_line____(__CvT_miT,95,462);const size_t __len = ( __base == 16 ? __num_base :: _S_iend 
- __num_base :: _S_izero : __base ) ; 


__CvT__record_line____(__CvT_miT,95,466);string __found_grouping ; 
__CvT__record_line____(__CvT_miT,95,467);if ( __lc -> _M_use_grouping ) 
{__CvT__record_line____(__CvT_miT,95,468);__found_grouping . reserve ( 32 ) ; 
}__CvT__record_line____(__CvT_miT,95,469);bool __testfail = false ; 
__CvT__record_line____(__CvT_miT,95,470);bool __testoverflow = false ; 
__CvT__record_line____(__CvT_miT,95,471);const __unsigned_type __max = 
( __negative && __gnu_cxx :: __numeric_traits < _ValueT >:: __is_signed ) 
? - __gnu_cxx :: __numeric_traits < _ValueT >:: __min 
: __gnu_cxx :: __numeric_traits < _ValueT >:: __max ; 
__CvT__record_line____(__CvT_miT,95,475);const __unsigned_type __smax = __max / __base ; 
__CvT__record_line____(__CvT_miT,95,476);__unsigned_type __result = 0 ; 
__CvT__record_line____(__CvT_miT,95,477);int __digit = 0 ; 
__CvT__record_line____(__CvT_miT,95,478);const char_type * __lit_zero = __lit + __num_base :: _S_izero ; 

__CvT__record_line____(__CvT_miT,95,480);if ( ! __lc -> _M_allocated ) 

{__CvT__record_line____(__CvT_miT,95,482);while ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,95,484);__digit = _M_find ( __lit_zero , __len , __c ) ; 
__CvT__record_line____(__CvT_miT,95,485);if ( __digit == - 1 ) 
{__CvT__record_line____(__CvT_miT,95,486);break ; 

}__CvT__record_line____(__CvT_miT,95,488);if ( __result > __smax ) 
{__CvT__record_line____(__CvT_miT,95,489);__testoverflow = true ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,95,492);__result *= __base ; 
__CvT__record_line____(__CvT_miT,95,493);__testoverflow |= __result > __max - __digit ; 
__CvT__record_line____(__CvT_miT,95,494);__result += __digit ; 
__CvT__record_line____(__CvT_miT,95,495);++ __sep_pos ; 
} 

}__CvT__record_line____(__CvT_miT,95,498);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,95,499);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,95,501);__testeof = true ; 
}} 
}}else {
__CvT__record_line____(__CvT_miT,95,504);while ( ! __testeof ) 
{{ 


__CvT__record_line____(__CvT_miT,95,508);if ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
{{ 


__CvT__record_line____(__CvT_miT,95,512);if ( __sep_pos ) 
{{ 
__CvT__record_line____(__CvT_miT,95,514);__found_grouping += static_cast < char > ( __sep_pos ) ; 
__CvT__record_line____(__CvT_miT,95,515);__sep_pos = 0 ; 
} 
}else {
{ 
__CvT__record_line____(__CvT_miT,95,519);__testfail = true ; 
__CvT__record_line____(__CvT_miT,95,520);break ; 
} 
}} 
}else {__CvT__record_line____(__CvT_miT,95,523);if ( __c == __lc -> _M_decimal_point ) 
{__CvT__record_line____(__CvT_miT,95,524);break ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,95,527);const char_type * __q = 
__traits_type :: find ( __lit_zero , __len , __c ) ; 
__CvT__record_line____(__CvT_miT,95,529);if ( ! __q ) 
{__CvT__record_line____(__CvT_miT,95,530);break ; 

}__CvT__record_line____(__CvT_miT,95,532);__digit = __q - __lit_zero ; 
__CvT__record_line____(__CvT_miT,95,533);if ( __digit > 15 ) 
{__CvT__record_line____(__CvT_miT,95,534);__digit -= 6 ; 
}__CvT__record_line____(__CvT_miT,95,535);if ( __result > __smax ) 
{__CvT__record_line____(__CvT_miT,95,536);__testoverflow = true ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,95,539);__result *= __base ; 
__CvT__record_line____(__CvT_miT,95,540);__testoverflow |= __result > __max - __digit ; 
__CvT__record_line____(__CvT_miT,95,541);__result += __digit ; 
__CvT__record_line____(__CvT_miT,95,542);++ __sep_pos ; 
} 
}} 

}}__CvT__record_line____(__CvT_miT,95,546);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,95,547);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,95,549);__testeof = true ; 
}} 



}}__CvT__record_line____(__CvT_miT,95,554);if ( __found_grouping . size ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,95,557);__found_grouping += static_cast < char > ( __sep_pos ) ; 

__CvT__record_line____(__CvT_miT,95,559);if ( ! std :: __verify_grouping ( __lc -> _M_grouping , 
__lc -> _M_grouping_size , 
__found_grouping ) ) 
{__CvT__record_line____(__CvT_miT,95,562);__err = ios_base :: failbit ; 
}} 



}__CvT__record_line____(__CvT_miT,95,567);if ( ( ! __sep_pos && ! __found_zero && ! __found_grouping . size ( ) ) 
|| __testfail ) 
{{ 
__CvT__record_line____(__CvT_miT,95,570);__v = 0 ; 
__CvT__record_line____(__CvT_miT,95,571);__err = ios_base :: failbit ; 
} 
}else {__CvT__record_line____(__CvT_miT,95,573);if ( __testoverflow ) 
{{ 
__CvT__record_line____(__CvT_miT,95,575);if ( __negative 
&& __gnu_cxx :: __numeric_traits < _ValueT >:: __is_signed ) 
{__CvT__record_line____(__CvT_miT,95,577);__v = __gnu_cxx :: __numeric_traits < _ValueT >:: __min ; 
}else {
__CvT__record_line____(__CvT_miT,95,579);__v = __gnu_cxx :: __numeric_traits < _ValueT >:: __max ; 
}__CvT__record_line____(__CvT_miT,95,580);__err = ios_base :: failbit ; 
} 
}else {
__CvT__record_line____(__CvT_miT,95,583);__v = __negative ? - __result : __result ; 

}}__CvT__record_line____(__CvT_miT,95,585);if ( __testeof ) 
{__CvT__record_line____(__CvT_miT,95,586);__err |= ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,95,587);return __beg ; 
} 



template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , bool & __v ) const 
{ __CvT__record_line____(__CvT_miT,95,597);
__CvT__record_line____(__CvT_miT,95,598);if ( ! ( __io . flags ( ) & ios_base :: boolalpha ) ) 
{{ 



__CvT__record_line____(__CvT_miT,95,603);long __l = - 1 ; 
__CvT__record_line____(__CvT_miT,95,604);__beg = _M_extract_int ( __beg , __end , __io , __err , __l ) ; 
__CvT__record_line____(__CvT_miT,95,605);if ( __l == 0 || __l == 1 ) 
{__CvT__record_line____(__CvT_miT,95,606);__v = bool ( __l ) ; 
}else {
{ 


__CvT__record_line____(__CvT_miT,95,611);__v = true ; 
__CvT__record_line____(__CvT_miT,95,612);__err = ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,95,613);if ( __beg == __end ) 
{__CvT__record_line____(__CvT_miT,95,614);__err |= ios_base :: eofbit ; 
}} 
}} 
}else {
{ 

typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,95,621);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,95,622);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,95,623);const __cache_type * __lc = __uc ( __loc ) ; 

__CvT__record_line____(__CvT_miT,95,625);bool __testf = true ; 
__CvT__record_line____(__CvT_miT,95,626);bool __testt = true ; 
__CvT__record_line____(__CvT_miT,95,627);bool __donef = __lc -> _M_falsename_size == 0 ; 
__CvT__record_line____(__CvT_miT,95,628);bool __donet = __lc -> _M_truename_size == 0 ; 
__CvT__record_line____(__CvT_miT,95,629);bool __testeof = false ; 
__CvT__record_line____(__CvT_miT,95,630);size_t __n = 0 ; 
__CvT__record_line____(__CvT_miT,95,631);while ( ! __donef || ! __donet ) 
{{ 
__CvT__record_line____(__CvT_miT,95,633);if ( __beg == __end ) 
{{ 
__CvT__record_line____(__CvT_miT,95,635);__testeof = true ; 
__CvT__record_line____(__CvT_miT,95,636);break ; 
} 

}__CvT__record_line____(__CvT_miT,95,639);const char_type __c = * __beg ; 

__CvT__record_line____(__CvT_miT,95,641);if ( ! __donef ) 
{__CvT__record_line____(__CvT_miT,95,642);__testf = __c == __lc -> _M_falsename [ __n ] ; 

}__CvT__record_line____(__CvT_miT,95,644);if ( ! __testf && __donet ) 
{__CvT__record_line____(__CvT_miT,95,645);break ; 

}__CvT__record_line____(__CvT_miT,95,647);if ( ! __donet ) 
{__CvT__record_line____(__CvT_miT,95,648);__testt = __c == __lc -> _M_truename [ __n ] ; 

}__CvT__record_line____(__CvT_miT,95,650);if ( ! __testt && __donef ) 
{__CvT__record_line____(__CvT_miT,95,651);break ; 

}__CvT__record_line____(__CvT_miT,95,653);if ( ! __testt && ! __testf ) 
{__CvT__record_line____(__CvT_miT,95,654);break ; 

}__CvT__record_line____(__CvT_miT,95,656);++ __n ; 
__CvT__record_line____(__CvT_miT,95,657);++ __beg ; 

__CvT__record_line____(__CvT_miT,95,659);__donef = ! __testf || __n >= __lc -> _M_falsename_size ; 
__CvT__record_line____(__CvT_miT,95,660);__donet = ! __testt || __n >= __lc -> _M_truename_size ; 
} 
}__CvT__record_line____(__CvT_miT,95,662);if ( __testf && __n == __lc -> _M_falsename_size && __n ) 
{{ 
__CvT__record_line____(__CvT_miT,95,664);__v = false ; 
__CvT__record_line____(__CvT_miT,95,665);if ( __testt && __n == __lc -> _M_truename_size ) 
{__CvT__record_line____(__CvT_miT,95,666);__err = ios_base :: failbit ; 
}else {
__CvT__record_line____(__CvT_miT,95,668);__err = __testeof ? ios_base :: eofbit : ios_base :: goodbit ; 
}} 
}else {__CvT__record_line____(__CvT_miT,95,670);if ( __testt && __n == __lc -> _M_truename_size && __n ) 
{{ 
__CvT__record_line____(__CvT_miT,95,672);__v = true ; 
__CvT__record_line____(__CvT_miT,95,673);__err = __testeof ? ios_base :: eofbit : ios_base :: goodbit ; 
} 
}else {
{ 


__CvT__record_line____(__CvT_miT,95,679);__v = false ; 
__CvT__record_line____(__CvT_miT,95,680);__err = ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,95,681);if ( __testeof ) 
{__CvT__record_line____(__CvT_miT,95,682);__err |= ios_base :: eofbit ; 
}} 
}}} 
}__CvT__record_line____(__CvT_miT,95,685);return __beg ; 
} 

template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , float & __v ) const 
{ __CvT__record_line____(__CvT_miT,95,693);
__CvT__record_line____(__CvT_miT,95,694);string __xtrc ; 
__CvT__record_line____(__CvT_miT,95,695);__xtrc . reserve ( 32 ) ; 
__CvT__record_line____(__CvT_miT,95,696);__beg = _M_extract_float ( __beg , __end , __io , __err , __xtrc ) ; 
__CvT__record_line____(__CvT_miT,95,697);std :: __convert_to_v ( __xtrc . c_str ( ) , __v , __err , _S_get_c_locale ( ) ) ; 
__CvT__record_line____(__CvT_miT,95,698);if ( __beg == __end ) 
{__CvT__record_line____(__CvT_miT,95,699);__err |= ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,95,700);return __beg ; 
} 

template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , double & __v ) const 
{ __CvT__record_line____(__CvT_miT,95,708);
__CvT__record_line____(__CvT_miT,95,709);string __xtrc ; 
__CvT__record_line____(__CvT_miT,95,710);__xtrc . reserve ( 32 ) ; 
__CvT__record_line____(__CvT_miT,95,711);__beg = _M_extract_float ( __beg , __end , __io , __err , __xtrc ) ; 
__CvT__record_line____(__CvT_miT,95,712);std :: __convert_to_v ( __xtrc . c_str ( ) , __v , __err , _S_get_c_locale ( ) ) ; 
__CvT__record_line____(__CvT_miT,95,713);if ( __beg == __end ) 
{__CvT__record_line____(__CvT_miT,95,714);__err |= ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,95,715);return __beg ; 
} 
# 735 "/usr/include/c++/5/bits/locale_facets.tcc" 3 
template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long double & __v ) const 
{ __CvT__record_line____(__CvT_miT,95,740);
__CvT__record_line____(__CvT_miT,95,741);string __xtrc ; 
__CvT__record_line____(__CvT_miT,95,742);__xtrc . reserve ( 32 ) ; 
__CvT__record_line____(__CvT_miT,95,743);__beg = _M_extract_float ( __beg , __end , __io , __err , __xtrc ) ; 
__CvT__record_line____(__CvT_miT,95,744);std :: __convert_to_v ( __xtrc . c_str ( ) , __v , __err , _S_get_c_locale ( ) ) ; 
__CvT__record_line____(__CvT_miT,95,745);if ( __beg == __end ) 
{__CvT__record_line____(__CvT_miT,95,746);__err |= ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,95,747);return __beg ; 
} 

template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , void *& __v ) const 
{ __CvT__record_line____(__CvT_miT,95,755);

typedef ios_base :: fmtflags fmtflags ; 
__CvT__record_line____(__CvT_miT,95,758);const fmtflags __fmt = __io . flags ( ) ; 
__CvT__record_line____(__CvT_miT,95,759);__io . flags ( ( __fmt & ~ ios_base :: basefield ) | ios_base :: hex ) ; 

typedef __gnu_cxx :: __conditional_type < ( sizeof ( void * ) 
<= sizeof ( unsigned long ) ) , 
unsigned long , unsigned long long >:: __type _UIntPtrType ; 

__CvT__record_line____(__CvT_miT,95,765);_UIntPtrType __ul ; 
__CvT__record_line____(__CvT_miT,95,766);__beg = _M_extract_int ( __beg , __end , __io , __err , __ul ) ; 


__CvT__record_line____(__CvT_miT,95,769);__io . flags ( __fmt ) ; 

__CvT__record_line____(__CvT_miT,95,771);__v = reinterpret_cast < void *> ( __ul ) ; 
__CvT__record_line____(__CvT_miT,95,772);return __beg ; 
} 



template < typename _CharT , typename _OutIter > 
void 
num_put < _CharT , _OutIter >:: 
_M_pad ( _CharT __fill , streamsize __w , ios_base & __io , 
_CharT * __new , const _CharT * __cs , int & __len ) const 
{ __CvT__record_line____(__CvT_miT,95,782);


__CvT__record_line____(__CvT_miT,95,785);__pad < _CharT , char_traits < _CharT > >:: _S_pad ( __io , __fill , __new , 
__cs , __w , __len ) ; 
__CvT__record_line____(__CvT_miT,95,787);__len = static_cast < int > ( __w ) ; 
} 



template < typename _CharT , typename _ValueT > 
int 
__int_to_char ( _CharT * __bufend , _ValueT __v , const _CharT * __lit , 
ios_base :: fmtflags __flags , bool __dec ) 
{ __CvT__record_line____(__CvT_miT,95,796);
__CvT__record_line____(__CvT_miT,95,797);_CharT * __buf = __bufend ; 
__CvT__record_line____(__CvT_miT,95,798);if ( __builtin_expect ( __dec , true ) ) 
{{ 

__CvT__record_line____(__CvT_miT,95,801);do {
{ 
__CvT__record_line____(__CvT_miT,95,803);*-- __buf = __lit [ ( __v % 10 ) + __num_base :: _S_odigits ] ; 
__CvT__record_line____(__CvT_miT,95,804);__v /= 10 ; 
} 
}while ( __v != 0 ) ;
} 
}else {__CvT__record_line____(__CvT_miT,95,808);if ( ( __flags & ios_base :: basefield ) == ios_base :: oct ) 
{{ 

__CvT__record_line____(__CvT_miT,95,811);do {
{ 
__CvT__record_line____(__CvT_miT,95,813);*-- __buf = __lit [ ( __v & 0x7 ) + __num_base :: _S_odigits ] ; 
__CvT__record_line____(__CvT_miT,95,814);__v >>= 3 ; 
} 
}while ( __v != 0 ) ;
} 
}else {
{ 

__CvT__record_line____(__CvT_miT,95,821);const bool __uppercase = __flags & ios_base :: uppercase ; 
__CvT__record_line____(__CvT_miT,95,822);const int __case_offset = __uppercase ? __num_base :: _S_oudigits 
: __num_base :: _S_odigits ; 
__CvT__record_line____(__CvT_miT,95,824);do {
{ 
__CvT__record_line____(__CvT_miT,95,826);*-- __buf = __lit [ ( __v & 0xf ) + __case_offset ] ; 
__CvT__record_line____(__CvT_miT,95,827);__v >>= 4 ; 
} 
}while ( __v != 0 ) ;
} 
}}__CvT__record_line____(__CvT_miT,95,831);return __bufend - __buf ; 
} 



template < typename _CharT , typename _OutIter > 
void 
num_put < _CharT , _OutIter >:: 
_M_group_int ( const char * __grouping , size_t __grouping_size , _CharT __sep , 
ios_base & , _CharT * __new , _CharT * __cs , int & __len ) const 
{ __CvT__record_line____(__CvT_miT,95,841);
__CvT__record_line____(__CvT_miT,95,842);_CharT * __p = std :: __add_grouping ( __new , __sep , __grouping , 
__grouping_size , __cs , __cs + __len ) ; 
__CvT__record_line____(__CvT_miT,95,844);__len = __p - __new ; 
} 

template < typename _CharT , typename _OutIter > 
template < typename _ValueT > 
_OutIter 
num_put < _CharT , _OutIter >:: 
_M_insert_int ( _OutIter __s , ios_base & __io , _CharT __fill , 
_ValueT __v ) const 
{ __CvT__record_line____(__CvT_miT,95,853);
using __gnu_cxx :: __add_unsigned ; 
typedef typename __add_unsigned < _ValueT >:: __type __unsigned_type ; 
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,95,857);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,95,858);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,95,859);const __cache_type * __lc = __uc ( __loc ) ; 
__CvT__record_line____(__CvT_miT,95,860);const _CharT * __lit = __lc -> _M_atoms_out ; 
__CvT__record_line____(__CvT_miT,95,861);const ios_base :: fmtflags __flags = __io . flags ( ) ; 


__CvT__record_line____(__CvT_miT,95,864);const int __ilen = 5 * sizeof ( _ValueT ) ; 
__CvT__record_line____(__CvT_miT,95,865);_CharT * __cs = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __ilen ) ) ; 



__CvT__record_line____(__CvT_miT,95,870);const ios_base :: fmtflags __basefield = __flags & ios_base :: basefield ; 
__CvT__record_line____(__CvT_miT,95,871);const bool __dec = ( __basefield != ios_base :: oct 
&& __basefield != ios_base :: hex ) ; 
__CvT__record_line____(__CvT_miT,95,873);const __unsigned_type __u = ( ( __v > 0 || ! __dec ) 
? __unsigned_type ( __v ) 
: - __unsigned_type ( __v ) ) ; 
__CvT__record_line____(__CvT_miT,95,876);int __len = __int_to_char ( __cs + __ilen , __u , __lit , __flags , __dec ) ; 
__CvT__record_line____(__CvT_miT,95,877);__cs += __ilen - __len ; 


__CvT__record_line____(__CvT_miT,95,880);if ( __lc -> _M_use_grouping ) 
{{ 


__CvT__record_line____(__CvT_miT,95,884);_CharT * __cs2 = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* ( __len + 1 ) 
* 2 ) ) ; 
__CvT__record_line____(__CvT_miT,95,887);_M_group_int ( __lc -> _M_grouping , __lc -> _M_grouping_size , 
__lc -> _M_thousands_sep , __io , __cs2 + 2 , __cs , __len ) ; 
__CvT__record_line____(__CvT_miT,95,889);__cs = __cs2 + 2 ; 
} 


}__CvT__record_line____(__CvT_miT,95,893);if ( __builtin_expect ( __dec , true ) ) 
{{ 

__CvT__record_line____(__CvT_miT,95,896);if ( __v >= 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,95,898);if ( bool ( __flags & ios_base :: showpos ) 
&& __gnu_cxx :: __numeric_traits < _ValueT >:: __is_signed ) 
{__CvT__record_line____(__CvT_miT,95,900);*-- __cs = __lit [ __num_base :: _S_oplus ] , ++ __len ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,95,903);*-- __cs = __lit [ __num_base :: _S_ominus ] , ++ __len ; 
}} 
}else {__CvT__record_line____(__CvT_miT,95,905);if ( bool ( __flags & ios_base :: showbase ) && __v ) 
{{ 
__CvT__record_line____(__CvT_miT,95,907);if ( __basefield == ios_base :: oct ) 
{__CvT__record_line____(__CvT_miT,95,908);*-- __cs = __lit [ __num_base :: _S_odigits ] , ++ __len ; 
}else {
{ 

__CvT__record_line____(__CvT_miT,95,912);const bool __uppercase = __flags & ios_base :: uppercase ; 
__CvT__record_line____(__CvT_miT,95,913);*-- __cs = __lit [ __num_base :: _S_ox + __uppercase ] ; 

__CvT__record_line____(__CvT_miT,95,915);*-- __cs = __lit [ __num_base :: _S_odigits ] ; 
__CvT__record_line____(__CvT_miT,95,916);__len += 2 ; 
} 
}} 


}}__CvT__record_line____(__CvT_miT,95,921);const streamsize __w = __io . width ( ) ; 
__CvT__record_line____(__CvT_miT,95,922);if ( __w > static_cast < streamsize > ( __len ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,924);_CharT * __cs3 = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __w ) ) ; 
__CvT__record_line____(__CvT_miT,95,926);_M_pad ( __fill , __w , __io , __cs3 , __cs , __len ) ; 
__CvT__record_line____(__CvT_miT,95,927);__cs = __cs3 ; 
} 
}__CvT__record_line____(__CvT_miT,95,929);__io . width ( 0 ) ; 



__CvT__record_line____(__CvT_miT,95,933);return std :: __write ( __s , __cs , __len ) ; 
} 

template < typename _CharT , typename _OutIter > 
void 
num_put < _CharT , _OutIter >:: 
_M_group_float ( const char * __grouping , size_t __grouping_size , 
_CharT __sep , const _CharT * __p , _CharT * __new , 
_CharT * __cs , int & __len ) const 
{ __CvT__record_line____(__CvT_miT,95,942);



__CvT__record_line____(__CvT_miT,95,946);const int __declen = __p ? __p - __cs : __len ; 
__CvT__record_line____(__CvT_miT,95,947);_CharT * __p2 = std :: __add_grouping ( __new , __sep , __grouping , 
__grouping_size , 
__cs , __cs + __declen ) ; 


__CvT__record_line____(__CvT_miT,95,952);int __newlen = __p2 - __new ; 
__CvT__record_line____(__CvT_miT,95,953);if ( __p ) 
{{ 
__CvT__record_line____(__CvT_miT,95,955);char_traits < _CharT >:: copy ( __p2 , __p , __len - __declen ) ; 
__CvT__record_line____(__CvT_miT,95,956);__newlen += __len - __declen ; 
} 
}__CvT__record_line____(__CvT_miT,95,958);__len = __newlen ; 
} 
# 971 "/usr/include/c++/5/bits/locale_facets.tcc" 3 
template < typename _CharT , typename _OutIter > 
template < typename _ValueT > 
_OutIter 
num_put < _CharT , _OutIter >:: 
_M_insert_float ( _OutIter __s , ios_base & __io , _CharT __fill , char __mod , 
_ValueT __v ) const 
{ __CvT__record_line____(__CvT_miT,95,977);
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,95,979);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,95,980);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,95,981);const __cache_type * __lc = __uc ( __loc ) ; 


__CvT__record_line____(__CvT_miT,95,984);const streamsize __prec = __io . precision ( ) < 0 ? 6 : __io . precision ( ) ; 

__CvT__record_line____(__CvT_miT,95,986);const int __max_digits = 
__gnu_cxx :: __numeric_traits < _ValueT >:: __digits10 ; 


__CvT__record_line____(__CvT_miT,95,990);int __len ; 

__CvT__record_line____(__CvT_miT,95,992);char __fbuf [ 16 ] ; 
__CvT__record_line____(__CvT_miT,95,993);__num_base :: _S_format_float ( __io , __fbuf , __mod ) ; 



__CvT__record_line____(__CvT_miT,95,997);const bool __use_prec = 
( __io . flags ( ) & ios_base :: floatfield ) != ios_base :: floatfield ; 



__CvT__record_line____(__CvT_miT,95,1002);int __cs_size = __max_digits * 3 ; 
__CvT__record_line____(__CvT_miT,95,1003);char * __cs = static_cast < char *> ( __builtin_alloca ( __cs_size ) ) ; 
__CvT__record_line____(__CvT_miT,95,1004);if ( __use_prec ) 
{__CvT__record_line____(__CvT_miT,95,1005);__len = std :: __convert_from_v ( _S_get_c_locale ( ) , __cs , __cs_size , 
__fbuf , __prec , __v ) ; 
}else {
__CvT__record_line____(__CvT_miT,95,1008);__len = std :: __convert_from_v ( _S_get_c_locale ( ) , __cs , __cs_size , 
__fbuf , __v ) ; 


}__CvT__record_line____(__CvT_miT,95,1012);if ( __len >= __cs_size ) 
{{ 
__CvT__record_line____(__CvT_miT,95,1014);__cs_size = __len + 1 ; 
__CvT__record_line____(__CvT_miT,95,1015);__cs = static_cast < char *> ( __builtin_alloca ( __cs_size ) ) ; 
__CvT__record_line____(__CvT_miT,95,1016);if ( __use_prec ) 
{__CvT__record_line____(__CvT_miT,95,1017);__len = std :: __convert_from_v ( _S_get_c_locale ( ) , __cs , __cs_size , 
__fbuf , __prec , __v ) ; 
}else {
__CvT__record_line____(__CvT_miT,95,1020);__len = std :: __convert_from_v ( _S_get_c_locale ( ) , __cs , __cs_size , 
__fbuf , __v ) ; 
}} 
# 1044 "/usr/include/c++/5/bits/locale_facets.tcc" 3 
}__CvT__record_line____(__CvT_miT,95,1044);const ctype < _CharT >& __ctype = use_facet < ctype < _CharT > > ( __loc ) ; 

__CvT__record_line____(__CvT_miT,95,1046);_CharT * __ws = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __len ) ) ; 
__CvT__record_line____(__CvT_miT,95,1048);__ctype . widen ( __cs , __cs + __len , __ws ) ; 


__CvT__record_line____(__CvT_miT,95,1051);_CharT * __wp = 0 ; 
__CvT__record_line____(__CvT_miT,95,1052);const char * __p = char_traits < char >:: find ( __cs , __len , '.' ) ; 
__CvT__record_line____(__CvT_miT,95,1053);if ( __p ) 
{{ 
__CvT__record_line____(__CvT_miT,95,1055);__wp = __ws + ( __p - __cs ) ; 
__CvT__record_line____(__CvT_miT,95,1056);* __wp = __lc -> _M_decimal_point ; 
} 




}__CvT__record_line____(__CvT_miT,95,1062);if ( __lc -> _M_use_grouping 
&& ( __wp || __len < 3 || ( __cs [ 1 ] <= '9' && __cs [ 2 ] <= '9' 
&& __cs [ 1 ] >= '0' && __cs [ 2 ] >= '0' ) ) ) 
{{ 


__CvT__record_line____(__CvT_miT,95,1068);_CharT * __ws2 = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __len * 2 ) ) ; 

__CvT__record_line____(__CvT_miT,95,1071);streamsize __off = 0 ; 
__CvT__record_line____(__CvT_miT,95,1072);if ( __cs [ 0 ] == '-' || __cs [ 0 ] == '+' ) 
{{ 
__CvT__record_line____(__CvT_miT,95,1074);__off = 1 ; 
__CvT__record_line____(__CvT_miT,95,1075);__ws2 [ 0 ] = __ws [ 0 ] ; 
__CvT__record_line____(__CvT_miT,95,1076);__len -= 1 ; 
} 

}__CvT__record_line____(__CvT_miT,95,1079);_M_group_float ( __lc -> _M_grouping , __lc -> _M_grouping_size , 
__lc -> _M_thousands_sep , __wp , __ws2 + __off , 
__ws + __off , __len ) ; 
__CvT__record_line____(__CvT_miT,95,1082);__len += __off ; 

__CvT__record_line____(__CvT_miT,95,1084);__ws = __ws2 ; 
} 


}__CvT__record_line____(__CvT_miT,95,1088);const streamsize __w = __io . width ( ) ; 
__CvT__record_line____(__CvT_miT,95,1089);if ( __w > static_cast < streamsize > ( __len ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,1091);_CharT * __ws3 = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __w ) ) ; 
__CvT__record_line____(__CvT_miT,95,1093);_M_pad ( __fill , __w , __io , __ws3 , __ws , __len ) ; 
__CvT__record_line____(__CvT_miT,95,1094);__ws = __ws3 ; 
} 
}__CvT__record_line____(__CvT_miT,95,1096);__io . width ( 0 ) ; 



__CvT__record_line____(__CvT_miT,95,1100);return std :: __write ( __s , __ws , __len ) ; 
} 

template < typename _CharT , typename _OutIter > 
_OutIter 
num_put < _CharT , _OutIter >:: 
do_put ( iter_type __s , ios_base & __io , char_type __fill , bool __v ) const 
{ __CvT__record_line____(__CvT_miT,95,1107);
__CvT__record_line____(__CvT_miT,95,1108);const ios_base :: fmtflags __flags = __io . flags ( ) ; 
__CvT__record_line____(__CvT_miT,95,1109);if ( ( __flags & ios_base :: boolalpha ) == 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,95,1111);const long __l = __v ; 
__CvT__record_line____(__CvT_miT,95,1112);__s = _M_insert_int ( __s , __io , __fill , __l ) ; 
} 
}else {
{ 
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,95,1117);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,95,1118);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,95,1119);const __cache_type * __lc = __uc ( __loc ) ; 

__CvT__record_line____(__CvT_miT,95,1121);const _CharT * __name = __v ? __lc -> _M_truename 
: __lc -> _M_falsename ; 
__CvT__record_line____(__CvT_miT,95,1123);int __len = __v ? __lc -> _M_truename_size 
: __lc -> _M_falsename_size ; 

__CvT__record_line____(__CvT_miT,95,1126);const streamsize __w = __io . width ( ) ; 
__CvT__record_line____(__CvT_miT,95,1127);if ( __w > static_cast < streamsize > ( __len ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,1129);const streamsize __plen = __w - __len ; 
__CvT__record_line____(__CvT_miT,95,1130);_CharT * __ps 
= static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __plen ) ) ; 

__CvT__record_line____(__CvT_miT,95,1134);char_traits < _CharT >:: assign ( __ps , __plen , __fill ) ; 
__CvT__record_line____(__CvT_miT,95,1135);__io . width ( 0 ) ; 

__CvT__record_line____(__CvT_miT,95,1137);if ( ( __flags & ios_base :: adjustfield ) == ios_base :: left ) 
{{ 
__CvT__record_line____(__CvT_miT,95,1139);__s = std :: __write ( __s , __name , __len ) ; 
__CvT__record_line____(__CvT_miT,95,1140);__s = std :: __write ( __s , __ps , __plen ) ; 
} 
}else {
{ 
__CvT__record_line____(__CvT_miT,95,1144);__s = std :: __write ( __s , __ps , __plen ) ; 
__CvT__record_line____(__CvT_miT,95,1145);__s = std :: __write ( __s , __name , __len ) ; 
} 
}__CvT__record_line____(__CvT_miT,95,1147);return __s ; 
} 
}__CvT__record_line____(__CvT_miT,95,1149);__io . width ( 0 ) ; 
__CvT__record_line____(__CvT_miT,95,1150);__s = std :: __write ( __s , __name , __len ) ; 
} 
}__CvT__record_line____(__CvT_miT,95,1152);return __s ; 
} 

template < typename _CharT , typename _OutIter > 
_OutIter 
num_put < _CharT , _OutIter >:: 
do_put ( iter_type __s , ios_base & __io , char_type __fill , double __v ) const 
{ __CvT__record_line____(__CvT_miT,95,1159);return _M_insert_float ( __s , __io , __fill , char ( ) , __v ) ; } 
# 1169 "/usr/include/c++/5/bits/locale_facets.tcc" 3 
template < typename _CharT , typename _OutIter > 
_OutIter 
num_put < _CharT , _OutIter >:: 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
long double __v ) const 
{ __CvT__record_line____(__CvT_miT,95,1174);return _M_insert_float ( __s , __io , __fill , 'L' , __v ) ; } 

template < typename _CharT , typename _OutIter > 
_OutIter 
num_put < _CharT , _OutIter >:: 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
const void * __v ) const 
{ __CvT__record_line____(__CvT_miT,95,1181);
__CvT__record_line____(__CvT_miT,95,1182);const ios_base :: fmtflags __flags = __io . flags ( ) ; 
__CvT__record_line____(__CvT_miT,95,1183);const ios_base :: fmtflags __fmt = ~ ( ios_base :: basefield 
| ios_base :: uppercase ) ; 
__CvT__record_line____(__CvT_miT,95,1185);__io . flags ( ( __flags & __fmt ) | ( ios_base :: hex | ios_base :: showbase ) ) ; 

typedef __gnu_cxx :: __conditional_type < ( sizeof ( const void * ) 
<= sizeof ( unsigned long ) ) , 
unsigned long , unsigned long long >:: __type _UIntPtrType ; 

__CvT__record_line____(__CvT_miT,95,1191);__s = _M_insert_int ( __s , __io , __fill , 
reinterpret_cast < _UIntPtrType > ( __v ) ) ; 
__CvT__record_line____(__CvT_miT,95,1193);__io . flags ( __flags ) ; 
__CvT__record_line____(__CvT_miT,95,1194);return __s ; 
} 


# 1206 "/usr/include/c++/5/bits/locale_facets.tcc" 3 
template < typename _CharT , typename _Traits > 
void 
__pad < _CharT , _Traits >:: _S_pad ( ios_base & __io , _CharT __fill , 
_CharT * __news , const _CharT * __olds , 
streamsize __newlen , streamsize __oldlen ) 
{ __CvT__record_line____(__CvT_miT,95,1211);
__CvT__record_line____(__CvT_miT,95,1212);const size_t __plen = static_cast < size_t > ( __newlen - __oldlen ) ; 
__CvT__record_line____(__CvT_miT,95,1213);const ios_base :: fmtflags __adjust = __io . flags ( ) & ios_base :: adjustfield ; 


__CvT__record_line____(__CvT_miT,95,1216);if ( __adjust == ios_base :: left ) 
{{ 
__CvT__record_line____(__CvT_miT,95,1218);_Traits :: copy ( __news , __olds , __oldlen ) ; 
__CvT__record_line____(__CvT_miT,95,1219);_Traits :: assign ( __news + __oldlen , __plen , __fill ) ; 
__CvT__record_line____(__CvT_miT,95,1220);return ; 
} 

}__CvT__record_line____(__CvT_miT,95,1223);size_t __mod = 0 ; 
__CvT__record_line____(__CvT_miT,95,1224);if ( __adjust == ios_base :: internal ) 
{{ 



__CvT__record_line____(__CvT_miT,95,1229);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,95,1230);const ctype < _CharT >& __ctype = use_facet < ctype < _CharT > > ( __loc ) ; 

__CvT__record_line____(__CvT_miT,95,1232);if ( __ctype . widen ( '-' ) == __olds [ 0 ] 
|| __ctype . widen ( '+' ) == __olds [ 0 ] ) 
{{ 
__CvT__record_line____(__CvT_miT,95,1235);__news [ 0 ] = __olds [ 0 ] ; 
__CvT__record_line____(__CvT_miT,95,1236);__mod = 1 ; 
__CvT__record_line____(__CvT_miT,95,1237);++ __news ; 
} 
}else {__CvT__record_line____(__CvT_miT,95,1239);if ( __ctype . widen ( '0' ) == __olds [ 0 ] 
&& __oldlen > 1 
&& ( __ctype . widen ( 'x' ) == __olds [ 1 ] 
|| __ctype . widen ( 'X' ) == __olds [ 1 ] ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,1244);__news [ 0 ] = __olds [ 0 ] ; 
__CvT__record_line____(__CvT_miT,95,1245);__news [ 1 ] = __olds [ 1 ] ; 
__CvT__record_line____(__CvT_miT,95,1246);__mod = 2 ; 
__CvT__record_line____(__CvT_miT,95,1247);__news += 2 ; 
} 

}}} 
}__CvT__record_line____(__CvT_miT,95,1251);_Traits :: assign ( __news , __plen , __fill ) ; 
__CvT__record_line____(__CvT_miT,95,1252);_Traits :: copy ( __news + __plen , __olds + __mod , __oldlen - __mod ) ; 
} 

template < typename _CharT > 
_CharT * 
__add_grouping ( _CharT * __s , _CharT __sep , 
const char * __gbeg , size_t __gsize , 
const _CharT * __first , const _CharT * __last ) 
{ __CvT__record_line____(__CvT_miT,95,1260);
__CvT__record_line____(__CvT_miT,95,1261);size_t __idx = 0 ; 
__CvT__record_line____(__CvT_miT,95,1262);size_t __ctr = 0 ; 

__CvT__record_line____(__CvT_miT,95,1264);while ( __last - __first > __gbeg [ __idx ] 
&& static_cast < signed char > ( __gbeg [ __idx ] ) > 0 
&& __gbeg [ __idx ] != __gnu_cxx :: __numeric_traits < char >:: __max ) 
{{ 
__CvT__record_line____(__CvT_miT,95,1268);__last -= __gbeg [ __idx ] ; 
__CvT__record_line____(__CvT_miT,95,1269);__idx < __gsize - 1 ? ++ __idx : ++ __ctr ; 
} 

}__CvT__record_line____(__CvT_miT,95,1272);while ( __first != __last ) 
{__CvT__record_line____(__CvT_miT,95,1273);* __s ++ = * __first ++ ; 

}__CvT__record_line____(__CvT_miT,95,1275);while ( __ctr -- ) 
{{ 
__CvT__record_line____(__CvT_miT,95,1277);* __s ++ = __sep ; 
__CvT__record_line____(__CvT_miT,95,1278);for ( char __i = __gbeg [ __idx ] ; __i > 0 ; -- __i ) 
{__CvT__record_line____(__CvT_miT,95,1279);* __s ++ = * __first ++ ; 
}} 

}__CvT__record_line____(__CvT_miT,95,1282);while ( __idx -- ) 
{{ 
__CvT__record_line____(__CvT_miT,95,1284);* __s ++ = __sep ; 
__CvT__record_line____(__CvT_miT,95,1285);for ( char __i = __gbeg [ __idx ] ; __i > 0 ; -- __i ) 
{__CvT__record_line____(__CvT_miT,95,1286);* __s ++ = * __first ++ ; 
}} 

}__CvT__record_line____(__CvT_miT,95,1289);return __s ; 
} 




extern template class __cxx11 :: numpunct < char > ; 
extern template class __cxx11 :: numpunct_byname < char > ; 
extern template class num_get < char > ; 
extern template class num_put < char > ; 
extern template class ctype_byname < char > ; 

extern template 
const ctype < char >& 
use_facet < ctype < char > > ( const locale & ) ; 

extern template 
const numpunct < char >& 
use_facet < numpunct < char > > ( const locale & ) ; 

extern template 
const num_put < char >& 
use_facet < num_put < char > > ( const locale & ) ; 

extern template 
const num_get < char >& 
use_facet < num_get < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < ctype < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < numpunct < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < num_put < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < num_get < char > > ( const locale & ) ; 


extern template class __cxx11 :: numpunct < wchar_t > ; 
extern template class __cxx11 :: numpunct_byname < wchar_t > ; 
extern template class num_get < wchar_t > ; 
extern template class num_put < wchar_t > ; 
extern template class ctype_byname < wchar_t > ; 

extern template 
const ctype < wchar_t >& 
use_facet < ctype < wchar_t > > ( const locale & ) ; 

extern template 
const numpunct < wchar_t >& 
use_facet < numpunct < wchar_t > > ( const locale & ) ; 

extern template 
const num_put < wchar_t >& 
use_facet < num_put < wchar_t > > ( const locale & ) ; 

extern template 
const num_get < wchar_t >& 
use_facet < num_get < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < ctype < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < numpunct < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < num_put < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < num_get < wchar_t > > ( const locale & ) ; 




} 
# 2652 "/usr/include/c++/5/bits/locale_facets.h" 2 3 
# 38 "/usr/include/c++/5/bits/basic_ios.h" 2 3 



namespace std 
{ 


template < typename _Facet > 
inline const _Facet & 
__check_facet ( const _Facet * __f ) 
{ 
if ( ! __f ) 
__throw_bad_cast ( ) ; 
return * __f ; 
} 
# 66 "/usr/include/c++/5/bits/basic_ios.h" 3 
template < typename _CharT , typename _Traits > 
class basic_ios : public ios_base 
{ 
public : 






typedef _CharT char_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef typename _Traits :: pos_type pos_type ; 
typedef typename _Traits :: off_type off_type ; 
typedef _Traits traits_type ; 






typedef ctype < _CharT > __ctype_type ; 
typedef num_put < _CharT , ostreambuf_iterator < _CharT , _Traits > > 
__num_put_type ; 
typedef num_get < _CharT , istreambuf_iterator < _CharT , _Traits > > 
__num_get_type ; 



protected : 
basic_ostream < _CharT , _Traits >* _M_tie ; 
mutable char_type _M_fill ; 
mutable bool _M_fill_init ; 
basic_streambuf < _CharT , _Traits >* _M_streambuf ; 


const __ctype_type * _M_ctype ; 

const __num_put_type * _M_num_put ; 

const __num_get_type * _M_num_get ; 

public : 
# 120 "/usr/include/c++/5/bits/basic_ios.h" 3 
operator void * ( ) const 
{ __CvT__record_line____(__CvT_miT,88,121);return this -> fail ( ) ? 0 : const_cast < basic_ios *> ( this ) ; } 


bool 
operator ! ( ) const 
{ __CvT__record_line____(__CvT_miT,88,126);return this -> fail ( ) ; } 
# 136 "/usr/include/c++/5/bits/basic_ios.h" 3 
iostate 
rdstate ( ) const 
{ __CvT__record_line____(__CvT_miT,88,138);return _M_streambuf_state ; } 
# 147 "/usr/include/c++/5/bits/basic_ios.h" 3 
void 
clear ( iostate __state = goodbit ) ; 







void 
setstate ( iostate __state ) 
{ __CvT__record_line____(__CvT_miT,88,158);this -> clear ( this -> rdstate ( ) | __state ) ; } 




void 
_M_setstate ( iostate __state ) 
{ __CvT__record_line____(__CvT_miT,88,165);


__CvT__record_line____(__CvT_miT,88,168);_M_streambuf_state |= __state ; 
__CvT__record_line____(__CvT_miT,88,169);if ( this -> exceptions ( ) & __state ) 
{__CvT__record_line____(__CvT_miT,88,170);throw ; 
}} 







bool 
good ( ) const 
{ __CvT__record_line____(__CvT_miT,88,181);return this -> rdstate ( ) == 0 ; } 







bool 
eof ( ) const 
{ __CvT__record_line____(__CvT_miT,88,191);return ( this -> rdstate ( ) & eofbit ) != 0 ; } 
# 200 "/usr/include/c++/5/bits/basic_ios.h" 3 
bool 
fail ( ) const 
{ __CvT__record_line____(__CvT_miT,88,202);return ( this -> rdstate ( ) & ( badbit | failbit ) ) != 0 ; } 







bool 
bad ( ) const 
{ __CvT__record_line____(__CvT_miT,88,212);return ( this -> rdstate ( ) & badbit ) != 0 ; } 
# 221 "/usr/include/c++/5/bits/basic_ios.h" 3 
iostate 
exceptions ( ) const 
{ __CvT__record_line____(__CvT_miT,88,223);return _M_exception ; } 
# 256 "/usr/include/c++/5/bits/basic_ios.h" 3 
void 
exceptions ( iostate __except ) 
{ __CvT__record_line____(__CvT_miT,88,258);
__CvT__record_line____(__CvT_miT,88,259);_M_exception = __except ; 
__CvT__record_line____(__CvT_miT,88,260);this -> clear ( _M_streambuf_state ) ; 
} 







explicit 
basic_ios ( basic_streambuf < _CharT , _Traits >* __sb ) 
: ios_base ( ) , _M_tie ( 0 ) , _M_fill ( ) , _M_fill_init ( false ) , _M_streambuf ( 0 ) , 
_M_ctype ( 0 ) , _M_num_put ( 0 ) , _M_num_get ( 0 ) 
{ __CvT__record_line____(__CvT_miT,88,273);this -> init ( __sb ) ; } 







virtual 
~ basic_ios ( ) { __CvT__record_line____(__CvT_miT,88,282);} 
# 294 "/usr/include/c++/5/bits/basic_ios.h" 3 
basic_ostream < _CharT , _Traits >* 
tie ( ) const 
{ __CvT__record_line____(__CvT_miT,88,296);return _M_tie ; } 
# 306 "/usr/include/c++/5/bits/basic_ios.h" 3 
basic_ostream < _CharT , _Traits >* 
tie ( basic_ostream < _CharT , _Traits >* __tiestr ) 
{ __CvT__record_line____(__CvT_miT,88,308);
__CvT__record_line____(__CvT_miT,88,309);basic_ostream < _CharT , _Traits >* __old = _M_tie ; 
__CvT__record_line____(__CvT_miT,88,310);_M_tie = __tiestr ; 
__CvT__record_line____(__CvT_miT,88,311);return __old ; 
} 







basic_streambuf < _CharT , _Traits >* 
rdbuf ( ) const 
{ __CvT__record_line____(__CvT_miT,88,322);return _M_streambuf ; } 
# 346 "/usr/include/c++/5/bits/basic_ios.h" 3 
basic_streambuf < _CharT , _Traits >* 
rdbuf ( basic_streambuf < _CharT , _Traits >* __sb ) ; 
# 360 "/usr/include/c++/5/bits/basic_ios.h" 3 
basic_ios & 
copyfmt ( const basic_ios & __rhs ) ; 







char_type 
fill ( ) const 
{ __CvT__record_line____(__CvT_miT,88,371);
__CvT__record_line____(__CvT_miT,88,372);if ( ! _M_fill_init ) 
{{ 
__CvT__record_line____(__CvT_miT,88,374);_M_fill = this -> widen ( ' ' ) ; 
__CvT__record_line____(__CvT_miT,88,375);_M_fill_init = true ; 
} 
}__CvT__record_line____(__CvT_miT,88,377);return _M_fill ; 
} 
# 389 "/usr/include/c++/5/bits/basic_ios.h" 3 
char_type 
fill ( char_type __ch ) 
{ __CvT__record_line____(__CvT_miT,88,391);
__CvT__record_line____(__CvT_miT,88,392);char_type __old = this -> fill ( ) ; 
__CvT__record_line____(__CvT_miT,88,393);_M_fill = __ch ; 
__CvT__record_line____(__CvT_miT,88,394);return __old ; 
} 
# 409 "/usr/include/c++/5/bits/basic_ios.h" 3 
locale 
imbue ( const locale & __loc ) ; 
# 429 "/usr/include/c++/5/bits/basic_ios.h" 3 
char 
narrow ( char_type __c , char __dfault ) const 
{ __CvT__record_line____(__CvT_miT,88,431);return __check_facet ( _M_ctype ) . narrow ( __c , __dfault ) ; } 
# 448 "/usr/include/c++/5/bits/basic_ios.h" 3 
char_type 
widen ( char __c ) const 
{ __CvT__record_line____(__CvT_miT,88,450);return __check_facet ( _M_ctype ) . widen ( __c ) ; } 

protected : 







basic_ios ( ) 
: ios_base ( ) , _M_tie ( 0 ) , _M_fill ( char_type ( ) ) , _M_fill_init ( false ) , 
_M_streambuf ( 0 ) , _M_ctype ( 0 ) , _M_num_put ( 0 ) , _M_num_get ( 0 ) 
{ __CvT__record_line____(__CvT_miT,88,463);} 







void 
init ( basic_streambuf < _CharT , _Traits >* __sb ) ; 
# 509 "/usr/include/c++/5/bits/basic_ios.h" 3 
void 
_M_cache_locale ( const locale & __loc ) ; 
} ; 


} 

# 1 "/usr/include/c++/5/bits/basic_ios.tcc" 1 3 
# 33 "/usr/include/c++/5/bits/basic_ios.tcc" 3 

# 34 "/usr/include/c++/5/bits/basic_ios.tcc" 3 

namespace std 
{ 


template < typename _CharT , typename _Traits > 
void 
basic_ios < _CharT , _Traits >:: clear ( iostate __state ) 
{ __CvT__record_line____(__CvT_miT,96,42);
__CvT__record_line____(__CvT_miT,96,43);if ( this -> rdbuf ( ) ) 
{__CvT__record_line____(__CvT_miT,96,44);_M_streambuf_state = __state ; 
}else {
__CvT__record_line____(__CvT_miT,96,46);_M_streambuf_state = __state | badbit ; 
}__CvT__record_line____(__CvT_miT,96,47);if ( this -> exceptions ( ) & this -> rdstate ( ) ) 
{__CvT__record_line____(__CvT_miT,96,48);__throw_ios_failure ( ( "basic_ios::clear" ) ) ; 
}} 

template < typename _CharT , typename _Traits > 
basic_streambuf < _CharT , _Traits >* 
basic_ios < _CharT , _Traits >:: rdbuf ( basic_streambuf < _CharT , _Traits >* __sb ) 
{ __CvT__record_line____(__CvT_miT,96,54);
__CvT__record_line____(__CvT_miT,96,55);basic_streambuf < _CharT , _Traits >* __old = _M_streambuf ; 
__CvT__record_line____(__CvT_miT,96,56);_M_streambuf = __sb ; 
__CvT__record_line____(__CvT_miT,96,57);this -> clear ( ) ; 
__CvT__record_line____(__CvT_miT,96,58);return __old ; 
} 

template < typename _CharT , typename _Traits > 
basic_ios < _CharT , _Traits >& 
basic_ios < _CharT , _Traits >:: copyfmt ( const basic_ios & __rhs ) 
{ __CvT__record_line____(__CvT_miT,96,64);


__CvT__record_line____(__CvT_miT,96,67);if ( this != & __rhs ) 
{{ 




__CvT__record_line____(__CvT_miT,96,73);_Words * __words = ( __rhs . _M_word_size <= _S_local_word_size ) ? 
_M_local_word : new _Words [ __rhs . _M_word_size ] ; 


__CvT__record_line____(__CvT_miT,96,77);_Callback_list * __cb = __rhs . _M_callbacks ; 
__CvT__record_line____(__CvT_miT,96,78);if ( __cb ) 
{__CvT__record_line____(__CvT_miT,96,79);__cb -> _M_add_reference ( ) ; 
}__CvT__record_line____(__CvT_miT,96,80);_M_call_callbacks ( erase_event ) ; 
__CvT__record_line____(__CvT_miT,96,81);if ( _M_word != _M_local_word ) 
{{ 
__CvT__record_line____(__CvT_miT,96,83);delete [ ] _M_word ; 
__CvT__record_line____(__CvT_miT,96,84);_M_word = 0 ; 
} 
}__CvT__record_line____(__CvT_miT,96,86);_M_dispose_callbacks ( ) ; 


__CvT__record_line____(__CvT_miT,96,89);_M_callbacks = __cb ; 
__CvT__record_line____(__CvT_miT,96,90);for ( int __i = 0 ; __i < __rhs . _M_word_size ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,96,91);__words [ __i ] = __rhs . _M_word [ __i ] ; 
}__CvT__record_line____(__CvT_miT,96,92);_M_word = __words ; 
__CvT__record_line____(__CvT_miT,96,93);_M_word_size = __rhs . _M_word_size ; 

__CvT__record_line____(__CvT_miT,96,95);this -> flags ( __rhs . flags ( ) ) ; 
__CvT__record_line____(__CvT_miT,96,96);this -> width ( __rhs . width ( ) ) ; 
__CvT__record_line____(__CvT_miT,96,97);this -> precision ( __rhs . precision ( ) ) ; 
__CvT__record_line____(__CvT_miT,96,98);this -> tie ( __rhs . tie ( ) ) ; 
__CvT__record_line____(__CvT_miT,96,99);this -> fill ( __rhs . fill ( ) ) ; 
__CvT__record_line____(__CvT_miT,96,100);_M_ios_locale = __rhs . getloc ( ) ; 
__CvT__record_line____(__CvT_miT,96,101);_M_cache_locale ( _M_ios_locale ) ; 

__CvT__record_line____(__CvT_miT,96,103);_M_call_callbacks ( copyfmt_event ) ; 


__CvT__record_line____(__CvT_miT,96,106);this -> exceptions ( __rhs . exceptions ( ) ) ; 
} 
}__CvT__record_line____(__CvT_miT,96,108);return * this ; 
} 


template < typename _CharT , typename _Traits > 
locale 
basic_ios < _CharT , _Traits >:: imbue ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,96,115);
__CvT__record_line____(__CvT_miT,96,116);locale __old ( this -> getloc ( ) ) ; 
__CvT__record_line____(__CvT_miT,96,117);ios_base :: imbue ( __loc ) ; 
__CvT__record_line____(__CvT_miT,96,118);_M_cache_locale ( __loc ) ; 
__CvT__record_line____(__CvT_miT,96,119);if ( this -> rdbuf ( ) != 0 ) 
{__CvT__record_line____(__CvT_miT,96,120);this -> rdbuf ( ) -> pubimbue ( __loc ) ; 
}__CvT__record_line____(__CvT_miT,96,121);return __old ; 
} 

template < typename _CharT , typename _Traits > 
void 
basic_ios < _CharT , _Traits >:: init ( basic_streambuf < _CharT , _Traits >* __sb ) 
{ __CvT__record_line____(__CvT_miT,96,127);

__CvT__record_line____(__CvT_miT,96,129);ios_base :: _M_init ( ) ; 


__CvT__record_line____(__CvT_miT,96,132);_M_cache_locale ( _M_ios_locale ) ; 
# 146 "/usr/include/c++/5/bits/basic_ios.tcc" 3 
__CvT__record_line____(__CvT_miT,96,146);_M_fill = _CharT ( ) ; 
__CvT__record_line____(__CvT_miT,96,147);_M_fill_init = false ; 

__CvT__record_line____(__CvT_miT,96,149);_M_tie = 0 ; 
__CvT__record_line____(__CvT_miT,96,150);_M_exception = goodbit ; 
__CvT__record_line____(__CvT_miT,96,151);_M_streambuf = __sb ; 
__CvT__record_line____(__CvT_miT,96,152);_M_streambuf_state = __sb ? goodbit : badbit ; 
} 

template < typename _CharT , typename _Traits > 
void 
basic_ios < _CharT , _Traits >:: _M_cache_locale ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,96,158);
__CvT__record_line____(__CvT_miT,96,159);if ( __builtin_expect ( has_facet < __ctype_type > ( __loc ) , true ) ) 
{__CvT__record_line____(__CvT_miT,96,160);_M_ctype = & use_facet < __ctype_type > ( __loc ) ; 
}else {
__CvT__record_line____(__CvT_miT,96,162);_M_ctype = 0 ; 

}__CvT__record_line____(__CvT_miT,96,164);if ( __builtin_expect ( has_facet < __num_put_type > ( __loc ) , true ) ) 
{__CvT__record_line____(__CvT_miT,96,165);_M_num_put = & use_facet < __num_put_type > ( __loc ) ; 
}else {
__CvT__record_line____(__CvT_miT,96,167);_M_num_put = 0 ; 

}__CvT__record_line____(__CvT_miT,96,169);if ( __builtin_expect ( has_facet < __num_get_type > ( __loc ) , true ) ) 
{__CvT__record_line____(__CvT_miT,96,170);_M_num_get = & use_facet < __num_get_type > ( __loc ) ; 
}else {
__CvT__record_line____(__CvT_miT,96,172);_M_num_get = 0 ; 
}} 




extern template class basic_ios < char > ; 


extern template class basic_ios < wchar_t > ; 




} 
# 517 "/usr/include/c++/5/bits/basic_ios.h" 2 3 
# 45 "/usr/include/c++/5/ios" 2 3 
# 39 "/usr/include/c++/5/istream" 2 3 
# 1 "/usr/include/c++/5/ostream" 1 3 
# 36 "/usr/include/c++/5/ostream" 3 

# 37 "/usr/include/c++/5/ostream" 3 




namespace std 
{ 

# 57 "/usr/include/c++/5/ostream" 3 
template < typename _CharT , typename _Traits > 
class basic_ostream : virtual public basic_ios < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef typename _Traits :: pos_type pos_type ; 
typedef typename _Traits :: off_type off_type ; 
typedef _Traits traits_type ; 


typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef basic_ios < _CharT , _Traits > __ios_type ; 
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 
typedef num_put < _CharT , ostreambuf_iterator < _CharT , _Traits > > 
__num_put_type ; 
typedef ctype < _CharT > __ctype_type ; 
# 83 "/usr/include/c++/5/ostream" 3 
explicit 
basic_ostream ( __streambuf_type * __sb ) 
{ __CvT__record_line____(__CvT_miT,97,85);this -> init ( __sb ) ; } 






virtual 
~ basic_ostream ( ) { __CvT__record_line____(__CvT_miT,97,93);} 


class sentry ; 
friend class sentry ; 
# 107 "/usr/include/c++/5/ostream" 3 
__ostream_type & 
operator << ( __ostream_type & ( * __pf ) ( __ostream_type & ) ) 
{ __CvT__record_line____(__CvT_miT,97,109);



__CvT__record_line____(__CvT_miT,97,113);return __pf ( * this ) ; 
} 

__ostream_type & 
operator << ( __ios_type & ( * __pf ) ( __ios_type & ) ) 
{ __CvT__record_line____(__CvT_miT,97,118);



__CvT__record_line____(__CvT_miT,97,122);__pf ( * this ) ; 
__CvT__record_line____(__CvT_miT,97,123);return * this ; 
} 

__ostream_type & 
operator << ( ios_base & ( * __pf ) ( ios_base & ) ) 
{ __CvT__record_line____(__CvT_miT,97,128);



__CvT__record_line____(__CvT_miT,97,132);__pf ( * this ) ; 
__CvT__record_line____(__CvT_miT,97,133);return * this ; 
} 
# 165 "/usr/include/c++/5/ostream" 3 
__ostream_type & 
operator << ( long __n ) 
{ __CvT__record_line____(__CvT_miT,97,167);return _M_insert ( __n ) ; } 

__ostream_type & 
operator << ( unsigned long __n ) 
{ __CvT__record_line____(__CvT_miT,97,171);return _M_insert ( __n ) ; } 

__ostream_type & 
operator << ( bool __n ) 
{ __CvT__record_line____(__CvT_miT,97,175);return _M_insert ( __n ) ; } 

__ostream_type & 
operator << ( short __n ) ; 

__ostream_type & 
operator << ( unsigned short __n ) 
{ __CvT__record_line____(__CvT_miT,97,182);


__CvT__record_line____(__CvT_miT,97,185);return _M_insert ( static_cast < unsigned long > ( __n ) ) ; 
} 

__ostream_type & 
operator << ( int __n ) ; 

__ostream_type & 
operator << ( unsigned int __n ) 
{ __CvT__record_line____(__CvT_miT,97,193);


__CvT__record_line____(__CvT_miT,97,196);return _M_insert ( static_cast < unsigned long > ( __n ) ) ; 
} 


__ostream_type & 
operator << ( long long __n ) 
{ __CvT__record_line____(__CvT_miT,97,202);return _M_insert ( __n ) ; } 

__ostream_type & 
operator << ( unsigned long long __n ) 
{ __CvT__record_line____(__CvT_miT,97,206);return _M_insert ( __n ) ; } 
# 219 "/usr/include/c++/5/ostream" 3 
__ostream_type & 
operator << ( double __f ) 
{ __CvT__record_line____(__CvT_miT,97,221);return _M_insert ( __f ) ; } 

__ostream_type & 
operator << ( float __f ) 
{ __CvT__record_line____(__CvT_miT,97,225);


__CvT__record_line____(__CvT_miT,97,228);return _M_insert ( static_cast < double > ( __f ) ) ; 
} 

__ostream_type & 
operator << ( long double __f ) 
{ __CvT__record_line____(__CvT_miT,97,233);return _M_insert ( __f ) ; } 
# 244 "/usr/include/c++/5/ostream" 3 
__ostream_type & 
operator << ( const void * __p ) 
{ __CvT__record_line____(__CvT_miT,97,246);return _M_insert ( __p ) ; } 
# 269 "/usr/include/c++/5/ostream" 3 
__ostream_type & 
operator << ( __streambuf_type * __sb ) ; 
# 302 "/usr/include/c++/5/ostream" 3 
__ostream_type & 
put ( char_type __c ) ; 






void 
_M_write ( const char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,97,312);
__CvT__record_line____(__CvT_miT,97,313);const streamsize __put = this -> rdbuf ( ) -> sputn ( __s , __n ) ; 
__CvT__record_line____(__CvT_miT,97,314);if ( __put != __n ) 
{__CvT__record_line____(__CvT_miT,97,315);this -> setstate ( ios_base :: badbit ) ; 
}} 
# 334 "/usr/include/c++/5/ostream" 3 
__ostream_type & 
write ( const char_type * __s , streamsize __n ) ; 
# 347 "/usr/include/c++/5/ostream" 3 
__ostream_type & 
flush ( ) ; 
# 357 "/usr/include/c++/5/ostream" 3 
pos_type 
tellp ( ) ; 
# 368 "/usr/include/c++/5/ostream" 3 
__ostream_type & 
seekp ( pos_type ) ; 
# 380 "/usr/include/c++/5/ostream" 3 
__ostream_type & 
seekp ( off_type , ios_base :: seekdir ) ; 

protected : 
basic_ostream ( ) 
{ __CvT__record_line____(__CvT_miT,97,385);this -> init ( 0 ) ; } 
# 413 "/usr/include/c++/5/ostream" 3 
template < typename _ValueT > 
__ostream_type & 
_M_insert ( _ValueT __v ) ; 
} ; 
# 425 "/usr/include/c++/5/ostream" 3 
template < typename _CharT , typename _Traits > 
class basic_ostream < _CharT , _Traits >:: sentry 
{ 

bool _M_ok ; 
basic_ostream < _CharT , _Traits >& _M_os ; 

public : 
# 444 "/usr/include/c++/5/ostream" 3 
explicit 
sentry ( basic_ostream < _CharT , _Traits >& __os ) ; 
# 454 "/usr/include/c++/5/ostream" 3 
~ sentry ( ) 
{ __CvT__record_line____(__CvT_miT,97,455);

__CvT__record_line____(__CvT_miT,97,457);if ( bool ( _M_os . flags ( ) & ios_base :: unitbuf ) && ! uncaught_exception ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,97,460);if ( _M_os . rdbuf ( ) && _M_os . rdbuf ( ) -> pubsync ( ) == - 1 ) 
{__CvT__record_line____(__CvT_miT,97,461);_M_os . setstate ( ios_base :: badbit ) ; 
}} 
}} 
# 475 "/usr/include/c++/5/ostream" 3 
operator bool ( ) const 
{ __CvT__record_line____(__CvT_miT,97,476);return _M_ok ; } 
} ; 
# 495 "/usr/include/c++/5/ostream" 3 
template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __out , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,97,498);return __ostream_insert ( __out , & __c , 1 ) ; } 

template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __out , char __c ) 
{ __CvT__record_line____(__CvT_miT,97,503);return ( __out << __out . widen ( __c ) ) ; } 


template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , char __c ) 
{ __CvT__record_line____(__CvT_miT,97,509);return __ostream_insert ( __out , & __c , 1 ) ; } 


template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , signed char __c ) 
{ __CvT__record_line____(__CvT_miT,97,515);return ( __out << static_cast < char > ( __c ) ) ; } 

template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , unsigned char __c ) 
{ __CvT__record_line____(__CvT_miT,97,520);return ( __out << static_cast < char > ( __c ) ) ; } 
# 537 "/usr/include/c++/5/ostream" 3 
template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __out , const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,97,540);
__CvT__record_line____(__CvT_miT,97,541);if ( ! __s ) 
{__CvT__record_line____(__CvT_miT,97,542);__out . setstate ( ios_base :: badbit ) ; 
}else {
__CvT__record_line____(__CvT_miT,97,544);__ostream_insert ( __out , __s , 
static_cast < streamsize > ( _Traits :: length ( __s ) ) ) ; 
}__CvT__record_line____(__CvT_miT,97,546);return __out ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits > & 
operator << ( basic_ostream < _CharT , _Traits >& __out , const char * __s ) ; 


template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , const char * __s ) 
{ __CvT__record_line____(__CvT_miT,97,557);
__CvT__record_line____(__CvT_miT,97,558);if ( ! __s ) 
{__CvT__record_line____(__CvT_miT,97,559);__out . setstate ( ios_base :: badbit ) ; 
}else {
__CvT__record_line____(__CvT_miT,97,561);__ostream_insert ( __out , __s , 
static_cast < streamsize > ( _Traits :: length ( __s ) ) ) ; 
}__CvT__record_line____(__CvT_miT,97,563);return __out ; 
} 


template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , const signed char * __s ) 
{ __CvT__record_line____(__CvT_miT,97,570);return ( __out << reinterpret_cast < const char *> ( __s ) ) ; } 

template < class _Traits > 
inline basic_ostream < char , _Traits > & 
operator << ( basic_ostream < char , _Traits >& __out , const unsigned char * __s ) 
{ __CvT__record_line____(__CvT_miT,97,575);return ( __out << reinterpret_cast < const char *> ( __s ) ) ; } 
# 588 "/usr/include/c++/5/ostream" 3 
template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
endl ( basic_ostream < _CharT , _Traits >& __os ) 
{ __CvT__record_line____(__CvT_miT,97,591);return flush ( __os . put ( __os . widen ( '\n' ) ) ) ; } 
# 600 "/usr/include/c++/5/ostream" 3 
template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
ends ( basic_ostream < _CharT , _Traits >& __os ) 
{ __CvT__record_line____(__CvT_miT,97,603);return __os . put ( _CharT ( ) ) ; } 






template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
flush ( basic_ostream < _CharT , _Traits >& __os ) 
{ __CvT__record_line____(__CvT_miT,97,613);return __os . flush ( ) ; } 
# 635 "/usr/include/c++/5/ostream" 3 

} 

# 1 "/usr/include/c++/5/bits/ostream.tcc" 1 3 
# 37 "/usr/include/c++/5/bits/ostream.tcc" 3 

# 38 "/usr/include/c++/5/bits/ostream.tcc" 3 



namespace std 
{ 


template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >:: sentry :: 
sentry ( basic_ostream < _CharT , _Traits >& __os ) 
: _M_ok ( false ) , _M_os ( __os ) 
{ __CvT__record_line____(__CvT_miT,98,49);

__CvT__record_line____(__CvT_miT,98,51);if ( __os . tie ( ) && __os . good ( ) ) 
{__CvT__record_line____(__CvT_miT,98,52);__os . tie ( ) -> flush ( ) ; 

}__CvT__record_line____(__CvT_miT,98,54);if ( __os . good ( ) ) 
{__CvT__record_line____(__CvT_miT,98,55);_M_ok = true ; 
}else {
__CvT__record_line____(__CvT_miT,98,57);__os . setstate ( ios_base :: failbit ) ; 
}} 

template < typename _CharT , typename _Traits > 
template < typename _ValueT > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
_M_insert ( _ValueT __v ) 
{ __CvT__record_line____(__CvT_miT,98,65);
__CvT__record_line____(__CvT_miT,98,66);sentry __cerb ( * this ) ; 
__CvT__record_line____(__CvT_miT,98,67);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,98,69);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,98,70);try 
{ 
__CvT__record_line____(__CvT_miT,98,72);const __num_put_type & __np = __check_facet ( this -> _M_num_put ) ; 
__CvT__record_line____(__CvT_miT,98,73);if ( __np . put ( * this , * this , this -> fill ( ) , __v ) . failed ( ) ) 
{__CvT__record_line____(__CvT_miT,98,74);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,98,78);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,98,79);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,98,82);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,98,83);if ( __err ) 
{__CvT__record_line____(__CvT_miT,98,84);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,98,86);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
operator << ( short __n ) 
{ __CvT__record_line____(__CvT_miT,98,93);


__CvT__record_line____(__CvT_miT,98,96);const ios_base :: fmtflags __fmt = this -> flags ( ) & ios_base :: basefield ; 
__CvT__record_line____(__CvT_miT,98,97);if ( __fmt == ios_base :: oct || __fmt == ios_base :: hex ) 
{__CvT__record_line____(__CvT_miT,98,98);return _M_insert ( static_cast < long > ( static_cast < unsigned short > ( __n ) ) ) ; 
}else {
__CvT__record_line____(__CvT_miT,98,100);return _M_insert ( static_cast < long > ( __n ) ) ; 
}} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
operator << ( int __n ) 
{ __CvT__record_line____(__CvT_miT,98,107);


__CvT__record_line____(__CvT_miT,98,110);const ios_base :: fmtflags __fmt = this -> flags ( ) & ios_base :: basefield ; 
__CvT__record_line____(__CvT_miT,98,111);if ( __fmt == ios_base :: oct || __fmt == ios_base :: hex ) 
{__CvT__record_line____(__CvT_miT,98,112);return _M_insert ( static_cast < long > ( static_cast < unsigned int > ( __n ) ) ) ; 
}else {
__CvT__record_line____(__CvT_miT,98,114);return _M_insert ( static_cast < long > ( __n ) ) ; 
}} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
operator << ( __streambuf_type * __sbin ) 
{ __CvT__record_line____(__CvT_miT,98,121);
__CvT__record_line____(__CvT_miT,98,122);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,98,123);sentry __cerb ( * this ) ; 
__CvT__record_line____(__CvT_miT,98,124);if ( __cerb && __sbin ) 
{{ 
__CvT__record_line____(__CvT_miT,98,126);try 
{ 
__CvT__record_line____(__CvT_miT,98,128);if ( ! __copy_streambufs ( __sbin , this -> rdbuf ( ) ) ) 
{__CvT__record_line____(__CvT_miT,98,129);__err |= ios_base :: failbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,98,133);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,98,134);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,98,137);this -> _M_setstate ( ios_base :: failbit ) ; } 
} 
}else {__CvT__record_line____(__CvT_miT,98,139);if ( ! __sbin ) 
{__CvT__record_line____(__CvT_miT,98,140);__err |= ios_base :: badbit ; 
}}__CvT__record_line____(__CvT_miT,98,141);if ( __err ) 
{__CvT__record_line____(__CvT_miT,98,142);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,98,143);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
put ( char_type __c ) 
{ __CvT__record_line____(__CvT_miT,98,150);






__CvT__record_line____(__CvT_miT,98,157);sentry __cerb ( * this ) ; 
__CvT__record_line____(__CvT_miT,98,158);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,98,160);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,98,161);try 
{ 
__CvT__record_line____(__CvT_miT,98,163);const int_type __put = this -> rdbuf ( ) -> sputc ( __c ) ; 
__CvT__record_line____(__CvT_miT,98,164);if ( traits_type :: eq_int_type ( __put , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,98,165);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,98,169);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,98,170);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,98,173);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,98,174);if ( __err ) 
{__CvT__record_line____(__CvT_miT,98,175);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,98,177);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
write ( const _CharT * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,98,184);







__CvT__record_line____(__CvT_miT,98,192);sentry __cerb ( * this ) ; 
__CvT__record_line____(__CvT_miT,98,193);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,98,195);try 
{ __CvT__record_line____(__CvT_miT,98,196);_M_write ( __s , __n ) ; } 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,98,199);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,98,200);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,98,203);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,98,205);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
flush ( ) 
{ __CvT__record_line____(__CvT_miT,98,212);



__CvT__record_line____(__CvT_miT,98,216);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,98,217);try 
{ 
__CvT__record_line____(__CvT_miT,98,219);if ( this -> rdbuf ( ) && this -> rdbuf ( ) -> pubsync ( ) == - 1 ) 
{__CvT__record_line____(__CvT_miT,98,220);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,98,224);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,98,225);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,98,228);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,98,229);if ( __err ) 
{__CvT__record_line____(__CvT_miT,98,230);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,98,231);return * this ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_ostream < _CharT , _Traits >:: pos_type 
basic_ostream < _CharT , _Traits >:: 
tellp ( ) 
{ __CvT__record_line____(__CvT_miT,98,238);
__CvT__record_line____(__CvT_miT,98,239);pos_type __ret = pos_type ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,98,240);try 
{ 
__CvT__record_line____(__CvT_miT,98,242);if ( ! this -> fail ( ) ) 
{__CvT__record_line____(__CvT_miT,98,243);__ret = this -> rdbuf ( ) -> pubseekoff ( 0 , ios_base :: cur , ios_base :: out ) ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,98,247);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,98,248);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,98,251);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,98,252);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
seekp ( pos_type __pos ) 
{ __CvT__record_line____(__CvT_miT,98,259);
__CvT__record_line____(__CvT_miT,98,260);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,98,261);try 
{ 
__CvT__record_line____(__CvT_miT,98,263);if ( ! this -> fail ( ) ) 
{{ 


__CvT__record_line____(__CvT_miT,98,267);const pos_type __p = this -> rdbuf ( ) -> pubseekpos ( __pos , 
ios_base :: out ) ; 


__CvT__record_line____(__CvT_miT,98,271);if ( __p == pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,98,272);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,98,277);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,98,278);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,98,281);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,98,282);if ( __err ) 
{__CvT__record_line____(__CvT_miT,98,283);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,98,284);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
seekp ( off_type __off , ios_base :: seekdir __dir ) 
{ __CvT__record_line____(__CvT_miT,98,291);
__CvT__record_line____(__CvT_miT,98,292);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,98,293);try 
{ 
__CvT__record_line____(__CvT_miT,98,295);if ( ! this -> fail ( ) ) 
{{ 


__CvT__record_line____(__CvT_miT,98,299);const pos_type __p = this -> rdbuf ( ) -> pubseekoff ( __off , __dir , 
ios_base :: out ) ; 


__CvT__record_line____(__CvT_miT,98,303);if ( __p == pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,98,304);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,98,309);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,98,310);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,98,313);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,98,314);if ( __err ) 
{__CvT__record_line____(__CvT_miT,98,315);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,98,316);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __out , const char * __s ) 
{ __CvT__record_line____(__CvT_miT,98,322);
__CvT__record_line____(__CvT_miT,98,323);if ( ! __s ) 
{__CvT__record_line____(__CvT_miT,98,324);__out . setstate ( ios_base :: badbit ) ; 
}else {
{ 


__CvT__record_line____(__CvT_miT,98,329);const size_t __clen = char_traits < char >:: length ( __s ) ; 
__CvT__record_line____(__CvT_miT,98,330);try 
{ 
__CvT__record_line____(__CvT_miT,98,332);struct __ptr_guard 
{ 
_CharT * __p ; 
__ptr_guard ( _CharT * __ip ) : __p ( __ip ) { __CvT__record_line____(__CvT_miT,98,335);} 
~ __ptr_guard ( ) { __CvT__record_line____(__CvT_miT,98,336);delete [ ] __p ; } 
_CharT * __get ( ) { __CvT__record_line____(__CvT_miT,98,337);return __p ; } 
} __pg ( new _CharT [ __clen ] ) ; 

__CvT__record_line____(__CvT_miT,98,340);_CharT * __ws = __pg . __get ( ) ; 
__CvT__record_line____(__CvT_miT,98,341);for ( size_t __i = 0 ; __i < __clen ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,98,342);__ws [ __i ] = __out . widen ( __s [ __i ] ) ; 
}__CvT__record_line____(__CvT_miT,98,343);__ostream_insert ( __out , __ws , __clen ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,98,347);__out . _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,98,348);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,98,351);__out . _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,98,353);return __out ; 
} 




extern template class basic_ostream < char > ; 
extern template ostream & endl ( ostream & ) ; 
extern template ostream & ends ( ostream & ) ; 
extern template ostream & flush ( ostream & ) ; 
extern template ostream & operator << ( ostream & , char ) ; 
extern template ostream & operator << ( ostream & , unsigned char ) ; 
extern template ostream & operator << ( ostream & , signed char ) ; 
extern template ostream & operator << ( ostream & , const char * ) ; 
extern template ostream & operator << ( ostream & , const unsigned char * ) ; 
extern template ostream & operator << ( ostream & , const signed char * ) ; 

extern template ostream & ostream :: _M_insert ( long ) ; 
extern template ostream & ostream :: _M_insert ( unsigned long ) ; 
extern template ostream & ostream :: _M_insert ( bool ) ; 

extern template ostream & ostream :: _M_insert ( long long ) ; 
extern template ostream & ostream :: _M_insert ( unsigned long long ) ; 

extern template ostream & ostream :: _M_insert ( double ) ; 
extern template ostream & ostream :: _M_insert ( long double ) ; 
extern template ostream & ostream :: _M_insert ( const void * ) ; 


extern template class basic_ostream < wchar_t > ; 
extern template wostream & endl ( wostream & ) ; 
extern template wostream & ends ( wostream & ) ; 
extern template wostream & flush ( wostream & ) ; 
extern template wostream & operator << ( wostream & , wchar_t ) ; 
extern template wostream & operator << ( wostream & , char ) ; 
extern template wostream & operator << ( wostream & , const wchar_t * ) ; 
extern template wostream & operator << ( wostream & , const char * ) ; 

extern template wostream & wostream :: _M_insert ( long ) ; 
extern template wostream & wostream :: _M_insert ( unsigned long ) ; 
extern template wostream & wostream :: _M_insert ( bool ) ; 

extern template wostream & wostream :: _M_insert ( long long ) ; 
extern template wostream & wostream :: _M_insert ( unsigned long long ) ; 

extern template wostream & wostream :: _M_insert ( double ) ; 
extern template wostream & wostream :: _M_insert ( long double ) ; 
extern template wostream & wostream :: _M_insert ( const void * ) ; 




} 
# 639 "/usr/include/c++/5/ostream" 2 3 
# 40 "/usr/include/c++/5/istream" 2 3 

namespace std 
{ 

# 57 "/usr/include/c++/5/istream" 3 
template < typename _CharT , typename _Traits > 
class basic_istream : virtual public basic_ios < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef typename _Traits :: pos_type pos_type ; 
typedef typename _Traits :: off_type off_type ; 
typedef _Traits traits_type ; 


typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef basic_ios < _CharT , _Traits > __ios_type ; 
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef num_get < _CharT , istreambuf_iterator < _CharT , _Traits > > 
__num_get_type ; 
typedef ctype < _CharT > __ctype_type ; 

protected : 





streamsize _M_gcount ; 

public : 







explicit 
basic_istream ( __streambuf_type * __sb ) 
: _M_gcount ( streamsize ( 0 ) ) 
{ __CvT__record_line____(__CvT_miT,80,95);this -> init ( __sb ) ; } 






virtual 
~ basic_istream ( ) 
{ __CvT__record_line____(__CvT_miT,80,104);_M_gcount = streamsize ( 0 ) ; } 


class sentry ; 
friend class sentry ; 
# 119 "/usr/include/c++/5/istream" 3 
__istream_type & 
operator >> ( __istream_type & ( * __pf ) ( __istream_type & ) ) 
{ __CvT__record_line____(__CvT_miT,80,121);return __pf ( * this ) ; } 

__istream_type & 
operator >> ( __ios_type & ( * __pf ) ( __ios_type & ) ) 
{ __CvT__record_line____(__CvT_miT,80,125);
__CvT__record_line____(__CvT_miT,80,126);__pf ( * this ) ; 
__CvT__record_line____(__CvT_miT,80,127);return * this ; 
} 

__istream_type & 
operator >> ( ios_base & ( * __pf ) ( ios_base & ) ) 
{ __CvT__record_line____(__CvT_miT,80,132);
__CvT__record_line____(__CvT_miT,80,133);__pf ( * this ) ; 
__CvT__record_line____(__CvT_miT,80,134);return * this ; 
} 
# 167 "/usr/include/c++/5/istream" 3 
__istream_type & 
operator >> ( bool & __n ) 
{ __CvT__record_line____(__CvT_miT,80,169);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( short & __n ) ; 

__istream_type & 
operator >> ( unsigned short & __n ) 
{ __CvT__record_line____(__CvT_miT,80,176);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( int & __n ) ; 

__istream_type & 
operator >> ( unsigned int & __n ) 
{ __CvT__record_line____(__CvT_miT,80,183);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( long & __n ) 
{ __CvT__record_line____(__CvT_miT,80,187);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( unsigned long & __n ) 
{ __CvT__record_line____(__CvT_miT,80,191);return _M_extract ( __n ) ; } 


__istream_type & 
operator >> ( long long & __n ) 
{ __CvT__record_line____(__CvT_miT,80,196);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( unsigned long long & __n ) 
{ __CvT__record_line____(__CvT_miT,80,200);return _M_extract ( __n ) ; } 
# 213 "/usr/include/c++/5/istream" 3 
__istream_type & 
operator >> ( float & __f ) 
{ __CvT__record_line____(__CvT_miT,80,215);return _M_extract ( __f ) ; } 

__istream_type & 
operator >> ( double & __f ) 
{ __CvT__record_line____(__CvT_miT,80,219);return _M_extract ( __f ) ; } 

__istream_type & 
operator >> ( long double & __f ) 
{ __CvT__record_line____(__CvT_miT,80,223);return _M_extract ( __f ) ; } 
# 234 "/usr/include/c++/5/istream" 3 
__istream_type & 
operator >> ( void *& __p ) 
{ __CvT__record_line____(__CvT_miT,80,236);return _M_extract ( __p ) ; } 
# 258 "/usr/include/c++/5/istream" 3 
__istream_type & 
operator >> ( __streambuf_type * __sb ) ; 
# 268 "/usr/include/c++/5/istream" 3 
streamsize 
gcount ( ) const 
{ __CvT__record_line____(__CvT_miT,80,270);return _M_gcount ; } 
# 301 "/usr/include/c++/5/istream" 3 
int_type 
get ( ) ; 
# 315 "/usr/include/c++/5/istream" 3 
__istream_type & 
get ( char_type & __c ) ; 
# 342 "/usr/include/c++/5/istream" 3 
__istream_type & 
get ( char_type * __s , streamsize __n , char_type __delim ) ; 
# 353 "/usr/include/c++/5/istream" 3 
__istream_type & 
get ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,80,355);return this -> get ( __s , __n , this -> widen ( '\n' ) ) ; } 
# 376 "/usr/include/c++/5/istream" 3 
__istream_type & 
get ( __streambuf_type & __sb , char_type __delim ) ; 
# 386 "/usr/include/c++/5/istream" 3 
__istream_type & 
get ( __streambuf_type & __sb ) 
{ __CvT__record_line____(__CvT_miT,80,388);return this -> get ( __sb , this -> widen ( '\n' ) ) ; } 
# 415 "/usr/include/c++/5/istream" 3 
__istream_type & 
getline ( char_type * __s , streamsize __n , char_type __delim ) ; 
# 426 "/usr/include/c++/5/istream" 3 
__istream_type & 
getline ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,80,428);return this -> getline ( __s , __n , this -> widen ( '\n' ) ) ; } 
# 450 "/usr/include/c++/5/istream" 3 
__istream_type & 
ignore ( streamsize __n , int_type __delim ) ; 

__istream_type & 
ignore ( streamsize __n ) ; 

__istream_type & 
ignore ( ) ; 
# 467 "/usr/include/c++/5/istream" 3 
int_type 
peek ( ) ; 
# 485 "/usr/include/c++/5/istream" 3 
__istream_type & 
read ( char_type * __s , streamsize __n ) ; 
# 504 "/usr/include/c++/5/istream" 3 
streamsize 
readsome ( char_type * __s , streamsize __n ) ; 
# 521 "/usr/include/c++/5/istream" 3 
__istream_type & 
putback ( char_type __c ) ; 
# 537 "/usr/include/c++/5/istream" 3 
__istream_type & 
unget ( ) ; 
# 555 "/usr/include/c++/5/istream" 3 
int 
sync ( ) ; 
# 570 "/usr/include/c++/5/istream" 3 
pos_type 
tellg ( ) ; 
# 585 "/usr/include/c++/5/istream" 3 
__istream_type & 
seekg ( pos_type ) ; 
# 601 "/usr/include/c++/5/istream" 3 
__istream_type & 
seekg ( off_type , ios_base :: seekdir ) ; 


protected : 
basic_istream ( ) 
: _M_gcount ( streamsize ( 0 ) ) 
{ __CvT__record_line____(__CvT_miT,80,608);this -> init ( 0 ) ; } 
# 639 "/usr/include/c++/5/istream" 3 
template < typename _ValueT > 
__istream_type & 
_M_extract ( _ValueT & __v ) ; 
} ; 


template <> 
basic_istream < char >& 
basic_istream < char >:: 
getline ( char_type * __s , streamsize __n , char_type __delim ) ; 

template <> 
basic_istream < char >& 
basic_istream < char >:: 
ignore ( streamsize __n ) ; 

template <> 
basic_istream < char >& 
basic_istream < char >:: 
ignore ( streamsize __n , int_type __delim ) ; 


template <> 
basic_istream < wchar_t >& 
basic_istream < wchar_t >:: 
getline ( char_type * __s , streamsize __n , char_type __delim ) ; 

template <> 
basic_istream < wchar_t >& 
basic_istream < wchar_t >:: 
ignore ( streamsize __n ) ; 

template <> 
basic_istream < wchar_t >& 
basic_istream < wchar_t >:: 
ignore ( streamsize __n , int_type __delim ) ; 
# 685 "/usr/include/c++/5/istream" 3 
template < typename _CharT , typename _Traits > 
class basic_istream < _CharT , _Traits >:: sentry 
{ 

bool _M_ok ; 

public : 

typedef _Traits traits_type ; 
typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef typename __istream_type :: __ctype_type __ctype_type ; 
typedef typename _Traits :: int_type __int_type ; 
# 721 "/usr/include/c++/5/istream" 3 
explicit 
sentry ( basic_istream < _CharT , _Traits >& __is , bool __noskipws = false ) ; 
# 734 "/usr/include/c++/5/istream" 3 
operator bool ( ) const 
{ __CvT__record_line____(__CvT_miT,80,735);return _M_ok ; } 
} ; 
# 750 "/usr/include/c++/5/istream" 3 
template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , _CharT & __c ) ; 

template < class _Traits > 
inline basic_istream < char , _Traits >& 
operator >> ( basic_istream < char , _Traits >& __in , unsigned char & __c ) 
{ __CvT__record_line____(__CvT_miT,80,757);return ( __in >> reinterpret_cast < char &> ( __c ) ) ; } 

template < class _Traits > 
inline basic_istream < char , _Traits >& 
operator >> ( basic_istream < char , _Traits >& __in , signed char & __c ) 
{ __CvT__record_line____(__CvT_miT,80,762);return ( __in >> reinterpret_cast < char &> ( __c ) ) ; } 
# 792 "/usr/include/c++/5/istream" 3 
template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , _CharT * __s ) ; 


template <> 
basic_istream < char >& 
operator >> ( basic_istream < char >& __in , char * __s ) ; 

template < class _Traits > 
inline basic_istream < char , _Traits >& 
operator >> ( basic_istream < char , _Traits >& __in , unsigned char * __s ) 
{ __CvT__record_line____(__CvT_miT,80,804);return ( __in >> reinterpret_cast < char *> ( __s ) ) ; } 

template < class _Traits > 
inline basic_istream < char , _Traits >& 
operator >> ( basic_istream < char , _Traits >& __in , signed char * __s ) 
{ __CvT__record_line____(__CvT_miT,80,809);return ( __in >> reinterpret_cast < char *> ( __s ) ) ; } 
# 823 "/usr/include/c++/5/istream" 3 
template < typename _CharT , typename _Traits > 
class basic_iostream 
: public basic_istream < _CharT , _Traits > , 
public basic_ostream < _CharT , _Traits > 
{ 
public : 



typedef _CharT char_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef typename _Traits :: pos_type pos_type ; 
typedef typename _Traits :: off_type off_type ; 
typedef _Traits traits_type ; 


typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 







explicit 
basic_iostream ( basic_streambuf < _CharT , _Traits >* __sb ) 
: __istream_type ( __sb ) , __ostream_type ( __sb ) { __CvT__record_line____(__CvT_miT,80,850);} 




virtual 
~ basic_iostream ( ) { __CvT__record_line____(__CvT_miT,80,856);} 

protected : 
basic_iostream ( ) 
: __istream_type ( ) , __ostream_type ( ) { __CvT__record_line____(__CvT_miT,80,860);} 
# 884 "/usr/include/c++/5/istream" 3 
} ; 
# 906 "/usr/include/c++/5/istream" 3 
template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
ws ( basic_istream < _CharT , _Traits >& __is ) ; 
# 931 "/usr/include/c++/5/istream" 3 

} 

# 1 "/usr/include/c++/5/bits/istream.tcc" 1 3 
# 37 "/usr/include/c++/5/bits/istream.tcc" 3 

# 38 "/usr/include/c++/5/bits/istream.tcc" 3 



namespace std 
{ 


template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >:: sentry :: 
sentry ( basic_istream < _CharT , _Traits >& __in , bool __noskip ) : _M_ok ( false ) 
{ __CvT__record_line____(__CvT_miT,99,48);
__CvT__record_line____(__CvT_miT,99,49);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,50);if ( __in . good ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,99,52);if ( __in . tie ( ) ) 
{__CvT__record_line____(__CvT_miT,99,53);__in . tie ( ) -> flush ( ) ; 
}__CvT__record_line____(__CvT_miT,99,54);if ( ! __noskip && bool ( __in . flags ( ) & ios_base :: skipws ) ) 
{{ 
__CvT__record_line____(__CvT_miT,99,56);const __int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,99,57);__streambuf_type * __sb = __in . rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,99,58);__int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,99,60);const __ctype_type & __ct = __check_facet ( __in . _M_ctype ) ; 
__CvT__record_line____(__CvT_miT,99,61);while ( ! traits_type :: eq_int_type ( __c , __eof ) 
&& __ct . is ( ctype_base :: space , 
traits_type :: to_char_type ( __c ) ) ) 
{__CvT__record_line____(__CvT_miT,99,64);__c = __sb -> snextc ( ) ; 




}__CvT__record_line____(__CvT_miT,99,69);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,99,70);__err |= ios_base :: eofbit ; 
}} 
}} 

}__CvT__record_line____(__CvT_miT,99,74);if ( __in . good ( ) && __err == ios_base :: goodbit ) 
{__CvT__record_line____(__CvT_miT,99,75);_M_ok = true ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,99,78);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,99,79);__in . setstate ( __err ) ; 
} 
}} 

template < typename _CharT , typename _Traits > 
template < typename _ValueT > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
_M_extract ( _ValueT & __v ) 
{ __CvT__record_line____(__CvT_miT,99,88);
__CvT__record_line____(__CvT_miT,99,89);sentry __cerb ( * this , false ) ; 
__CvT__record_line____(__CvT_miT,99,90);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,92);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,93);try 
{ 
__CvT__record_line____(__CvT_miT,99,95);const __num_get_type & __ng = __check_facet ( this -> _M_num_get ) ; 
__CvT__record_line____(__CvT_miT,99,96);__ng . get ( * this , 0 , * this , __err , __v ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,100);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,101);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,104);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,105);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,106);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,108);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
operator >> ( short & __n ) 
{ __CvT__record_line____(__CvT_miT,99,115);


__CvT__record_line____(__CvT_miT,99,118);sentry __cerb ( * this , false ) ; 
__CvT__record_line____(__CvT_miT,99,119);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,121);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,122);try 
{ 
__CvT__record_line____(__CvT_miT,99,124);long __l ; 
__CvT__record_line____(__CvT_miT,99,125);const __num_get_type & __ng = __check_facet ( this -> _M_num_get ) ; 
__CvT__record_line____(__CvT_miT,99,126);__ng . get ( * this , 0 , * this , __err , __l ) ; 



__CvT__record_line____(__CvT_miT,99,130);if ( __l < __gnu_cxx :: __numeric_traits < short >:: __min ) 
{{ 
__CvT__record_line____(__CvT_miT,99,132);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,99,133);__n = __gnu_cxx :: __numeric_traits < short >:: __min ; 
} 
}else {__CvT__record_line____(__CvT_miT,99,135);if ( __l > __gnu_cxx :: __numeric_traits < short >:: __max ) 
{{ 
__CvT__record_line____(__CvT_miT,99,137);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,99,138);__n = __gnu_cxx :: __numeric_traits < short >:: __max ; 
} 
}else {
__CvT__record_line____(__CvT_miT,99,141);__n = short ( __l ) ; 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,145);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,146);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,149);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,150);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,151);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,153);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
operator >> ( int & __n ) 
{ __CvT__record_line____(__CvT_miT,99,160);


__CvT__record_line____(__CvT_miT,99,163);sentry __cerb ( * this , false ) ; 
__CvT__record_line____(__CvT_miT,99,164);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,166);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,167);try 
{ 
__CvT__record_line____(__CvT_miT,99,169);long __l ; 
__CvT__record_line____(__CvT_miT,99,170);const __num_get_type & __ng = __check_facet ( this -> _M_num_get ) ; 
__CvT__record_line____(__CvT_miT,99,171);__ng . get ( * this , 0 , * this , __err , __l ) ; 



__CvT__record_line____(__CvT_miT,99,175);if ( __l < __gnu_cxx :: __numeric_traits < int >:: __min ) 
{{ 
__CvT__record_line____(__CvT_miT,99,177);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,99,178);__n = __gnu_cxx :: __numeric_traits < int >:: __min ; 
} 
}else {__CvT__record_line____(__CvT_miT,99,180);if ( __l > __gnu_cxx :: __numeric_traits < int >:: __max ) 
{{ 
__CvT__record_line____(__CvT_miT,99,182);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,99,183);__n = __gnu_cxx :: __numeric_traits < int >:: __max ; 
} 
}else {
__CvT__record_line____(__CvT_miT,99,186);__n = int ( __l ) ; 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,190);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,191);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,194);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,195);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,196);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,198);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
operator >> ( __streambuf_type * __sbout ) 
{ __CvT__record_line____(__CvT_miT,99,205);
__CvT__record_line____(__CvT_miT,99,206);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,207);sentry __cerb ( * this , false ) ; 
__CvT__record_line____(__CvT_miT,99,208);if ( __cerb && __sbout ) 
{{ 
__CvT__record_line____(__CvT_miT,99,210);try 
{ 
__CvT__record_line____(__CvT_miT,99,212);bool __ineof ; 
__CvT__record_line____(__CvT_miT,99,213);if ( ! __copy_streambufs_eof ( this -> rdbuf ( ) , __sbout , __ineof ) ) 
{__CvT__record_line____(__CvT_miT,99,214);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,99,215);if ( __ineof ) 
{__CvT__record_line____(__CvT_miT,99,216);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,220);this -> _M_setstate ( ios_base :: failbit ) ; 
__CvT__record_line____(__CvT_miT,99,221);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,224);this -> _M_setstate ( ios_base :: failbit ) ; } 
} 
}else {__CvT__record_line____(__CvT_miT,99,226);if ( ! __sbout ) 
{__CvT__record_line____(__CvT_miT,99,227);__err |= ios_base :: failbit ; 
}}__CvT__record_line____(__CvT_miT,99,228);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,229);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,99,230);return * this ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_istream < _CharT , _Traits >:: int_type 
basic_istream < _CharT , _Traits >:: 
get ( void ) 
{ __CvT__record_line____(__CvT_miT,99,237);
__CvT__record_line____(__CvT_miT,99,238);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,99,239);int_type __c = __eof ; 
__CvT__record_line____(__CvT_miT,99,240);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,99,241);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,242);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,243);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,245);try 
{ 
__CvT__record_line____(__CvT_miT,99,247);__c = this -> rdbuf ( ) -> sbumpc ( ) ; 

__CvT__record_line____(__CvT_miT,99,249);if ( ! traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,99,250);_M_gcount = 1 ; 
}else {
__CvT__record_line____(__CvT_miT,99,252);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,256);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,257);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,260);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,99,262);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,99,263);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,99,264);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,265);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,99,266);return __c ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
get ( char_type & __c ) 
{ __CvT__record_line____(__CvT_miT,99,273);
__CvT__record_line____(__CvT_miT,99,274);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,99,275);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,276);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,277);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,279);try 
{ 
__CvT__record_line____(__CvT_miT,99,281);const int_type __cb = this -> rdbuf ( ) -> sbumpc ( ) ; 

__CvT__record_line____(__CvT_miT,99,283);if ( ! traits_type :: eq_int_type ( __cb , traits_type :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,99,285);_M_gcount = 1 ; 
__CvT__record_line____(__CvT_miT,99,286);__c = traits_type :: to_char_type ( __cb ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,99,289);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,293);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,294);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,297);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,99,299);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,99,300);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,99,301);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,302);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,99,303);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
get ( char_type * __s , streamsize __n , char_type __delim ) 
{ __CvT__record_line____(__CvT_miT,99,310);
__CvT__record_line____(__CvT_miT,99,311);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,99,312);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,313);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,314);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,316);try 
{ 
__CvT__record_line____(__CvT_miT,99,318);const int_type __idelim = traits_type :: to_int_type ( __delim ) ; 
__CvT__record_line____(__CvT_miT,99,319);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,99,320);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,99,321);int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,99,323);while ( _M_gcount + 1 < __n 
&& ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,99,327);* __s ++ = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,99,328);++ _M_gcount ; 
__CvT__record_line____(__CvT_miT,99,329);__c = __sb -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,99,331);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,99,332);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,336);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,337);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,340);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 


}__CvT__record_line____(__CvT_miT,99,344);if ( __n > 0 ) 
{__CvT__record_line____(__CvT_miT,99,345);* __s = char_type ( ) ; 
}__CvT__record_line____(__CvT_miT,99,346);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,99,347);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,99,348);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,349);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,99,350);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
get ( __streambuf_type & __sb , char_type __delim ) 
{ __CvT__record_line____(__CvT_miT,99,357);
__CvT__record_line____(__CvT_miT,99,358);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,99,359);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,360);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,361);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,363);try 
{ 
__CvT__record_line____(__CvT_miT,99,365);const int_type __idelim = traits_type :: to_int_type ( __delim ) ; 
__CvT__record_line____(__CvT_miT,99,366);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,99,367);__streambuf_type * __this_sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,99,368);int_type __c = __this_sb -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,99,369);char_type __c2 = traits_type :: to_char_type ( __c ) ; 

__CvT__record_line____(__CvT_miT,99,371);while ( ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __idelim ) 
&& ! traits_type :: eq_int_type ( __sb . sputc ( __c2 ) , __eof ) ) 
{{ 
__CvT__record_line____(__CvT_miT,99,375);++ _M_gcount ; 
__CvT__record_line____(__CvT_miT,99,376);__c = __this_sb -> snextc ( ) ; 
__CvT__record_line____(__CvT_miT,99,377);__c2 = traits_type :: to_char_type ( __c ) ; 
} 
}__CvT__record_line____(__CvT_miT,99,379);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,99,380);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,384);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,385);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,388);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,99,390);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,99,391);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,99,392);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,393);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,99,394);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
getline ( char_type * __s , streamsize __n , char_type __delim ) 
{ __CvT__record_line____(__CvT_miT,99,401);
__CvT__record_line____(__CvT_miT,99,402);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,99,403);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,404);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,405);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,407);try 
{ 
__CvT__record_line____(__CvT_miT,99,409);const int_type __idelim = traits_type :: to_int_type ( __delim ) ; 
__CvT__record_line____(__CvT_miT,99,410);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,99,411);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,99,412);int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,99,414);while ( _M_gcount + 1 < __n 
&& ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,99,418);* __s ++ = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,99,419);__c = __sb -> snextc ( ) ; 
__CvT__record_line____(__CvT_miT,99,420);++ _M_gcount ; 
} 
}__CvT__record_line____(__CvT_miT,99,422);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,99,423);__err |= ios_base :: eofbit ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,99,426);if ( traits_type :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,99,428);__sb -> sbumpc ( ) ; 
__CvT__record_line____(__CvT_miT,99,429);++ _M_gcount ; 
} 
}else {
__CvT__record_line____(__CvT_miT,99,432);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,437);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,438);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,441);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 


}__CvT__record_line____(__CvT_miT,99,445);if ( __n > 0 ) 
{__CvT__record_line____(__CvT_miT,99,446);* __s = char_type ( ) ; 
}__CvT__record_line____(__CvT_miT,99,447);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,99,448);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,99,449);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,450);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,99,451);return * this ; 
} 




template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
ignore ( void ) 
{ __CvT__record_line____(__CvT_miT,99,461);
__CvT__record_line____(__CvT_miT,99,462);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,99,463);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,464);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,466);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,467);try 
{ 
__CvT__record_line____(__CvT_miT,99,469);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,99,470);__streambuf_type * __sb = this -> rdbuf ( ) ; 

__CvT__record_line____(__CvT_miT,99,472);if ( traits_type :: eq_int_type ( __sb -> sbumpc ( ) , __eof ) ) 
{__CvT__record_line____(__CvT_miT,99,473);__err |= ios_base :: eofbit ; 
}else {
__CvT__record_line____(__CvT_miT,99,475);_M_gcount = 1 ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,479);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,480);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,483);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,484);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,485);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,487);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
ignore ( streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,99,494);
__CvT__record_line____(__CvT_miT,99,495);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,99,496);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,497);if ( __cerb && __n > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,99,499);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,500);try 
{ 
__CvT__record_line____(__CvT_miT,99,502);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,99,503);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,99,504);int_type __c = __sb -> sgetc ( ) ; 
# 513 "/usr/include/c++/5/bits/istream.tcc" 3 
__CvT__record_line____(__CvT_miT,99,513);bool __large_ignore = false ; 
__CvT__record_line____(__CvT_miT,99,514);while ( true ) 
{{ 
__CvT__record_line____(__CvT_miT,99,516);while ( _M_gcount < __n 
&& ! traits_type :: eq_int_type ( __c , __eof ) ) 
{{ 
__CvT__record_line____(__CvT_miT,99,519);++ _M_gcount ; 
__CvT__record_line____(__CvT_miT,99,520);__c = __sb -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,99,522);if ( __n == __gnu_cxx :: __numeric_traits < streamsize >:: __max 
&& ! traits_type :: eq_int_type ( __c , __eof ) ) 
{{ 
__CvT__record_line____(__CvT_miT,99,525);_M_gcount = 
__gnu_cxx :: __numeric_traits < streamsize >:: __min ; 
__CvT__record_line____(__CvT_miT,99,527);__large_ignore = true ; 
} 
}else {
__CvT__record_line____(__CvT_miT,99,530);break ; 
}} 

}__CvT__record_line____(__CvT_miT,99,533);if ( __large_ignore ) 
{__CvT__record_line____(__CvT_miT,99,534);_M_gcount = __gnu_cxx :: __numeric_traits < streamsize >:: __max ; 

}__CvT__record_line____(__CvT_miT,99,536);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,99,537);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,541);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,542);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,545);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,546);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,547);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,549);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
ignore ( streamsize __n , int_type __delim ) 
{ __CvT__record_line____(__CvT_miT,99,556);
__CvT__record_line____(__CvT_miT,99,557);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,99,558);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,559);if ( __cerb && __n > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,99,561);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,562);try 
{ 
__CvT__record_line____(__CvT_miT,99,564);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,99,565);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,99,566);int_type __c = __sb -> sgetc ( ) ; 


__CvT__record_line____(__CvT_miT,99,569);bool __large_ignore = false ; 
__CvT__record_line____(__CvT_miT,99,570);while ( true ) 
{{ 
__CvT__record_line____(__CvT_miT,99,572);while ( _M_gcount < __n 
&& ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __delim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,99,576);++ _M_gcount ; 
__CvT__record_line____(__CvT_miT,99,577);__c = __sb -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,99,579);if ( __n == __gnu_cxx :: __numeric_traits < streamsize >:: __max 
&& ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __delim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,99,583);_M_gcount = 
__gnu_cxx :: __numeric_traits < streamsize >:: __min ; 
__CvT__record_line____(__CvT_miT,99,585);__large_ignore = true ; 
} 
}else {
__CvT__record_line____(__CvT_miT,99,588);break ; 
}} 

}__CvT__record_line____(__CvT_miT,99,591);if ( __large_ignore ) 
{__CvT__record_line____(__CvT_miT,99,592);_M_gcount = __gnu_cxx :: __numeric_traits < streamsize >:: __max ; 

}__CvT__record_line____(__CvT_miT,99,594);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,99,595);__err |= ios_base :: eofbit ; 
}else {__CvT__record_line____(__CvT_miT,99,596);if ( traits_type :: eq_int_type ( __c , __delim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,99,598);if ( _M_gcount 
< __gnu_cxx :: __numeric_traits < streamsize >:: __max ) 
{__CvT__record_line____(__CvT_miT,99,600);++ _M_gcount ; 
}__CvT__record_line____(__CvT_miT,99,601);__sb -> sbumpc ( ) ; 
} 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,606);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,607);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,610);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,611);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,612);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,614);return * this ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_istream < _CharT , _Traits >:: int_type 
basic_istream < _CharT , _Traits >:: 
peek ( void ) 
{ __CvT__record_line____(__CvT_miT,99,621);
__CvT__record_line____(__CvT_miT,99,622);int_type __c = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,99,623);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,99,624);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,625);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,627);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,628);try 
{ 
__CvT__record_line____(__CvT_miT,99,630);__c = this -> rdbuf ( ) -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,99,631);if ( traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,99,632);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,636);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,637);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,640);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,641);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,642);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,644);return __c ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
read ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,99,651);
__CvT__record_line____(__CvT_miT,99,652);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,99,653);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,654);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,656);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,657);try 
{ 
__CvT__record_line____(__CvT_miT,99,659);_M_gcount = this -> rdbuf ( ) -> sgetn ( __s , __n ) ; 
__CvT__record_line____(__CvT_miT,99,660);if ( _M_gcount != __n ) 
{__CvT__record_line____(__CvT_miT,99,661);__err |= ( ios_base :: eofbit | ios_base :: failbit ) ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,665);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,666);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,669);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,670);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,671);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,673);return * this ; 
} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_istream < _CharT , _Traits >:: 
readsome ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,99,680);
__CvT__record_line____(__CvT_miT,99,681);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,99,682);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,683);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,685);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,686);try 
{ 

__CvT__record_line____(__CvT_miT,99,689);const streamsize __num = this -> rdbuf ( ) -> in_avail ( ) ; 
__CvT__record_line____(__CvT_miT,99,690);if ( __num > 0 ) 
{__CvT__record_line____(__CvT_miT,99,691);_M_gcount = this -> rdbuf ( ) -> sgetn ( __s , std :: min ( __num , __n ) ) ; 
}else {__CvT__record_line____(__CvT_miT,99,692);if ( __num == - 1 ) 
{__CvT__record_line____(__CvT_miT,99,693);__err |= ios_base :: eofbit ; 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,697);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,698);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,701);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,702);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,703);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,705);return _M_gcount ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
putback ( char_type __c ) 
{ __CvT__record_line____(__CvT_miT,99,712);


__CvT__record_line____(__CvT_miT,99,715);_M_gcount = 0 ; 

__CvT__record_line____(__CvT_miT,99,717);this -> clear ( this -> rdstate ( ) & ~ ios_base :: eofbit ) ; 
__CvT__record_line____(__CvT_miT,99,718);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,719);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,721);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,722);try 
{ 
__CvT__record_line____(__CvT_miT,99,724);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,99,725);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,99,726);if ( ! __sb 
|| traits_type :: eq_int_type ( __sb -> sputbackc ( __c ) , __eof ) ) 
{__CvT__record_line____(__CvT_miT,99,728);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,732);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,733);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,736);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,737);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,738);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,740);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
unget ( void ) 
{ __CvT__record_line____(__CvT_miT,99,747);


__CvT__record_line____(__CvT_miT,99,750);_M_gcount = 0 ; 

__CvT__record_line____(__CvT_miT,99,752);this -> clear ( this -> rdstate ( ) & ~ ios_base :: eofbit ) ; 
__CvT__record_line____(__CvT_miT,99,753);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,754);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,756);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,757);try 
{ 
__CvT__record_line____(__CvT_miT,99,759);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,99,760);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,99,761);if ( ! __sb 
|| traits_type :: eq_int_type ( __sb -> sungetc ( ) , __eof ) ) 
{__CvT__record_line____(__CvT_miT,99,763);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,767);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,768);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,771);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,772);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,773);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,775);return * this ; 
} 

template < typename _CharT , typename _Traits > 
int 
basic_istream < _CharT , _Traits >:: 
sync ( void ) 
{ __CvT__record_line____(__CvT_miT,99,782);


__CvT__record_line____(__CvT_miT,99,785);int __ret = - 1 ; 
__CvT__record_line____(__CvT_miT,99,786);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,787);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,789);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,790);try 
{ 
__CvT__record_line____(__CvT_miT,99,792);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,99,793);if ( __sb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,795);if ( __sb -> pubsync ( ) == - 1 ) 
{__CvT__record_line____(__CvT_miT,99,796);__err |= ios_base :: badbit ; 
}else {
__CvT__record_line____(__CvT_miT,99,798);__ret = 0 ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,803);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,804);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,807);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,808);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,809);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,811);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_istream < _CharT , _Traits >:: pos_type 
basic_istream < _CharT , _Traits >:: 
tellg ( void ) 
{ __CvT__record_line____(__CvT_miT,99,818);


__CvT__record_line____(__CvT_miT,99,821);pos_type __ret = pos_type ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,99,822);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,823);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,825);try 
{ 
__CvT__record_line____(__CvT_miT,99,827);if ( ! this -> fail ( ) ) 
{__CvT__record_line____(__CvT_miT,99,828);__ret = this -> rdbuf ( ) -> pubseekoff ( 0 , ios_base :: cur , 
ios_base :: in ) ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,833);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,834);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,837);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,99,839);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
seekg ( pos_type __pos ) 
{ __CvT__record_line____(__CvT_miT,99,846);



__CvT__record_line____(__CvT_miT,99,850);this -> clear ( this -> rdstate ( ) & ~ ios_base :: eofbit ) ; 
__CvT__record_line____(__CvT_miT,99,851);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,852);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,854);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,855);try 
{ 
__CvT__record_line____(__CvT_miT,99,857);if ( ! this -> fail ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,99,860);const pos_type __p = this -> rdbuf ( ) -> pubseekpos ( __pos , 
ios_base :: in ) ; 


__CvT__record_line____(__CvT_miT,99,864);if ( __p == pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,99,865);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,870);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,871);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,874);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,875);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,876);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,878);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
seekg ( off_type __off , ios_base :: seekdir __dir ) 
{ __CvT__record_line____(__CvT_miT,99,885);



__CvT__record_line____(__CvT_miT,99,889);this -> clear ( this -> rdstate ( ) & ~ ios_base :: eofbit ) ; 
__CvT__record_line____(__CvT_miT,99,890);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,99,891);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,893);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,894);try 
{ 
__CvT__record_line____(__CvT_miT,99,896);if ( ! this -> fail ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,99,899);const pos_type __p = this -> rdbuf ( ) -> pubseekoff ( __off , __dir , 
ios_base :: in ) ; 


__CvT__record_line____(__CvT_miT,99,903);if ( __p == pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,99,904);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,909);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,910);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,913);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,914);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,915);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,917);return * this ; 
} 


template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , _CharT & __c ) 
{ __CvT__record_line____(__CvT_miT,99,924);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef typename __istream_type :: int_type __int_type ; 

__CvT__record_line____(__CvT_miT,99,928);typename __istream_type :: sentry __cerb ( __in , false ) ; 
__CvT__record_line____(__CvT_miT,99,929);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,931);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,932);try 
{ 
__CvT__record_line____(__CvT_miT,99,934);const __int_type __cb = __in . rdbuf ( ) -> sbumpc ( ) ; 
__CvT__record_line____(__CvT_miT,99,935);if ( ! _Traits :: eq_int_type ( __cb , _Traits :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,99,936);__c = _Traits :: to_char_type ( __cb ) ; 
}else {
__CvT__record_line____(__CvT_miT,99,938);__err |= ( ios_base :: eofbit | ios_base :: failbit ) ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,942);__in . _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,943);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,946);__in . _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,99,947);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,948);__in . setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,99,950);return __in ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,99,956);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef _CharT char_type ; 
typedef ctype < _CharT > __ctype_type ; 

__CvT__record_line____(__CvT_miT,99,963);streamsize __extracted = 0 ; 
__CvT__record_line____(__CvT_miT,99,964);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,99,965);typename __istream_type :: sentry __cerb ( __in , false ) ; 
__CvT__record_line____(__CvT_miT,99,966);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,99,968);try 
{ 

__CvT__record_line____(__CvT_miT,99,971);streamsize __num = __in . width ( ) ; 
__CvT__record_line____(__CvT_miT,99,972);if ( __num <= 0 ) 
{__CvT__record_line____(__CvT_miT,99,973);__num = __gnu_cxx :: __numeric_traits < streamsize >:: __max ; 

}__CvT__record_line____(__CvT_miT,99,975);const __ctype_type & __ct = use_facet < __ctype_type > ( __in . getloc ( ) ) ; 

__CvT__record_line____(__CvT_miT,99,977);const int_type __eof = _Traits :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,99,978);__streambuf_type * __sb = __in . rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,99,979);int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,99,981);while ( __extracted < __num - 1 
&& ! _Traits :: eq_int_type ( __c , __eof ) 
&& ! __ct . is ( ctype_base :: space , 
_Traits :: to_char_type ( __c ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,99,986);* __s ++ = _Traits :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,99,987);++ __extracted ; 
__CvT__record_line____(__CvT_miT,99,988);__c = __sb -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,99,990);if ( _Traits :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,99,991);__err |= ios_base :: eofbit ; 



}__CvT__record_line____(__CvT_miT,99,995);* __s = char_type ( ) ; 
__CvT__record_line____(__CvT_miT,99,996);__in . width ( 0 ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,99,1000);__in . _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,99,1001);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,99,1004);__in . _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,99,1006);if ( ! __extracted ) 
{__CvT__record_line____(__CvT_miT,99,1007);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,99,1008);if ( __err ) 
{__CvT__record_line____(__CvT_miT,99,1009);__in . setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,99,1010);return __in ; 
} 


template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
ws ( basic_istream < _CharT , _Traits >& __in ) 
{ __CvT__record_line____(__CvT_miT,99,1017);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef typename __istream_type :: int_type __int_type ; 
typedef ctype < _CharT > __ctype_type ; 

__CvT__record_line____(__CvT_miT,99,1023);const __ctype_type & __ct = use_facet < __ctype_type > ( __in . getloc ( ) ) ; 
__CvT__record_line____(__CvT_miT,99,1024);const __int_type __eof = _Traits :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,99,1025);__streambuf_type * __sb = __in . rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,99,1026);__int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,99,1028);while ( ! _Traits :: eq_int_type ( __c , __eof ) 
&& __ct . is ( ctype_base :: space , _Traits :: to_char_type ( __c ) ) ) 
{__CvT__record_line____(__CvT_miT,99,1030);__c = __sb -> snextc ( ) ; 

}__CvT__record_line____(__CvT_miT,99,1032);if ( _Traits :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,99,1033);__in . setstate ( ios_base :: eofbit ) ; 
}__CvT__record_line____(__CvT_miT,99,1034);return __in ; 
} 




extern template class basic_istream < char > ; 
extern template istream & ws ( istream & ) ; 
extern template istream & operator >> ( istream & , char & ) ; 
extern template istream & operator >> ( istream & , char * ) ; 
extern template istream & operator >> ( istream & , unsigned char & ) ; 
extern template istream & operator >> ( istream & , signed char & ) ; 
extern template istream & operator >> ( istream & , unsigned char * ) ; 
extern template istream & operator >> ( istream & , signed char * ) ; 

extern template istream & istream :: _M_extract ( unsigned short & ) ; 
extern template istream & istream :: _M_extract ( unsigned int & ) ; 
extern template istream & istream :: _M_extract ( long & ) ; 
extern template istream & istream :: _M_extract ( unsigned long & ) ; 
extern template istream & istream :: _M_extract ( bool & ) ; 

extern template istream & istream :: _M_extract ( long long & ) ; 
extern template istream & istream :: _M_extract ( unsigned long long & ) ; 

extern template istream & istream :: _M_extract ( float & ) ; 
extern template istream & istream :: _M_extract ( double & ) ; 
extern template istream & istream :: _M_extract ( long double & ) ; 
extern template istream & istream :: _M_extract ( void *& ) ; 

extern template class basic_iostream < char > ; 


extern template class basic_istream < wchar_t > ; 
extern template wistream & ws ( wistream & ) ; 
extern template wistream & operator >> ( wistream & , wchar_t & ) ; 
extern template wistream & operator >> ( wistream & , wchar_t * ) ; 

extern template wistream & wistream :: _M_extract ( unsigned short & ) ; 
extern template wistream & wistream :: _M_extract ( unsigned int & ) ; 
extern template wistream & wistream :: _M_extract ( long & ) ; 
extern template wistream & wistream :: _M_extract ( unsigned long & ) ; 
extern template wistream & wistream :: _M_extract ( bool & ) ; 

extern template wistream & wistream :: _M_extract ( long long & ) ; 
extern template wistream & wistream :: _M_extract ( unsigned long long & ) ; 

extern template wistream & wistream :: _M_extract ( float & ) ; 
extern template wistream & wistream :: _M_extract ( double & ) ; 
extern template wistream & wistream :: _M_extract ( long double & ) ; 
extern template wistream & wistream :: _M_extract ( void *& ) ; 

extern template class basic_iostream < wchar_t > ; 




} 
# 935 "/usr/include/c++/5/istream" 2 3 
# 39 "/usr/include/c++/5/fstream" 2 3 

# 1 "/usr/include/c++/5/bits/codecvt.h" 1 3 
# 39 "/usr/include/c++/5/bits/codecvt.h" 3 

# 40 "/usr/include/c++/5/bits/codecvt.h" 3 

namespace std 
{ 



class codecvt_base 
{ 
public : 
enum result 
{ 
ok , 
partial , 
error , 
noconv 
} ; 
} ; 
# 67 "/usr/include/c++/5/bits/codecvt.h" 3 
template < typename _InternT , typename _ExternT , typename _StateT > 
class __codecvt_abstract_base 
: public locale :: facet , public codecvt_base 
{ 
public : 

typedef codecvt_base :: result result ; 
typedef _InternT intern_type ; 
typedef _ExternT extern_type ; 
typedef _StateT state_type ; 
# 115 "/usr/include/c++/5/bits/codecvt.h" 3 
result 
out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const 
{ __CvT__record_line____(__CvT_miT,100,120);
__CvT__record_line____(__CvT_miT,100,121);return this -> do_out ( __state , __from , __from_end , __from_next , 
__to , __to_end , __to_next ) ; 
} 
# 154 "/usr/include/c++/5/bits/codecvt.h" 3 
result 
unshift ( state_type & __state , extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const 
{ __CvT__record_line____(__CvT_miT,100,157);return this -> do_unshift ( __state , __to , __to_end , __to_next ) ; } 
# 195 "/usr/include/c++/5/bits/codecvt.h" 3 
result 
in ( state_type & __state , const extern_type * __from , 
const extern_type * __from_end , const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const 
{ __CvT__record_line____(__CvT_miT,100,200);
__CvT__record_line____(__CvT_miT,100,201);return this -> do_in ( __state , __from , __from_end , __from_next , 
__to , __to_end , __to_next ) ; 
} 

int 
encoding ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,100,207);return this -> do_encoding ( ) ; } 

bool 
always_noconv ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,100,211);return this -> do_always_noconv ( ) ; } 

int 
length ( state_type & __state , const extern_type * __from , 
const extern_type * __end , size_t __max ) const 
{ __CvT__record_line____(__CvT_miT,100,216);return this -> do_length ( __state , __from , __end , __max ) ; } 

int 
max_length ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,100,220);return this -> do_max_length ( ) ; } 

protected : 
explicit 
__codecvt_abstract_base ( size_t __refs = 0 ) : locale :: facet ( __refs ) { __CvT__record_line____(__CvT_miT,100,224);} 

virtual 
~ __codecvt_abstract_base ( ) { __CvT__record_line____(__CvT_miT,100,227);} 
# 236 "/usr/include/c++/5/bits/codecvt.h" 3 
virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const = 0 ; 

virtual result 
do_unshift ( state_type & __state , extern_type * __to , 
extern_type * __to_end , extern_type *& __to_next ) const = 0 ; 

virtual result 
do_in ( state_type & __state , const extern_type * __from , 
const extern_type * __from_end , const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const = 0 ; 

virtual int 
do_encoding ( ) const throw ( ) = 0 ; 

virtual bool 
do_always_noconv ( ) const throw ( ) = 0 ; 

virtual int 
do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const = 0 ; 

virtual int 
do_max_length ( ) const throw ( ) = 0 ; 
} ; 
# 273 "/usr/include/c++/5/bits/codecvt.h" 3 
template < typename _InternT , typename _ExternT , typename _StateT > 
class codecvt 
: public __codecvt_abstract_base < _InternT , _ExternT , _StateT > 
{ 
public : 

typedef codecvt_base :: result result ; 
typedef _InternT intern_type ; 
typedef _ExternT extern_type ; 
typedef _StateT state_type ; 

protected : 
__c_locale _M_c_locale_codecvt ; 

public : 
static locale :: id id ; 

explicit 
codecvt ( size_t __refs = 0 ) 
: __codecvt_abstract_base < _InternT , _ExternT , _StateT > ( __refs ) , 
_M_c_locale_codecvt ( 0 ) 
{ __CvT__record_line____(__CvT_miT,100,294);} 

explicit 
codecvt ( __c_locale __cloc , size_t __refs = 0 ) ; 

protected : 
virtual 
~ codecvt ( ) { __CvT__record_line____(__CvT_miT,100,301);} 

virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_unshift ( state_type & __state , extern_type * __to , 
extern_type * __to_end , extern_type *& __to_next ) const ; 

virtual result 
do_in ( state_type & __state , const extern_type * __from , 
const extern_type * __from_end , const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const ; 

virtual int 
do_encoding ( ) const throw ( ) ; 

virtual bool 
do_always_noconv ( ) const throw ( ) ; 

virtual int 
do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const ; 

virtual int 
do_max_length ( ) const throw ( ) ; 
} ; 

template < typename _InternT , typename _ExternT , typename _StateT > 
locale :: id codecvt < _InternT , _ExternT , _StateT >:: id ; 


template <> 
class codecvt < char , char , mbstate_t > 
: public __codecvt_abstract_base < char , char , mbstate_t > 
{ 
friend class messages < char > ; 

public : 

typedef char intern_type ; 
typedef char extern_type ; 
typedef mbstate_t state_type ; 

protected : 
__c_locale _M_c_locale_codecvt ; 

public : 
static locale :: id id ; 

explicit 
codecvt ( size_t __refs = 0 ) ; 

explicit 
codecvt ( __c_locale __cloc , size_t __refs = 0 ) ; 

protected : 
virtual 
~ codecvt ( ) ; 

virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_unshift ( state_type & __state , extern_type * __to , 
extern_type * __to_end , extern_type *& __to_next ) const ; 

virtual result 
do_in ( state_type & __state , const extern_type * __from , 
const extern_type * __from_end , const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const ; 

virtual int 
do_encoding ( ) const throw ( ) ; 

virtual bool 
do_always_noconv ( ) const throw ( ) ; 

virtual int 
do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const ; 

virtual int 
do_max_length ( ) const throw ( ) ; 
} ; 






template <> 
class codecvt < wchar_t , char , mbstate_t > 
: public __codecvt_abstract_base < wchar_t , char , mbstate_t > 
{ 
friend class messages < wchar_t > ; 

public : 

typedef wchar_t intern_type ; 
typedef char extern_type ; 
typedef mbstate_t state_type ; 

protected : 
__c_locale _M_c_locale_codecvt ; 

public : 
static locale :: id id ; 

explicit 
codecvt ( size_t __refs = 0 ) ; 

explicit 
codecvt ( __c_locale __cloc , size_t __refs = 0 ) ; 

protected : 
virtual 
~ codecvt ( ) ; 

virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_unshift ( state_type & __state , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_in ( state_type & __state , 
const extern_type * __from , const extern_type * __from_end , 
const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const ; 

virtual 
int do_encoding ( ) const throw ( ) ; 

virtual 
bool do_always_noconv ( ) const throw ( ) ; 

virtual 
int do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const ; 

virtual int 
do_max_length ( ) const throw ( ) ; 
} ; 
# 581 "/usr/include/c++/5/bits/codecvt.h" 3 
template < typename _InternT , typename _ExternT , typename _StateT > 
class codecvt_byname : public codecvt < _InternT , _ExternT , _StateT > 
{ 
public : 
explicit 
codecvt_byname ( const char * __s , size_t __refs = 0 ) 
: codecvt < _InternT , _ExternT , _StateT > ( __refs ) 
{ __CvT__record_line____(__CvT_miT,100,588);
__CvT__record_line____(__CvT_miT,100,589);if ( __builtin_strcmp ( __s , "C" ) != 0 
&& __builtin_strcmp ( __s , "POSIX" ) != 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,100,592);this -> _S_destroy_c_locale ( this -> _M_c_locale_codecvt ) ; 
__CvT__record_line____(__CvT_miT,100,593);this -> _S_create_c_locale ( this -> _M_c_locale_codecvt , __s ) ; 
} 
}} 







protected : 
virtual 
~ codecvt_byname ( ) { __CvT__record_line____(__CvT_miT,100,605);} 
} ; 
# 649 "/usr/include/c++/5/bits/codecvt.h" 3 
extern template class codecvt_byname < char , char , mbstate_t > ; 

extern template 
const codecvt < char , char , mbstate_t >& 
use_facet < codecvt < char , char , mbstate_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < codecvt < char , char , mbstate_t > > ( const locale & ) ; 


extern template class codecvt_byname < wchar_t , char , mbstate_t > ; 

extern template 
const codecvt < wchar_t , char , mbstate_t >& 
use_facet < codecvt < wchar_t , char , mbstate_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < codecvt < wchar_t , char , mbstate_t > > ( const locale & ) ; 
# 678 "/usr/include/c++/5/bits/codecvt.h" 3 

} 
# 41 "/usr/include/c++/5/fstream" 2 3 
# 1 "/usr/include/c++/5/cstdio" 1 3 
# 39 "/usr/include/c++/5/cstdio" 3 

# 40 "/usr/include/c++/5/cstdio" 3 


# 1 "/usr/include/stdio.h" 1 3 4 
# 29 "/usr/include/stdio.h" 3 4 
extern "C" { 



# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4 
# 34 "/usr/include/stdio.h" 2 3 4 
# 74 "/usr/include/stdio.h" 3 4 
# 1 "/usr/include/libio.h" 1 3 4 
# 31 "/usr/include/libio.h" 3 4 
# 1 "/usr/include/_G_config.h" 1 3 4 
# 15 "/usr/include/_G_config.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4 
# 16 "/usr/include/_G_config.h" 2 3 4 




# 1 "/usr/include/wchar.h" 1 3 4 
# 21 "/usr/include/_G_config.h" 2 3 4 
typedef struct 
{ 
__off_t __pos ; 
__mbstate_t __state ; 
} _G_fpos_t ; 
typedef struct 
{ 
__off64_t __pos ; 
__mbstate_t __state ; 
} _G_fpos64_t ; 
# 32 "/usr/include/libio.h" 2 3 4 
# 49 "/usr/include/libio.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4 
# 50 "/usr/include/libio.h" 2 3 4 
# 144 "/usr/include/libio.h" 3 4 
struct _IO_jump_t ; struct _IO_FILE ; 





typedef void _IO_lock_t ; 





struct _IO_marker { 
struct _IO_marker * _next ; 
struct _IO_FILE * _sbuf ; 



int _pos ; 
# 173 "/usr/include/libio.h" 3 4 
} ; 


enum __codecvt_result 
{ 
__codecvt_ok , 
__codecvt_partial , 
__codecvt_error , 
__codecvt_noconv 
} ; 
# 241 "/usr/include/libio.h" 3 4 
struct _IO_FILE { 
int _flags ; 




char * _IO_read_ptr ; 
char * _IO_read_end ; 
char * _IO_read_base ; 
char * _IO_write_base ; 
char * _IO_write_ptr ; 
char * _IO_write_end ; 
char * _IO_buf_base ; 
char * _IO_buf_end ; 

char * _IO_save_base ; 
char * _IO_backup_base ; 
char * _IO_save_end ; 

struct _IO_marker * _markers ; 

struct _IO_FILE * _chain ; 

int _fileno ; 



int _flags2 ; 

__off_t _old_offset ; 



unsigned short _cur_column ; 
signed char _vtable_offset ; 
char _shortbuf [ 1 ] ; 



_IO_lock_t * _lock ; 
# 289 "/usr/include/libio.h" 3 4 
__off64_t _offset ; 







void * __pad1 ; 
void * __pad2 ; 
void * __pad3 ; 
void * __pad4 ; 

size_t __pad5 ; 
int _mode ; 

char _unused2 [ 15 * sizeof ( int ) - 4 * sizeof ( void * ) - sizeof ( size_t ) ] ; 

} ; 





struct _IO_FILE_plus ; 

extern struct _IO_FILE_plus _IO_2_1_stdin_ ; 
extern struct _IO_FILE_plus _IO_2_1_stdout_ ; 
extern struct _IO_FILE_plus _IO_2_1_stderr_ ; 
# 333 "/usr/include/libio.h" 3 4 
typedef __ssize_t __io_read_fn ( void * __cookie , char * __buf , size_t __nbytes ) ; 







typedef __ssize_t __io_write_fn ( void * __cookie , const char * __buf , 
size_t __n ) ; 







typedef int __io_seek_fn ( void * __cookie , __off64_t * __pos , int __w ) ; 


typedef int __io_close_fn ( void * __cookie ) ; 




typedef __io_read_fn cookie_read_function_t ; 
typedef __io_write_fn cookie_write_function_t ; 
typedef __io_seek_fn cookie_seek_function_t ; 
typedef __io_close_fn cookie_close_function_t ; 


typedef struct 
{ 
__io_read_fn * read ; 
__io_write_fn * write ; 
__io_seek_fn * seek ; 
__io_close_fn * close ; 
} _IO_cookie_io_functions_t ; 
typedef _IO_cookie_io_functions_t cookie_io_functions_t ; 

struct _IO_cookie_file ; 


extern void _IO_cookie_init ( struct _IO_cookie_file * __cfile , int __read_write , 
void * __cookie , _IO_cookie_io_functions_t __fns ) ; 




extern "C" { 


extern int __underflow ( _IO_FILE * ) ; 
extern int __uflow ( _IO_FILE * ) ; 
extern int __overflow ( _IO_FILE * , int ) ; 
# 429 "/usr/include/libio.h" 3 4 
extern int _IO_getc ( _IO_FILE * __fp ) ; 
extern int _IO_putc ( int __c , _IO_FILE * __fp ) ; 
extern int _IO_feof ( _IO_FILE * __fp ) throw ( ) ; 
extern int _IO_ferror ( _IO_FILE * __fp ) throw ( ) ; 

extern int _IO_peekc_locked ( _IO_FILE * __fp ) ; 





extern void _IO_flockfile ( _IO_FILE * ) throw ( ) ; 
extern void _IO_funlockfile ( _IO_FILE * ) throw ( ) ; 
extern int _IO_ftrylockfile ( _IO_FILE * ) throw ( ) ; 
# 459 "/usr/include/libio.h" 3 4 
extern int _IO_vfscanf ( _IO_FILE * __restrict , const char * __restrict , 
__gnuc_va_list , int * __restrict ) ; 
extern int _IO_vfprintf ( _IO_FILE * __restrict , const char * __restrict , 
__gnuc_va_list ) ; 
extern __ssize_t _IO_padn ( _IO_FILE * , int , __ssize_t ) ; 
extern size_t _IO_sgetn ( _IO_FILE * , void * , size_t ) ; 

extern __off64_t _IO_seekoff ( _IO_FILE * , __off64_t , int , int ) ; 
extern __off64_t _IO_seekpos ( _IO_FILE * , __off64_t , int ) ; 

extern void _IO_free_backup_area ( _IO_FILE * ) throw ( ) ; 
# 521 "/usr/include/libio.h" 3 4 
} 
# 75 "/usr/include/stdio.h" 2 3 4 




typedef __gnuc_va_list va_list ; 
# 90 "/usr/include/stdio.h" 3 4 
typedef __off_t off_t ; 






typedef __off64_t off64_t ; 




typedef __ssize_t ssize_t ; 







typedef _G_fpos_t fpos_t ; 





typedef _G_fpos64_t fpos64_t ; 
# 164 "/usr/include/stdio.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4 
# 165 "/usr/include/stdio.h" 2 3 4 



extern struct _IO_FILE * stdin ; 
extern struct _IO_FILE * stdout ; 
extern struct _IO_FILE * stderr ; 







extern int remove ( const char * __filename ) throw ( ) ; 

extern int rename ( const char * __old , const char * __new ) throw ( ) ; 




extern int renameat ( int __oldfd , const char * __old , int __newfd , 
const char * __new ) throw ( ) ; 








extern FILE * tmpfile ( void ) ; 
# 205 "/usr/include/stdio.h" 3 4 
extern FILE * tmpfile64 ( void ) ; 



extern char * tmpnam ( char * __s ) throw ( ) ; 





extern char * tmpnam_r ( char * __s ) throw ( ) ; 
# 227 "/usr/include/stdio.h" 3 4 
extern char * tempnam ( const char * __dir , const char * __pfx ) 
throw ( ) ; 








extern int fclose ( FILE * __stream ) ; 




extern int fflush ( FILE * __stream ) ; 

# 252 "/usr/include/stdio.h" 3 4 
extern int fflush_unlocked ( FILE * __stream ) ; 
# 262 "/usr/include/stdio.h" 3 4 
extern int fcloseall ( void ) ; 









extern FILE * fopen ( const char * __restrict __filename , 
const char * __restrict __modes ) ; 




extern FILE * freopen ( const char * __restrict __filename , 
const char * __restrict __modes , 
FILE * __restrict __stream ) ; 
# 295 "/usr/include/stdio.h" 3 4 


extern FILE * fopen64 ( const char * __restrict __filename , 
const char * __restrict __modes ) ; 
extern FILE * freopen64 ( const char * __restrict __filename , 
const char * __restrict __modes , 
FILE * __restrict __stream ) ; 




extern FILE * fdopen ( int __fd , const char * __modes ) throw ( ) ; 





extern FILE * fopencookie ( void * __restrict __magic_cookie , 
const char * __restrict __modes , 
_IO_cookie_io_functions_t __io_funcs ) throw ( ) ; 




extern FILE * fmemopen ( void * __s , size_t __len , const char * __modes ) 
throw ( ) ; 




extern FILE * open_memstream ( char ** __bufloc , size_t * __sizeloc ) throw ( ) ; 






extern void setbuf ( FILE * __restrict __stream , char * __restrict __buf ) throw ( ) ; 



extern int setvbuf ( FILE * __restrict __stream , char * __restrict __buf , 
int __modes , size_t __n ) throw ( ) ; 





extern void setbuffer ( FILE * __restrict __stream , char * __restrict __buf , 
size_t __size ) throw ( ) ; 


extern void setlinebuf ( FILE * __stream ) throw ( ) ; 








extern int fprintf ( FILE * __restrict __stream , 
const char * __restrict __format , ... ) ; 




extern int printf ( const char * __restrict __format , ... ) ; 

extern int sprintf ( char * __restrict __s , 
const char * __restrict __format , ... ) throw ( ) ; 





extern int vfprintf ( FILE * __restrict __s , const char * __restrict __format , 
__gnuc_va_list __arg ) ; 




extern int vprintf ( const char * __restrict __format , __gnuc_va_list __arg ) ; 

extern int vsprintf ( char * __restrict __s , const char * __restrict __format , 
__gnuc_va_list __arg ) throw ( ) ; 





extern int snprintf ( char * __restrict __s , size_t __maxlen , 
const char * __restrict __format , ... ) 
throw ( ) ; 

extern int vsnprintf ( char * __restrict __s , size_t __maxlen , 
const char * __restrict __format , __gnuc_va_list __arg ) 
throw ( ) ; 






extern int vasprintf ( char ** __restrict __ptr , const char * __restrict __f , 
__gnuc_va_list __arg ) 
throw ( ) ; 
extern int __asprintf ( char ** __restrict __ptr , 
const char * __restrict __fmt , ... ) 
throw ( ) ; 
extern int asprintf ( char ** __restrict __ptr , 
const char * __restrict __fmt , ... ) 
throw ( ) ; 




extern int vdprintf ( int __fd , const char * __restrict __fmt , 
__gnuc_va_list __arg ) 
; 
extern int dprintf ( int __fd , const char * __restrict __fmt , ... ) 
; 








extern int fscanf ( FILE * __restrict __stream , 
const char * __restrict __format , ... ) ; 




extern int scanf ( const char * __restrict __format , ... ) ; 

extern int sscanf ( const char * __restrict __s , 
const char * __restrict __format , ... ) throw ( ) ; 
# 463 "/usr/include/stdio.h" 3 4 








extern int vfscanf ( FILE * __restrict __s , const char * __restrict __format , 
__gnuc_va_list __arg ) 
; 





extern int vscanf ( const char * __restrict __format , __gnuc_va_list __arg ) 
; 


extern int vsscanf ( const char * __restrict __s , 
const char * __restrict __format , __gnuc_va_list __arg ) 
throw ( ) ; 
# 522 "/usr/include/stdio.h" 3 4 









extern int fgetc ( FILE * __stream ) ; 
extern int getc ( FILE * __stream ) ; 





extern int getchar ( void ) ; 

# 550 "/usr/include/stdio.h" 3 4 
extern int getc_unlocked ( FILE * __stream ) ; 
extern int getchar_unlocked ( void ) ; 
# 561 "/usr/include/stdio.h" 3 4 
extern int fgetc_unlocked ( FILE * __stream ) ; 











extern int fputc ( int __c , FILE * __stream ) ; 
extern int putc ( int __c , FILE * __stream ) ; 





extern int putchar ( int __c ) ; 

# 594 "/usr/include/stdio.h" 3 4 
extern int fputc_unlocked ( int __c , FILE * __stream ) ; 







extern int putc_unlocked ( int __c , FILE * __stream ) ; 
extern int putchar_unlocked ( int __c ) ; 






extern int getw ( FILE * __stream ) ; 


extern int putw ( int __w , FILE * __stream ) ; 








extern char * fgets ( char * __restrict __s , int __n , FILE * __restrict __stream ) 
; 
# 638 "/usr/include/stdio.h" 3 4 
extern char * gets ( char * __s ) ; 


# 649 "/usr/include/stdio.h" 3 4 
extern char * fgets_unlocked ( char * __restrict __s , int __n , 
FILE * __restrict __stream ) ; 
# 665 "/usr/include/stdio.h" 3 4 
extern __ssize_t __getdelim ( char ** __restrict __lineptr , 
size_t * __restrict __n , int __delimiter , 
FILE * __restrict __stream ) ; 
extern __ssize_t getdelim ( char ** __restrict __lineptr , 
size_t * __restrict __n , int __delimiter , 
FILE * __restrict __stream ) ; 







extern __ssize_t getline ( char ** __restrict __lineptr , 
size_t * __restrict __n , 
FILE * __restrict __stream ) ; 








extern int fputs ( const char * __restrict __s , FILE * __restrict __stream ) ; 





extern int puts ( const char * __s ) ; 






extern int ungetc ( int __c , FILE * __stream ) ; 






extern size_t fread ( void * __restrict __ptr , size_t __size , 
size_t __n , FILE * __restrict __stream ) ; 




extern size_t fwrite ( const void * __restrict __ptr , size_t __size , 
size_t __n , FILE * __restrict __s ) ; 

# 726 "/usr/include/stdio.h" 3 4 
extern int fputs_unlocked ( const char * __restrict __s , 
FILE * __restrict __stream ) ; 
# 737 "/usr/include/stdio.h" 3 4 
extern size_t fread_unlocked ( void * __restrict __ptr , size_t __size , 
size_t __n , FILE * __restrict __stream ) ; 
extern size_t fwrite_unlocked ( const void * __restrict __ptr , size_t __size , 
size_t __n , FILE * __restrict __stream ) ; 








extern int fseek ( FILE * __stream , long int __off , int __whence ) ; 




extern long int ftell ( FILE * __stream ) ; 




extern void rewind ( FILE * __stream ) ; 

# 773 "/usr/include/stdio.h" 3 4 
extern int fseeko ( FILE * __stream , __off_t __off , int __whence ) ; 




extern __off_t ftello ( FILE * __stream ) ; 
# 792 "/usr/include/stdio.h" 3 4 






extern int fgetpos ( FILE * __restrict __stream , fpos_t * __restrict __pos ) ; 




extern int fsetpos ( FILE * __stream , const fpos_t * __pos ) ; 
# 815 "/usr/include/stdio.h" 3 4 



extern int fseeko64 ( FILE * __stream , __off64_t __off , int __whence ) ; 
extern __off64_t ftello64 ( FILE * __stream ) ; 
extern int fgetpos64 ( FILE * __restrict __stream , fpos64_t * __restrict __pos ) ; 
extern int fsetpos64 ( FILE * __stream , const fpos64_t * __pos ) ; 




extern void clearerr ( FILE * __stream ) throw ( ) ; 

extern int feof ( FILE * __stream ) throw ( ) ; 

extern int ferror ( FILE * __stream ) throw ( ) ; 




extern void clearerr_unlocked ( FILE * __stream ) throw ( ) ; 
extern int feof_unlocked ( FILE * __stream ) throw ( ) ; 
extern int ferror_unlocked ( FILE * __stream ) throw ( ) ; 








extern void perror ( const char * __s ) ; 






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4 
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4 
extern int sys_nerr ; 
extern const char * const sys_errlist [ ] ; 


extern int _sys_nerr ; 
extern const char * const _sys_errlist [ ] ; 
# 854 "/usr/include/stdio.h" 2 3 4 




extern int fileno ( FILE * __stream ) throw ( ) ; 




extern int fileno_unlocked ( FILE * __stream ) throw ( ) ; 
# 872 "/usr/include/stdio.h" 3 4 
extern FILE * popen ( const char * __command , const char * __modes ) ; 





extern int pclose ( FILE * __stream ) ; 





extern char * ctermid ( char * __s ) throw ( ) ; 





extern char * cuserid ( char * __s ) ; 




struct obstack ; 


extern int obstack_printf ( struct obstack * __restrict __obstack , 
const char * __restrict __format , ... ) 
throw ( ) ; 
extern int obstack_vprintf ( struct obstack * __restrict __obstack , 
const char * __restrict __format , 
__gnuc_va_list __args ) 
throw ( ) ; 







extern void flockfile ( FILE * __stream ) throw ( ) ; 



extern int ftrylockfile ( FILE * __stream ) throw ( ) ; 


extern void funlockfile ( FILE * __stream ) throw ( ) ; 
# 942 "/usr/include/stdio.h" 3 4 
} 
# 43 "/usr/include/c++/5/cstdio" 2 3 
# 96 "/usr/include/c++/5/cstdio" 3 
namespace std 
{ 
using :: FILE ; 
using :: fpos_t ; 

using :: clearerr ; 
using :: fclose ; 
using :: feof ; 
using :: ferror ; 
using :: fflush ; 
using :: fgetc ; 
using :: fgetpos ; 
using :: fgets ; 
using :: fopen ; 
using :: fprintf ; 
using :: fputc ; 
using :: fputs ; 
using :: fread ; 
using :: freopen ; 
using :: fscanf ; 
using :: fseek ; 
using :: fsetpos ; 
using :: ftell ; 
using :: fwrite ; 
using :: getc ; 
using :: getchar ; 


using :: gets ; 

using :: perror ; 
using :: printf ; 
using :: putc ; 
using :: putchar ; 
using :: puts ; 
using :: remove ; 
using :: rename ; 
using :: rewind ; 
using :: scanf ; 
using :: setbuf ; 
using :: setvbuf ; 
using :: sprintf ; 
using :: sscanf ; 
using :: tmpfile ; 

using :: tmpnam ; 

using :: ungetc ; 
using :: vfprintf ; 
using :: vprintf ; 
using :: vsprintf ; 
} 
# 157 "/usr/include/c++/5/cstdio" 3 
namespace __gnu_cxx 
{ 
# 175 "/usr/include/c++/5/cstdio" 3 
using :: snprintf ; 
using :: vfscanf ; 
using :: vscanf ; 
using :: vsnprintf ; 
using :: vsscanf ; 

} 

namespace std 
{ 
using :: __gnu_cxx :: snprintf ; 
using :: __gnu_cxx :: vfscanf ; 
using :: __gnu_cxx :: vscanf ; 
using :: __gnu_cxx :: vsnprintf ; 
using :: __gnu_cxx :: vsscanf ; 
} 
# 42 "/usr/include/c++/5/fstream" 2 3 
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/basic_file.h" 1 3 
# 37 "/usr/include/x86_64-linux-gnu/c++/5/bits/basic_file.h" 3 

# 38 "/usr/include/x86_64-linux-gnu/c++/5/bits/basic_file.h" 3 


# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++io.h" 1 3 
# 35 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++io.h" 3 
# 1 "/usr/include/c++/5/cstdio" 1 3 
# 39 "/usr/include/c++/5/cstdio" 3 

# 40 "/usr/include/c++/5/cstdio" 3 
# 36 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++io.h" 2 3 


namespace std 
{ 


typedef __gthread_mutex_t __c_lock ; 


typedef FILE __c_file ; 


} 
# 41 "/usr/include/x86_64-linux-gnu/c++/5/bits/basic_file.h" 2 3 



namespace std 
{ 



template < typename _CharT > 
class __basic_file ; 


template <> 
class __basic_file < char > 
{ 

__c_file * _M_cfile ; 


bool _M_cfile_created ; 

public : 
__basic_file ( __c_lock * __lock = 0 ) throw ( ) ; 
# 84 "/usr/include/x86_64-linux-gnu/c++/5/bits/basic_file.h" 3 
__basic_file * 
open ( const char * __name , ios_base :: openmode __mode , int __prot = 0664 ) ; 

__basic_file * 
sys_open ( __c_file * __file , ios_base :: openmode ) ; 

__basic_file * 
sys_open ( int __fd , ios_base :: openmode __mode ) throw ( ) ; 

__basic_file * 
close ( ) ; 

bool 
is_open ( ) const throw ( ) ; 

int 
fd ( ) throw ( ) ; 

__c_file * 
file ( ) throw ( ) ; 

~ __basic_file ( ) ; 

streamsize 
xsputn ( const char * __s , streamsize __n ) ; 

streamsize 
xsputn_2 ( const char * __s1 , streamsize __n1 , 
const char * __s2 , streamsize __n2 ) ; 

streamsize 
xsgetn ( char * __s , streamsize __n ) ; 

streamoff 
seekoff ( streamoff __off , ios_base :: seekdir __way ) throw ( ) ; 

int 
sync ( ) ; 

streamsize 
showmanyc ( ) ; 
} ; 


} 
# 43 "/usr/include/c++/5/fstream" 2 3 




namespace std 
{ 

# 71 "/usr/include/c++/5/fstream" 3 
template < typename _CharT , typename _Traits > 
class basic_filebuf : public basic_streambuf < _CharT , _Traits > 
{ 
# 88 "/usr/include/c++/5/fstream" 3 
public : 

typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 

typedef basic_streambuf < char_type , traits_type > __streambuf_type ; 
typedef basic_filebuf < char_type , traits_type > __filebuf_type ; 
typedef __basic_file < char > __file_type ; 
typedef typename traits_type :: state_type __state_type ; 
typedef codecvt < char_type , char , __state_type > __codecvt_type ; 

friend class ios_base ; 

protected : 


__c_lock _M_lock ; 


__file_type _M_file ; 


ios_base :: openmode _M_mode ; 


__state_type _M_state_beg ; 




__state_type _M_state_cur ; 



__state_type _M_state_last ; 


char_type * _M_buf ; 






size_t _M_buf_size ; 


bool _M_buf_allocated ; 
# 147 "/usr/include/c++/5/fstream" 3 
bool _M_reading ; 
bool _M_writing ; 







char_type _M_pback ; 
char_type * _M_pback_cur_save ; 
char_type * _M_pback_end_save ; 
bool _M_pback_init ; 



const __codecvt_type * _M_codecvt ; 






char * _M_ext_buf ; 




streamsize _M_ext_buf_size ; 






const char * _M_ext_next ; 
char * _M_ext_end ; 






void 
_M_create_pback ( ) 
{ __CvT__record_line____(__CvT_miT,79,192);
__CvT__record_line____(__CvT_miT,79,193);if ( ! _M_pback_init ) 
{{ 
__CvT__record_line____(__CvT_miT,79,195);_M_pback_cur_save = this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,79,196);_M_pback_end_save = this -> egptr ( ) ; 
__CvT__record_line____(__CvT_miT,79,197);this -> setg ( & _M_pback , & _M_pback , & _M_pback + 1 ) ; 
__CvT__record_line____(__CvT_miT,79,198);_M_pback_init = true ; 
} 
}} 






void 
_M_destroy_pback ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,79,209);
__CvT__record_line____(__CvT_miT,79,210);if ( _M_pback_init ) 
{{ 

__CvT__record_line____(__CvT_miT,79,213);_M_pback_cur_save += this -> gptr ( ) != this -> eback ( ) ; 
__CvT__record_line____(__CvT_miT,79,214);this -> setg ( _M_buf , _M_pback_cur_save , _M_pback_end_save ) ; 
__CvT__record_line____(__CvT_miT,79,215);_M_pback_init = false ; 
} 
}} 

public : 







basic_filebuf ( ) ; 
# 237 "/usr/include/c++/5/fstream" 3 
virtual 
~ basic_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,79,239);this -> close ( ) ; } 
# 251 "/usr/include/c++/5/fstream" 3 
bool 
is_open ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,79,253);return _M_file . is_open ( ) ; } 
# 296 "/usr/include/c++/5/fstream" 3 
__filebuf_type * 
open ( const char * __s , ios_base :: openmode __mode ) ; 
# 323 "/usr/include/c++/5/fstream" 3 
__filebuf_type * 
close ( ) ; 

protected : 
void 
_M_allocate_internal_buffer ( ) ; 

void 
_M_destroy_internal_buffer ( ) throw ( ) ; 


virtual streamsize 
showmanyc ( ) ; 






virtual int_type 
underflow ( ) ; 

virtual int_type 
pbackfail ( int_type __c = _Traits :: eof ( ) ) ; 
# 355 "/usr/include/c++/5/fstream" 3 
virtual int_type 
overflow ( int_type __c = _Traits :: eof ( ) ) ; 



bool 
_M_convert_to_external ( char_type * , streamsize ) ; 
# 375 "/usr/include/c++/5/fstream" 3 
virtual __streambuf_type * 
setbuf ( char_type * __s , streamsize __n ) ; 

virtual pos_type 
seekoff ( off_type __off , ios_base :: seekdir __way , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) ; 

virtual pos_type 
seekpos ( pos_type __pos , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) ; 


pos_type 
_M_seek ( off_type __off , ios_base :: seekdir __way , __state_type __state ) ; 

int 
_M_get_ext_pos ( __state_type & __state ) ; 

virtual int 
sync ( ) ; 

virtual void 
imbue ( const locale & __loc ) ; 

virtual streamsize 
xsgetn ( char_type * __s , streamsize __n ) ; 

virtual streamsize 
xsputn ( const char_type * __s , streamsize __n ) ; 


bool 
_M_terminate_output ( ) ; 
# 421 "/usr/include/c++/5/fstream" 3 
void 
_M_set_buffer ( streamsize __off ) 
{ __CvT__record_line____(__CvT_miT,79,423);
__CvT__record_line____(__CvT_miT,79,424);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,79,425);const bool __testout = ( _M_mode & ios_base :: out 
|| _M_mode & ios_base :: app ) ; 

__CvT__record_line____(__CvT_miT,79,428);if ( __testin && __off > 0 ) 
{__CvT__record_line____(__CvT_miT,79,429);this -> setg ( _M_buf , _M_buf , _M_buf + __off ) ; 
}else {
__CvT__record_line____(__CvT_miT,79,431);this -> setg ( _M_buf , _M_buf , _M_buf ) ; 

}__CvT__record_line____(__CvT_miT,79,433);if ( __testout && __off == 0 && _M_buf_size > 1 ) 
{__CvT__record_line____(__CvT_miT,79,434);this -> setp ( _M_buf , _M_buf + _M_buf_size - 1 ) ; 
}else {
__CvT__record_line____(__CvT_miT,79,436);this -> setp ( 0 , 0 ) ; 
}} 
} ; 
# 454 "/usr/include/c++/5/fstream" 3 
template < typename _CharT , typename _Traits > 
class basic_ifstream : public basic_istream < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 


typedef basic_filebuf < char_type , traits_type > __filebuf_type ; 
typedef basic_istream < char_type , traits_type > __istream_type ; 

private : 
__filebuf_type _M_filebuf ; 

public : 
# 481 "/usr/include/c++/5/fstream" 3 
basic_ifstream ( ) : __istream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,79,482);this -> init ( & _M_filebuf ) ; } 
# 494 "/usr/include/c++/5/fstream" 3 
explicit 
basic_ifstream ( const char * __s , ios_base :: openmode __mode = ios_base :: in ) 
: __istream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,79,497);
__CvT__record_line____(__CvT_miT,79,498);this -> init ( & _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,79,499);this -> open ( __s , __mode ) ; 
} 
# 533 "/usr/include/c++/5/fstream" 3 
~ basic_ifstream ( ) 
{ __CvT__record_line____(__CvT_miT,79,534);} 
# 565 "/usr/include/c++/5/fstream" 3 
__filebuf_type * 
rdbuf ( ) const 
{ __CvT__record_line____(__CvT_miT,79,567);return const_cast < __filebuf_type *> ( & _M_filebuf ) ; } 





bool 
is_open ( ) 
{ __CvT__record_line____(__CvT_miT,79,575);return _M_filebuf . is_open ( ) ; } 



bool 
is_open ( ) const 
{ __CvT__record_line____(__CvT_miT,79,581);return _M_filebuf . is_open ( ) ; } 
# 594 "/usr/include/c++/5/fstream" 3 
void 
open ( const char * __s , ios_base :: openmode __mode = ios_base :: in ) 
{ __CvT__record_line____(__CvT_miT,79,596);
__CvT__record_line____(__CvT_miT,79,597);if ( ! _M_filebuf . open ( __s , __mode | ios_base :: in ) ) 
{__CvT__record_line____(__CvT_miT,79,598);this -> setstate ( ios_base :: failbit ) ; 
}else {


__CvT__record_line____(__CvT_miT,79,602);this -> clear ( ) ; 
}} 
# 632 "/usr/include/c++/5/fstream" 3 
void 
close ( ) 
{ __CvT__record_line____(__CvT_miT,79,634);
__CvT__record_line____(__CvT_miT,79,635);if ( ! _M_filebuf . close ( ) ) 
{__CvT__record_line____(__CvT_miT,79,636);this -> setstate ( ios_base :: failbit ) ; 
}} 
} ; 
# 655 "/usr/include/c++/5/fstream" 3 
template < typename _CharT , typename _Traits > 
class basic_ofstream : public basic_ostream < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 


typedef basic_filebuf < char_type , traits_type > __filebuf_type ; 
typedef basic_ostream < char_type , traits_type > __ostream_type ; 

private : 
__filebuf_type _M_filebuf ; 

public : 
# 682 "/usr/include/c++/5/fstream" 3 
basic_ofstream ( ) : __ostream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,79,683);this -> init ( & _M_filebuf ) ; } 
# 696 "/usr/include/c++/5/fstream" 3 
explicit 
basic_ofstream ( const char * __s , 
ios_base :: openmode __mode = ios_base :: out | ios_base :: trunc ) 
: __ostream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,79,700);
__CvT__record_line____(__CvT_miT,79,701);this -> init ( & _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,79,702);this -> open ( __s , __mode ) ; 
} 
# 737 "/usr/include/c++/5/fstream" 3 
~ basic_ofstream ( ) 
{ __CvT__record_line____(__CvT_miT,79,738);} 
# 769 "/usr/include/c++/5/fstream" 3 
__filebuf_type * 
rdbuf ( ) const 
{ __CvT__record_line____(__CvT_miT,79,771);return const_cast < __filebuf_type *> ( & _M_filebuf ) ; } 





bool 
is_open ( ) 
{ __CvT__record_line____(__CvT_miT,79,779);return _M_filebuf . is_open ( ) ; } 



bool 
is_open ( ) const 
{ __CvT__record_line____(__CvT_miT,79,785);return _M_filebuf . is_open ( ) ; } 
# 798 "/usr/include/c++/5/fstream" 3 
void 
open ( const char * __s , 
ios_base :: openmode __mode = ios_base :: out | ios_base :: trunc ) 
{ __CvT__record_line____(__CvT_miT,79,801);
__CvT__record_line____(__CvT_miT,79,802);if ( ! _M_filebuf . open ( __s , __mode | ios_base :: out ) ) 
{__CvT__record_line____(__CvT_miT,79,803);this -> setstate ( ios_base :: failbit ) ; 
}else {


__CvT__record_line____(__CvT_miT,79,807);this -> clear ( ) ; 
}} 
# 838 "/usr/include/c++/5/fstream" 3 
void 
close ( ) 
{ __CvT__record_line____(__CvT_miT,79,840);
__CvT__record_line____(__CvT_miT,79,841);if ( ! _M_filebuf . close ( ) ) 
{__CvT__record_line____(__CvT_miT,79,842);this -> setstate ( ios_base :: failbit ) ; 
}} 
} ; 
# 861 "/usr/include/c++/5/fstream" 3 
template < typename _CharT , typename _Traits > 
class basic_fstream : public basic_iostream < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 


typedef basic_filebuf < char_type , traits_type > __filebuf_type ; 
typedef basic_ios < char_type , traits_type > __ios_type ; 
typedef basic_iostream < char_type , traits_type > __iostream_type ; 

private : 
__filebuf_type _M_filebuf ; 

public : 
# 889 "/usr/include/c++/5/fstream" 3 
basic_fstream ( ) 
: __iostream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,79,891);this -> init ( & _M_filebuf ) ; } 
# 901 "/usr/include/c++/5/fstream" 3 
explicit 
basic_fstream ( const char * __s , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
: __iostream_type ( 0 ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,79,905);
__CvT__record_line____(__CvT_miT,79,906);this -> init ( & _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,79,907);this -> open ( __s , __mode ) ; 
} 
# 939 "/usr/include/c++/5/fstream" 3 
~ basic_fstream ( ) 
{ __CvT__record_line____(__CvT_miT,79,940);} 
# 971 "/usr/include/c++/5/fstream" 3 
__filebuf_type * 
rdbuf ( ) const 
{ __CvT__record_line____(__CvT_miT,79,973);return const_cast < __filebuf_type *> ( & _M_filebuf ) ; } 





bool 
is_open ( ) 
{ __CvT__record_line____(__CvT_miT,79,981);return _M_filebuf . is_open ( ) ; } 



bool 
is_open ( ) const 
{ __CvT__record_line____(__CvT_miT,79,987);return _M_filebuf . is_open ( ) ; } 
# 1000 "/usr/include/c++/5/fstream" 3 
void 
open ( const char * __s , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,79,1003);
__CvT__record_line____(__CvT_miT,79,1004);if ( ! _M_filebuf . open ( __s , __mode ) ) 
{__CvT__record_line____(__CvT_miT,79,1005);this -> setstate ( ios_base :: failbit ) ; 
}else {


__CvT__record_line____(__CvT_miT,79,1009);this -> clear ( ) ; 
}} 
# 1040 "/usr/include/c++/5/fstream" 3 
void 
close ( ) 
{ __CvT__record_line____(__CvT_miT,79,1042);
__CvT__record_line____(__CvT_miT,79,1043);if ( ! _M_filebuf . close ( ) ) 
{__CvT__record_line____(__CvT_miT,79,1044);this -> setstate ( ios_base :: failbit ) ; 
}} 
} ; 
# 1078 "/usr/include/c++/5/fstream" 3 

} 

# 1 "/usr/include/c++/5/bits/fstream.tcc" 1 3 
# 37 "/usr/include/c++/5/bits/fstream.tcc" 3 

# 38 "/usr/include/c++/5/bits/fstream.tcc" 3 




namespace std 
{ 


template < typename _CharT , typename _Traits > 
void 
basic_filebuf < _CharT , _Traits >:: 
_M_allocate_internal_buffer ( ) 
{ __CvT__record_line____(__CvT_miT,108,50);


__CvT__record_line____(__CvT_miT,108,53);if ( ! _M_buf_allocated && ! _M_buf ) 
{{ 
__CvT__record_line____(__CvT_miT,108,55);_M_buf = new char_type [ _M_buf_size ] ; 
__CvT__record_line____(__CvT_miT,108,56);_M_buf_allocated = true ; 
} 
}} 

template < typename _CharT , typename _Traits > 
void 
basic_filebuf < _CharT , _Traits >:: 
_M_destroy_internal_buffer ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,108,64);
__CvT__record_line____(__CvT_miT,108,65);if ( _M_buf_allocated ) 
{{ 
__CvT__record_line____(__CvT_miT,108,67);delete [ ] _M_buf ; 
__CvT__record_line____(__CvT_miT,108,68);_M_buf = 0 ; 
__CvT__record_line____(__CvT_miT,108,69);_M_buf_allocated = false ; 
} 
}__CvT__record_line____(__CvT_miT,108,71);delete [ ] _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,108,72);_M_ext_buf = 0 ; 
__CvT__record_line____(__CvT_miT,108,73);_M_ext_buf_size = 0 ; 
__CvT__record_line____(__CvT_miT,108,74);_M_ext_next = 0 ; 
__CvT__record_line____(__CvT_miT,108,75);_M_ext_end = 0 ; 
} 

template < typename _CharT , typename _Traits > 
basic_filebuf < _CharT , _Traits >:: 
basic_filebuf ( ) : __streambuf_type ( ) , _M_lock ( ) , _M_file ( & _M_lock ) , 
_M_mode ( ios_base :: openmode ( 0 ) ) , _M_state_beg ( ) , _M_state_cur ( ) , 
_M_state_last ( ) , _M_buf ( 0 ) , _M_buf_size ( 8192 ) , 
_M_buf_allocated ( false ) , _M_reading ( false ) , _M_writing ( false ) , _M_pback ( ) , 
_M_pback_cur_save ( 0 ) , _M_pback_end_save ( 0 ) , _M_pback_init ( false ) , 
_M_codecvt ( 0 ) , _M_ext_buf ( 0 ) , _M_ext_buf_size ( 0 ) , _M_ext_next ( 0 ) , 
_M_ext_end ( 0 ) 
{ __CvT__record_line____(__CvT_miT,108,87);
__CvT__record_line____(__CvT_miT,108,88);if ( has_facet < __codecvt_type > ( this -> _M_buf_locale ) ) 
{__CvT__record_line____(__CvT_miT,108,89);_M_codecvt = & use_facet < __codecvt_type > ( this -> _M_buf_locale ) ; 
}} 
# 176 "/usr/include/c++/5/bits/fstream.tcc" 3 
template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: __filebuf_type * 
basic_filebuf < _CharT , _Traits >:: 
open ( const char * __s , ios_base :: openmode __mode ) 
{ __CvT__record_line____(__CvT_miT,108,180);
__CvT__record_line____(__CvT_miT,108,181);__filebuf_type * __ret = 0 ; 
__CvT__record_line____(__CvT_miT,108,182);if ( ! this -> is_open ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,184);_M_file . open ( __s , __mode ) ; 
__CvT__record_line____(__CvT_miT,108,185);if ( this -> is_open ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,187);_M_allocate_internal_buffer ( ) ; 
__CvT__record_line____(__CvT_miT,108,188);_M_mode = __mode ; 


__CvT__record_line____(__CvT_miT,108,191);_M_reading = false ; 
__CvT__record_line____(__CvT_miT,108,192);_M_writing = false ; 
__CvT__record_line____(__CvT_miT,108,193);_M_set_buffer ( - 1 ) ; 


__CvT__record_line____(__CvT_miT,108,196);_M_state_last = _M_state_cur = _M_state_beg ; 


__CvT__record_line____(__CvT_miT,108,199);if ( ( __mode & ios_base :: ate ) 
&& this -> seekoff ( 0 , ios_base :: end , __mode ) 
== pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,108,202);this -> close ( ) ; 
}else {
__CvT__record_line____(__CvT_miT,108,204);__ret = this ; 
}} 
}} 
}__CvT__record_line____(__CvT_miT,108,207);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: __filebuf_type * 
basic_filebuf < _CharT , _Traits >:: 
close ( ) 
{ __CvT__record_line____(__CvT_miT,108,214);
__CvT__record_line____(__CvT_miT,108,215);if ( ! this -> is_open ( ) ) 
{__CvT__record_line____(__CvT_miT,108,216);return 0 ; 

}__CvT__record_line____(__CvT_miT,108,218);bool __testfail = false ; 
{ 

__CvT__record_line____(__CvT_miT,108,221);struct __close_sentry 
{ 
basic_filebuf * __fb ; 
__close_sentry ( basic_filebuf * __fbi ) : __fb ( __fbi ) { __CvT__record_line____(__CvT_miT,108,224);} 
~ __close_sentry ( ) 
{ __CvT__record_line____(__CvT_miT,108,226);
__CvT__record_line____(__CvT_miT,108,227);__fb -> _M_mode = ios_base :: openmode ( 0 ) ; 
__CvT__record_line____(__CvT_miT,108,228);__fb -> _M_pback_init = false ; 
__CvT__record_line____(__CvT_miT,108,229);__fb -> _M_destroy_internal_buffer ( ) ; 
__CvT__record_line____(__CvT_miT,108,230);__fb -> _M_reading = false ; 
__CvT__record_line____(__CvT_miT,108,231);__fb -> _M_writing = false ; 
__CvT__record_line____(__CvT_miT,108,232);__fb -> _M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,108,233);__fb -> _M_state_last = __fb -> _M_state_cur = __fb -> _M_state_beg ; 
} 
} __cs ( this ) ; 

__CvT__record_line____(__CvT_miT,108,237);try 
{ 
__CvT__record_line____(__CvT_miT,108,239);if ( ! _M_terminate_output ( ) ) 
{__CvT__record_line____(__CvT_miT,108,240);__testfail = true ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,108,244);_M_file . close ( ) ; 
__CvT__record_line____(__CvT_miT,108,245);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,108,248);__testfail = true ; } 
} 

__CvT__record_line____(__CvT_miT,108,251);if ( ! _M_file . close ( ) ) 
{__CvT__record_line____(__CvT_miT,108,252);__testfail = true ; 

}__CvT__record_line____(__CvT_miT,108,254);if ( __testfail ) 
{__CvT__record_line____(__CvT_miT,108,255);return 0 ; 
}else {
__CvT__record_line____(__CvT_miT,108,257);return this ; 
}} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_filebuf < _CharT , _Traits >:: 
showmanyc ( ) 
{ __CvT__record_line____(__CvT_miT,108,264);
__CvT__record_line____(__CvT_miT,108,265);streamsize __ret = - 1 ; 
__CvT__record_line____(__CvT_miT,108,266);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,108,267);if ( __testin && this -> is_open ( ) ) 
{{ 


__CvT__record_line____(__CvT_miT,108,271);__ret = this -> egptr ( ) - this -> gptr ( ) ; 







__CvT__record_line____(__CvT_miT,108,279);if ( __check_facet ( _M_codecvt ) . encoding ( ) >= 0 ) 

{__CvT__record_line____(__CvT_miT,108,281);__ret += _M_file . showmanyc ( ) / _M_codecvt -> max_length ( ) ; 
}} 
}__CvT__record_line____(__CvT_miT,108,283);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: int_type 
basic_filebuf < _CharT , _Traits >:: 
underflow ( ) 
{ __CvT__record_line____(__CvT_miT,108,290);
__CvT__record_line____(__CvT_miT,108,291);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,108,292);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,108,293);if ( __testin ) 
{{ 
__CvT__record_line____(__CvT_miT,108,295);if ( _M_writing ) 
{{ 
__CvT__record_line____(__CvT_miT,108,297);if ( overflow ( ) == traits_type :: eof ( ) ) 
{__CvT__record_line____(__CvT_miT,108,298);return __ret ; 
}__CvT__record_line____(__CvT_miT,108,299);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,108,300);_M_writing = false ; 
} 



}__CvT__record_line____(__CvT_miT,108,305);_M_destroy_pback ( ) ; 

__CvT__record_line____(__CvT_miT,108,307);if ( this -> gptr ( ) < this -> egptr ( ) ) 
{__CvT__record_line____(__CvT_miT,108,308);return traits_type :: to_int_type ( * this -> gptr ( ) ) ; 


}__CvT__record_line____(__CvT_miT,108,311);const size_t __buflen = _M_buf_size > 1 ? _M_buf_size - 1 : 1 ; 


__CvT__record_line____(__CvT_miT,108,314);bool __got_eof = false ; 

__CvT__record_line____(__CvT_miT,108,316);streamsize __ilen = 0 ; 
__CvT__record_line____(__CvT_miT,108,317);codecvt_base :: result __r = codecvt_base :: ok ; 
__CvT__record_line____(__CvT_miT,108,318);if ( __check_facet ( _M_codecvt ) . always_noconv ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,320);__ilen = _M_file . xsgetn ( reinterpret_cast < char *> ( this -> eback ( ) ) , 
__buflen ) ; 
__CvT__record_line____(__CvT_miT,108,322);if ( __ilen == 0 ) 
{__CvT__record_line____(__CvT_miT,108,323);__got_eof = true ; 
}} 
}else {
{ 


__CvT__record_line____(__CvT_miT,108,329);const int __enc = _M_codecvt -> encoding ( ) ; 
__CvT__record_line____(__CvT_miT,108,330);streamsize __blen ; 
__CvT__record_line____(__CvT_miT,108,331);streamsize __rlen ; 
__CvT__record_line____(__CvT_miT,108,332);if ( __enc > 0 ) 
{__CvT__record_line____(__CvT_miT,108,333);__blen = __rlen = __buflen * __enc ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,108,336);__blen = __buflen + _M_codecvt -> max_length ( ) - 1 ; 
__CvT__record_line____(__CvT_miT,108,337);__rlen = __buflen ; 
} 
}__CvT__record_line____(__CvT_miT,108,339);const streamsize __remainder = _M_ext_end - _M_ext_next ; 
__CvT__record_line____(__CvT_miT,108,340);__rlen = __rlen > __remainder ? __rlen - __remainder : 0 ; 



__CvT__record_line____(__CvT_miT,108,344);if ( _M_reading && this -> egptr ( ) == this -> eback ( ) && __remainder ) 
{__CvT__record_line____(__CvT_miT,108,345);__rlen = 0 ; 



}__CvT__record_line____(__CvT_miT,108,349);if ( _M_ext_buf_size < __blen ) 
{{ 
__CvT__record_line____(__CvT_miT,108,351);char * __buf = new char [ __blen ] ; 
__CvT__record_line____(__CvT_miT,108,352);if ( __remainder ) 
{__CvT__record_line____(__CvT_miT,108,353);__builtin_memcpy ( __buf , _M_ext_next , __remainder ) ; 

}__CvT__record_line____(__CvT_miT,108,355);delete [ ] _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,108,356);_M_ext_buf = __buf ; 
__CvT__record_line____(__CvT_miT,108,357);_M_ext_buf_size = __blen ; 
} 
}else {__CvT__record_line____(__CvT_miT,108,359);if ( __remainder ) 
{__CvT__record_line____(__CvT_miT,108,360);__builtin_memmove ( _M_ext_buf , _M_ext_next , __remainder ) ; 

}}__CvT__record_line____(__CvT_miT,108,362);_M_ext_next = _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,108,363);_M_ext_end = _M_ext_buf + __remainder ; 
__CvT__record_line____(__CvT_miT,108,364);_M_state_last = _M_state_cur ; 

__CvT__record_line____(__CvT_miT,108,366);do {
{ 
__CvT__record_line____(__CvT_miT,108,368);if ( __rlen > 0 ) 
{{ 



__CvT__record_line____(__CvT_miT,108,373);if ( _M_ext_end - _M_ext_buf + __rlen > _M_ext_buf_size ) 
{{ 
__CvT__record_line____(__CvT_miT,108,375);__throw_ios_failure ( ( "basic_filebuf::underflow " "codecvt::max_length() " "is not valid" ) 

) ; 
} 
}__CvT__record_line____(__CvT_miT,108,379);streamsize __elen = _M_file . xsgetn ( _M_ext_end , __rlen ) ; 
__CvT__record_line____(__CvT_miT,108,380);if ( __elen == 0 ) 
{__CvT__record_line____(__CvT_miT,108,381);__got_eof = true ; 
}else {__CvT__record_line____(__CvT_miT,108,382);if ( __elen == - 1 ) 
{__CvT__record_line____(__CvT_miT,108,383);break ; 
}}__CvT__record_line____(__CvT_miT,108,384);_M_ext_end += __elen ; 
} 

}__CvT__record_line____(__CvT_miT,108,387);char_type * __iend = this -> eback ( ) ; 
__CvT__record_line____(__CvT_miT,108,388);if ( _M_ext_next < _M_ext_end ) 
{__CvT__record_line____(__CvT_miT,108,389);__r = _M_codecvt -> in ( _M_state_cur , _M_ext_next , 
_M_ext_end , _M_ext_next , 
this -> eback ( ) , 
this -> eback ( ) + __buflen , __iend ) ; 
}__CvT__record_line____(__CvT_miT,108,393);if ( __r == codecvt_base :: noconv ) 
{{ 
__CvT__record_line____(__CvT_miT,108,395);size_t __avail = _M_ext_end - _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,108,396);__ilen = std :: min ( __avail , __buflen ) ; 
__CvT__record_line____(__CvT_miT,108,397);traits_type :: copy ( this -> eback ( ) , 
reinterpret_cast < char_type *> 
( _M_ext_buf ) , __ilen ) ; 
__CvT__record_line____(__CvT_miT,108,400);_M_ext_next = _M_ext_buf + __ilen ; 
} 
}else {
__CvT__record_line____(__CvT_miT,108,403);__ilen = __iend - this -> eback ( ) ; 




}__CvT__record_line____(__CvT_miT,108,408);if ( __r == codecvt_base :: error ) 
{__CvT__record_line____(__CvT_miT,108,409);break ; 

}__CvT__record_line____(__CvT_miT,108,411);__rlen = 1 ; 
} 
}while ( __ilen == 0 && ! __got_eof ) ;
} 

}__CvT__record_line____(__CvT_miT,108,416);if ( __ilen > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,108,418);_M_set_buffer ( __ilen ) ; 
__CvT__record_line____(__CvT_miT,108,419);_M_reading = true ; 
__CvT__record_line____(__CvT_miT,108,420);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,108,422);if ( __got_eof ) 
{{ 



__CvT__record_line____(__CvT_miT,108,427);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,108,428);_M_reading = false ; 


__CvT__record_line____(__CvT_miT,108,431);if ( __r == codecvt_base :: partial ) 
{__CvT__record_line____(__CvT_miT,108,432);__throw_ios_failure ( ( "basic_filebuf::underflow " "incomplete character in file" ) 
) ; 
}} 
}else {__CvT__record_line____(__CvT_miT,108,435);if ( __r == codecvt_base :: error ) 
{__CvT__record_line____(__CvT_miT,108,436);__throw_ios_failure ( ( "basic_filebuf::underflow " "invalid byte sequence in file" ) 
) ; 
}else {
__CvT__record_line____(__CvT_miT,108,439);__throw_ios_failure ( ( "basic_filebuf::underflow " "error reading the file" ) 
) ; 
}}}} 
}__CvT__record_line____(__CvT_miT,108,442);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: int_type 
basic_filebuf < _CharT , _Traits >:: 
pbackfail ( int_type __i ) 
{ __CvT__record_line____(__CvT_miT,108,449);
__CvT__record_line____(__CvT_miT,108,450);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,108,451);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,108,452);if ( __testin ) 
{{ 
__CvT__record_line____(__CvT_miT,108,454);if ( _M_writing ) 
{{ 
__CvT__record_line____(__CvT_miT,108,456);if ( overflow ( ) == traits_type :: eof ( ) ) 
{__CvT__record_line____(__CvT_miT,108,457);return __ret ; 
}__CvT__record_line____(__CvT_miT,108,458);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,108,459);_M_writing = false ; 
} 


}__CvT__record_line____(__CvT_miT,108,463);const bool __testpb = _M_pback_init ; 
__CvT__record_line____(__CvT_miT,108,464);const bool __testeof = traits_type :: eq_int_type ( __i , __ret ) ; 
__CvT__record_line____(__CvT_miT,108,465);int_type __tmp ; 
__CvT__record_line____(__CvT_miT,108,466);if ( this -> eback ( ) < this -> gptr ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,468);this -> gbump ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,108,469);__tmp = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,108,471);if ( this -> seekoff ( - 1 , ios_base :: cur ) != pos_type ( off_type ( - 1 ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,473);__tmp = this -> underflow ( ) ; 
__CvT__record_line____(__CvT_miT,108,474);if ( traits_type :: eq_int_type ( __tmp , __ret ) ) 
{__CvT__record_line____(__CvT_miT,108,475);return __ret ; 
}} 
}else {
{ 





__CvT__record_line____(__CvT_miT,108,484);return __ret ; 
} 



}}__CvT__record_line____(__CvT_miT,108,489);if ( ! __testeof && traits_type :: eq_int_type ( __i , __tmp ) ) 
{__CvT__record_line____(__CvT_miT,108,490);__ret = __i ; 
}else {__CvT__record_line____(__CvT_miT,108,491);if ( __testeof ) 
{__CvT__record_line____(__CvT_miT,108,492);__ret = traits_type :: not_eof ( __i ) ; 
}else {__CvT__record_line____(__CvT_miT,108,493);if ( ! __testpb ) 
{{ 
__CvT__record_line____(__CvT_miT,108,495);_M_create_pback ( ) ; 
__CvT__record_line____(__CvT_miT,108,496);_M_reading = true ; 
__CvT__record_line____(__CvT_miT,108,497);* this -> gptr ( ) = traits_type :: to_char_type ( __i ) ; 
__CvT__record_line____(__CvT_miT,108,498);__ret = __i ; 
} 
}}}} 
}__CvT__record_line____(__CvT_miT,108,501);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: int_type 
basic_filebuf < _CharT , _Traits >:: 
overflow ( int_type __c ) 
{ __CvT__record_line____(__CvT_miT,108,508);
__CvT__record_line____(__CvT_miT,108,509);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,108,510);const bool __testeof = traits_type :: eq_int_type ( __c , __ret ) ; 
__CvT__record_line____(__CvT_miT,108,511);const bool __testout = ( _M_mode & ios_base :: out 
|| _M_mode & ios_base :: app ) ; 
__CvT__record_line____(__CvT_miT,108,513);if ( __testout ) 
{{ 
__CvT__record_line____(__CvT_miT,108,515);if ( _M_reading ) 
{{ 
__CvT__record_line____(__CvT_miT,108,517);_M_destroy_pback ( ) ; 
__CvT__record_line____(__CvT_miT,108,518);const int __gptr_off = _M_get_ext_pos ( _M_state_last ) ; 
__CvT__record_line____(__CvT_miT,108,519);if ( _M_seek ( __gptr_off , ios_base :: cur , _M_state_last ) 
== pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,108,521);return __ret ; 
}} 
}__CvT__record_line____(__CvT_miT,108,523);if ( this -> pbase ( ) < this -> pptr ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,108,526);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,108,528);* this -> pptr ( ) = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,108,529);this -> pbump ( 1 ) ; 
} 



}__CvT__record_line____(__CvT_miT,108,534);if ( _M_convert_to_external ( this -> pbase ( ) , 
this -> pptr ( ) - this -> pbase ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,537);_M_set_buffer ( 0 ) ; 
__CvT__record_line____(__CvT_miT,108,538);__ret = traits_type :: not_eof ( __c ) ; 
} 
}} 
}else {__CvT__record_line____(__CvT_miT,108,541);if ( _M_buf_size > 1 ) 
{{ 



__CvT__record_line____(__CvT_miT,108,546);_M_set_buffer ( 0 ) ; 
__CvT__record_line____(__CvT_miT,108,547);_M_writing = true ; 
__CvT__record_line____(__CvT_miT,108,548);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,108,550);* this -> pptr ( ) = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,108,551);this -> pbump ( 1 ) ; 
} 
}__CvT__record_line____(__CvT_miT,108,553);__ret = traits_type :: not_eof ( __c ) ; 
} 
}else {
{ 

__CvT__record_line____(__CvT_miT,108,558);char_type __conv = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,108,559);if ( __testeof || _M_convert_to_external ( & __conv , 1 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,561);_M_writing = true ; 
__CvT__record_line____(__CvT_miT,108,562);__ret = traits_type :: not_eof ( __c ) ; 
} 
}} 
}}} 
}__CvT__record_line____(__CvT_miT,108,566);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
bool 
basic_filebuf < _CharT , _Traits >:: 
_M_convert_to_external ( _CharT * __ibuf , streamsize __ilen ) 
{ __CvT__record_line____(__CvT_miT,108,573);

__CvT__record_line____(__CvT_miT,108,575);streamsize __elen ; 
__CvT__record_line____(__CvT_miT,108,576);streamsize __plen ; 
__CvT__record_line____(__CvT_miT,108,577);if ( __check_facet ( _M_codecvt ) . always_noconv ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,579);__elen = _M_file . xsputn ( reinterpret_cast < char *> ( __ibuf ) , __ilen ) ; 
__CvT__record_line____(__CvT_miT,108,580);__plen = __ilen ; 
} 
}else {
{ 


__CvT__record_line____(__CvT_miT,108,586);streamsize __blen = __ilen * _M_codecvt -> max_length ( ) ; 
__CvT__record_line____(__CvT_miT,108,587);char * __buf = static_cast < char *> ( __builtin_alloca ( __blen ) ) ; 

__CvT__record_line____(__CvT_miT,108,589);char * __bend ; 
__CvT__record_line____(__CvT_miT,108,590);const char_type * __iend ; 
__CvT__record_line____(__CvT_miT,108,591);codecvt_base :: result __r ; 
__CvT__record_line____(__CvT_miT,108,592);__r = _M_codecvt -> out ( _M_state_cur , __ibuf , __ibuf + __ilen , 
__iend , __buf , __buf + __blen , __bend ) ; 

__CvT__record_line____(__CvT_miT,108,595);if ( __r == codecvt_base :: ok || __r == codecvt_base :: partial ) 
{__CvT__record_line____(__CvT_miT,108,596);__blen = __bend - __buf ; 
}else {__CvT__record_line____(__CvT_miT,108,597);if ( __r == codecvt_base :: noconv ) 
{{ 

__CvT__record_line____(__CvT_miT,108,600);__buf = reinterpret_cast < char *> ( __ibuf ) ; 
__CvT__record_line____(__CvT_miT,108,601);__blen = __ilen ; 
} 
}else {
__CvT__record_line____(__CvT_miT,108,604);__throw_ios_failure ( ( "basic_filebuf::_M_convert_to_external " "conversion error" ) 
) ; 

}}__CvT__record_line____(__CvT_miT,108,607);__elen = _M_file . xsputn ( __buf , __blen ) ; 
__CvT__record_line____(__CvT_miT,108,608);__plen = __blen ; 


__CvT__record_line____(__CvT_miT,108,611);if ( __r == codecvt_base :: partial && __elen == __plen ) 
{{ 
__CvT__record_line____(__CvT_miT,108,613);const char_type * __iresume = __iend ; 
__CvT__record_line____(__CvT_miT,108,614);streamsize __rlen = this -> pptr ( ) - __iend ; 
__CvT__record_line____(__CvT_miT,108,615);__r = _M_codecvt -> out ( _M_state_cur , __iresume , 
__iresume + __rlen , __iend , __buf , 
__buf + __blen , __bend ) ; 
__CvT__record_line____(__CvT_miT,108,618);if ( __r != codecvt_base :: error ) 
{{ 
__CvT__record_line____(__CvT_miT,108,620);__rlen = __bend - __buf ; 
__CvT__record_line____(__CvT_miT,108,621);__elen = _M_file . xsputn ( __buf , __rlen ) ; 
__CvT__record_line____(__CvT_miT,108,622);__plen = __rlen ; 
} 
}else {
__CvT__record_line____(__CvT_miT,108,625);__throw_ios_failure ( ( "basic_filebuf::_M_convert_to_external " "conversion error" ) 
) ; 
}} 
}} 
}__CvT__record_line____(__CvT_miT,108,629);return __elen == __plen ; 
} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_filebuf < _CharT , _Traits >:: 
xsgetn ( _CharT * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,108,636);

__CvT__record_line____(__CvT_miT,108,638);streamsize __ret = 0 ; 
__CvT__record_line____(__CvT_miT,108,639);if ( _M_pback_init ) 
{{ 
__CvT__record_line____(__CvT_miT,108,641);if ( __n > 0 && this -> gptr ( ) == this -> eback ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,643);* __s ++ = * this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,108,644);this -> gbump ( 1 ) ; 
__CvT__record_line____(__CvT_miT,108,645);__ret = 1 ; 
__CvT__record_line____(__CvT_miT,108,646);-- __n ; 
} 
}__CvT__record_line____(__CvT_miT,108,648);_M_destroy_pback ( ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,108,650);if ( _M_writing ) 
{{ 
__CvT__record_line____(__CvT_miT,108,652);if ( overflow ( ) == traits_type :: eof ( ) ) 
{__CvT__record_line____(__CvT_miT,108,653);return __ret ; 
}__CvT__record_line____(__CvT_miT,108,654);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,108,655);_M_writing = false ; 
} 




}}__CvT__record_line____(__CvT_miT,108,661);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,108,662);const streamsize __buflen = _M_buf_size > 1 ? _M_buf_size - 1 : 1 ; 

__CvT__record_line____(__CvT_miT,108,664);if ( __n > __buflen && __check_facet ( _M_codecvt ) . always_noconv ( ) 
&& __testin ) 
{{ 

__CvT__record_line____(__CvT_miT,108,668);const streamsize __avail = this -> egptr ( ) - this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,108,669);if ( __avail != 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,108,671);traits_type :: copy ( __s , this -> gptr ( ) , __avail ) ; 
__CvT__record_line____(__CvT_miT,108,672);__s += __avail ; 
__CvT__record_line____(__CvT_miT,108,673);this -> setg ( this -> eback ( ) , this -> gptr ( ) + __avail , 
this -> egptr ( ) ) ; 
__CvT__record_line____(__CvT_miT,108,675);__ret += __avail ; 
__CvT__record_line____(__CvT_miT,108,676);__n -= __avail ; 
} 



}__CvT__record_line____(__CvT_miT,108,681);streamsize __len ; 
__CvT__record_line____(__CvT_miT,108,682);for ( ; ; ) 
{{ 
__CvT__record_line____(__CvT_miT,108,684);__len = _M_file . xsgetn ( reinterpret_cast < char *> ( __s ) , 
__n ) ; 
__CvT__record_line____(__CvT_miT,108,686);if ( __len == - 1 ) 
{__CvT__record_line____(__CvT_miT,108,687);__throw_ios_failure ( ( "basic_filebuf::xsgetn " "error reading the file" ) 
) ; 
}__CvT__record_line____(__CvT_miT,108,689);if ( __len == 0 ) 
{__CvT__record_line____(__CvT_miT,108,690);break ; 

}__CvT__record_line____(__CvT_miT,108,692);__n -= __len ; 
__CvT__record_line____(__CvT_miT,108,693);__ret += __len ; 
__CvT__record_line____(__CvT_miT,108,694);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,108,695);break ; 

}__CvT__record_line____(__CvT_miT,108,697);__s += __len ; 
} 

}__CvT__record_line____(__CvT_miT,108,700);if ( __n == 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,108,702);_M_set_buffer ( 0 ) ; 
__CvT__record_line____(__CvT_miT,108,703);_M_reading = true ; 
} 
}else {__CvT__record_line____(__CvT_miT,108,705);if ( __len == 0 ) 
{{ 



__CvT__record_line____(__CvT_miT,108,710);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,108,711);_M_reading = false ; 
} 
}}} 
}else {
__CvT__record_line____(__CvT_miT,108,715);__ret += __streambuf_type :: xsgetn ( __s , __n ) ; 

}__CvT__record_line____(__CvT_miT,108,717);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_filebuf < _CharT , _Traits >:: 
xsputn ( const _CharT * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,108,724);
__CvT__record_line____(__CvT_miT,108,725);streamsize __ret = 0 ; 



__CvT__record_line____(__CvT_miT,108,729);const bool __testout = ( _M_mode & ios_base :: out 
|| _M_mode & ios_base :: app ) ; 
__CvT__record_line____(__CvT_miT,108,731);if ( __check_facet ( _M_codecvt ) . always_noconv ( ) 
&& __testout && ! _M_reading ) 
{{ 

__CvT__record_line____(__CvT_miT,108,735);const streamsize __chunk = 1ul << 10 ; 
__CvT__record_line____(__CvT_miT,108,736);streamsize __bufavail = this -> epptr ( ) - this -> pptr ( ) ; 


__CvT__record_line____(__CvT_miT,108,739);if ( ! _M_writing && _M_buf_size > 1 ) 
{__CvT__record_line____(__CvT_miT,108,740);__bufavail = _M_buf_size - 1 ; 

}__CvT__record_line____(__CvT_miT,108,742);const streamsize __limit = std :: min ( __chunk , __bufavail ) ; 
__CvT__record_line____(__CvT_miT,108,743);if ( __n >= __limit ) 
{{ 
__CvT__record_line____(__CvT_miT,108,745);const streamsize __buffill = this -> pptr ( ) - this -> pbase ( ) ; 
__CvT__record_line____(__CvT_miT,108,746);const char * __buf = reinterpret_cast < const char *> ( this -> pbase ( ) ) ; 
__CvT__record_line____(__CvT_miT,108,747);__ret = _M_file . xsputn_2 ( __buf , __buffill , 
reinterpret_cast < const char *> ( __s ) , 
__n ) ; 
__CvT__record_line____(__CvT_miT,108,750);if ( __ret == __buffill + __n ) 
{{ 
__CvT__record_line____(__CvT_miT,108,752);_M_set_buffer ( 0 ) ; 
__CvT__record_line____(__CvT_miT,108,753);_M_writing = true ; 
} 
}__CvT__record_line____(__CvT_miT,108,755);if ( __ret > __buffill ) 
{__CvT__record_line____(__CvT_miT,108,756);__ret -= __buffill ; 
}else {
__CvT__record_line____(__CvT_miT,108,758);__ret = 0 ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,108,761);__ret = __streambuf_type :: xsputn ( __s , __n ) ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,108,764);__ret = __streambuf_type :: xsputn ( __s , __n ) ; 
}__CvT__record_line____(__CvT_miT,108,765);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: __streambuf_type * 
basic_filebuf < _CharT , _Traits >:: 
setbuf ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,108,772);
__CvT__record_line____(__CvT_miT,108,773);if ( ! this -> is_open ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,775);if ( __s == 0 && __n == 0 ) 
{__CvT__record_line____(__CvT_miT,108,776);_M_buf_size = 1 ; 
}else {__CvT__record_line____(__CvT_miT,108,777);if ( __s && __n > 0 ) 
{{ 
# 787 "/usr/include/c++/5/bits/fstream.tcc" 3 
__CvT__record_line____(__CvT_miT,108,787);_M_buf = __s ; 
__CvT__record_line____(__CvT_miT,108,788);_M_buf_size = __n ; 
} 
}}} 
}__CvT__record_line____(__CvT_miT,108,791);return this ; 
} 




template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: pos_type 
basic_filebuf < _CharT , _Traits >:: 
seekoff ( off_type __off , ios_base :: seekdir __way , ios_base :: openmode ) 
{ __CvT__record_line____(__CvT_miT,108,801);
__CvT__record_line____(__CvT_miT,108,802);int __width = 0 ; 
__CvT__record_line____(__CvT_miT,108,803);if ( _M_codecvt ) 
{__CvT__record_line____(__CvT_miT,108,804);__width = _M_codecvt -> encoding ( ) ; 
}__CvT__record_line____(__CvT_miT,108,805);if ( __width < 0 ) 
{__CvT__record_line____(__CvT_miT,108,806);__width = 0 ; 

}__CvT__record_line____(__CvT_miT,108,808);pos_type __ret = pos_type ( off_type ( - 1 ) ) ; 
__CvT__record_line____(__CvT_miT,108,809);const bool __testfail = __off != 0 && __width <= 0 ; 
__CvT__record_line____(__CvT_miT,108,810);if ( this -> is_open ( ) && ! __testfail ) 
{{ 




__CvT__record_line____(__CvT_miT,108,816);bool __no_movement = __way == ios_base :: cur && __off == 0 
&& ( ! _M_writing || _M_codecvt -> always_noconv ( ) ) ; 


__CvT__record_line____(__CvT_miT,108,820);if ( ! __no_movement ) 
{__CvT__record_line____(__CvT_miT,108,821);_M_destroy_pback ( ) ; 






}__CvT__record_line____(__CvT_miT,108,828);__state_type __state = _M_state_beg ; 
__CvT__record_line____(__CvT_miT,108,829);off_type __computed_off = __off * __width ; 
__CvT__record_line____(__CvT_miT,108,830);if ( _M_reading && __way == ios_base :: cur ) 
{{ 
__CvT__record_line____(__CvT_miT,108,832);__state = _M_state_last ; 
__CvT__record_line____(__CvT_miT,108,833);__computed_off += _M_get_ext_pos ( __state ) ; 
} 
}__CvT__record_line____(__CvT_miT,108,835);if ( ! __no_movement ) 
{__CvT__record_line____(__CvT_miT,108,836);__ret = _M_seek ( __computed_off , __way , __state ) ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,108,839);if ( _M_writing ) 
{__CvT__record_line____(__CvT_miT,108,840);__computed_off = this -> pptr ( ) - this -> pbase ( ) ; 

}__CvT__record_line____(__CvT_miT,108,842);off_type __file_off = _M_file . seekoff ( 0 , ios_base :: cur ) ; 
__CvT__record_line____(__CvT_miT,108,843);if ( __file_off != off_type ( - 1 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,845);__ret = __file_off + __computed_off ; 
__CvT__record_line____(__CvT_miT,108,846);__ret . state ( __state ) ; 
} 
}} 
}} 
}__CvT__record_line____(__CvT_miT,108,850);return __ret ; 
} 





template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: pos_type 
basic_filebuf < _CharT , _Traits >:: 
seekpos ( pos_type __pos , ios_base :: openmode ) 
{ __CvT__record_line____(__CvT_miT,108,861);
__CvT__record_line____(__CvT_miT,108,862);pos_type __ret = pos_type ( off_type ( - 1 ) ) ; 
__CvT__record_line____(__CvT_miT,108,863);if ( this -> is_open ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,108,866);_M_destroy_pback ( ) ; 
__CvT__record_line____(__CvT_miT,108,867);__ret = _M_seek ( off_type ( __pos ) , ios_base :: beg , __pos . state ( ) ) ; 
} 
}__CvT__record_line____(__CvT_miT,108,869);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: pos_type 
basic_filebuf < _CharT , _Traits >:: 
_M_seek ( off_type __off , ios_base :: seekdir __way , __state_type __state ) 
{ __CvT__record_line____(__CvT_miT,108,876);
__CvT__record_line____(__CvT_miT,108,877);pos_type __ret = pos_type ( off_type ( - 1 ) ) ; 
__CvT__record_line____(__CvT_miT,108,878);if ( _M_terminate_output ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,880);off_type __file_off = _M_file . seekoff ( __off , __way ) ; 
__CvT__record_line____(__CvT_miT,108,881);if ( __file_off != off_type ( - 1 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,883);_M_reading = false ; 
__CvT__record_line____(__CvT_miT,108,884);_M_writing = false ; 
__CvT__record_line____(__CvT_miT,108,885);_M_ext_next = _M_ext_end = _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,108,886);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,108,887);_M_state_cur = __state ; 
__CvT__record_line____(__CvT_miT,108,888);__ret = __file_off ; 
__CvT__record_line____(__CvT_miT,108,889);__ret . state ( _M_state_cur ) ; 
} 
}} 
}__CvT__record_line____(__CvT_miT,108,892);return __ret ; 
} 




template < typename _CharT , typename _Traits > 
int basic_filebuf < _CharT , _Traits >:: 
_M_get_ext_pos ( __state_type & __state ) 
{ __CvT__record_line____(__CvT_miT,108,901);
__CvT__record_line____(__CvT_miT,108,902);if ( _M_codecvt -> always_noconv ( ) ) 
{__CvT__record_line____(__CvT_miT,108,903);return this -> gptr ( ) - this -> egptr ( ) ; 
}else {
{ 



__CvT__record_line____(__CvT_miT,108,909);const int __gptr_off = 
_M_codecvt -> length ( __state , _M_ext_buf , _M_ext_next , 
this -> gptr ( ) - this -> eback ( ) ) ; 
__CvT__record_line____(__CvT_miT,108,912);return _M_ext_buf + __gptr_off - _M_ext_end ; 
} 
}} 

template < typename _CharT , typename _Traits > 
bool 
basic_filebuf < _CharT , _Traits >:: 
_M_terminate_output ( ) 
{ __CvT__record_line____(__CvT_miT,108,920);

__CvT__record_line____(__CvT_miT,108,922);bool __testvalid = true ; 
__CvT__record_line____(__CvT_miT,108,923);if ( this -> pbase ( ) < this -> pptr ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,925);const int_type __tmp = this -> overflow ( ) ; 
__CvT__record_line____(__CvT_miT,108,926);if ( traits_type :: eq_int_type ( __tmp , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,108,927);__testvalid = false ; 
}} 


}__CvT__record_line____(__CvT_miT,108,931);if ( _M_writing && ! __check_facet ( _M_codecvt ) . always_noconv ( ) 
&& __testvalid ) 
{{ 



__CvT__record_line____(__CvT_miT,108,937);const size_t __blen = 128 ; 
__CvT__record_line____(__CvT_miT,108,938);char __buf [ __blen ] ; 
__CvT__record_line____(__CvT_miT,108,939);codecvt_base :: result __r ; 
__CvT__record_line____(__CvT_miT,108,940);streamsize __ilen = 0 ; 

__CvT__record_line____(__CvT_miT,108,942);do {
{ 
__CvT__record_line____(__CvT_miT,108,944);char * __next ; 
__CvT__record_line____(__CvT_miT,108,945);__r = _M_codecvt -> unshift ( _M_state_cur , __buf , 
__buf + __blen , __next ) ; 
__CvT__record_line____(__CvT_miT,108,947);if ( __r == codecvt_base :: error ) 
{__CvT__record_line____(__CvT_miT,108,948);__testvalid = false ; 
}else {__CvT__record_line____(__CvT_miT,108,949);if ( __r == codecvt_base :: ok || 
__r == codecvt_base :: partial ) 
{{ 
__CvT__record_line____(__CvT_miT,108,952);__ilen = __next - __buf ; 
__CvT__record_line____(__CvT_miT,108,953);if ( __ilen > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,108,955);const streamsize __elen = _M_file . xsputn ( __buf , __ilen ) ; 
__CvT__record_line____(__CvT_miT,108,956);if ( __elen != __ilen ) 
{__CvT__record_line____(__CvT_miT,108,957);__testvalid = false ; 
}} 
}} 
}}} 
}while ( __r == codecvt_base :: partial && __ilen > 0 && __testvalid ) ;

__CvT__record_line____(__CvT_miT,108,963);if ( __testvalid ) 
{{ 




__CvT__record_line____(__CvT_miT,108,969);const int_type __tmp = this -> overflow ( ) ; 
__CvT__record_line____(__CvT_miT,108,970);if ( traits_type :: eq_int_type ( __tmp , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,108,971);__testvalid = false ; 
}} 
}} 
}__CvT__record_line____(__CvT_miT,108,974);return __testvalid ; 
} 

template < typename _CharT , typename _Traits > 
int 
basic_filebuf < _CharT , _Traits >:: 
sync ( ) 
{ __CvT__record_line____(__CvT_miT,108,981);


__CvT__record_line____(__CvT_miT,108,984);int __ret = 0 ; 
__CvT__record_line____(__CvT_miT,108,985);if ( this -> pbase ( ) < this -> pptr ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,987);const int_type __tmp = this -> overflow ( ) ; 
__CvT__record_line____(__CvT_miT,108,988);if ( traits_type :: eq_int_type ( __tmp , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,108,989);__ret = - 1 ; 
}} 
}__CvT__record_line____(__CvT_miT,108,991);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
void 
basic_filebuf < _CharT , _Traits >:: 
imbue ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,108,998);
__CvT__record_line____(__CvT_miT,108,999);bool __testvalid = true ; 

__CvT__record_line____(__CvT_miT,108,1001);const __codecvt_type * _M_codecvt_tmp = 0 ; 
__CvT__record_line____(__CvT_miT,108,1002);if ( __builtin_expect ( has_facet < __codecvt_type > ( __loc ) , true ) ) 
{__CvT__record_line____(__CvT_miT,108,1003);_M_codecvt_tmp = & use_facet < __codecvt_type > ( __loc ) ; 

}__CvT__record_line____(__CvT_miT,108,1005);if ( this -> is_open ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,108,1008);if ( ( _M_reading || _M_writing ) 
&& __check_facet ( _M_codecvt ) . encoding ( ) == - 1 ) 
{__CvT__record_line____(__CvT_miT,108,1010);__testvalid = false ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,108,1013);if ( _M_reading ) 
{{ 
__CvT__record_line____(__CvT_miT,108,1015);if ( __check_facet ( _M_codecvt ) . always_noconv ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,108,1017);if ( _M_codecvt_tmp 
&& ! __check_facet ( _M_codecvt_tmp ) . always_noconv ( ) ) 
{__CvT__record_line____(__CvT_miT,108,1019);__testvalid = this -> seekoff ( 0 , ios_base :: cur , _M_mode ) 
!= pos_type ( off_type ( - 1 ) ) ; 
}} 
}else {
{ 

__CvT__record_line____(__CvT_miT,108,1025);_M_ext_next = _M_ext_buf 
+ _M_codecvt -> length ( _M_state_last , _M_ext_buf , 
_M_ext_next , 
this -> gptr ( ) - this -> eback ( ) ) ; 
__CvT__record_line____(__CvT_miT,108,1029);const streamsize __remainder = _M_ext_end - _M_ext_next ; 
__CvT__record_line____(__CvT_miT,108,1030);if ( __remainder ) 
{__CvT__record_line____(__CvT_miT,108,1031);__builtin_memmove ( _M_ext_buf , _M_ext_next , __remainder ) ; 

}__CvT__record_line____(__CvT_miT,108,1033);_M_ext_next = _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,108,1034);_M_ext_end = _M_ext_buf + __remainder ; 
__CvT__record_line____(__CvT_miT,108,1035);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,108,1036);_M_state_last = _M_state_cur = _M_state_beg ; 
} 
}} 
}else {__CvT__record_line____(__CvT_miT,108,1039);if ( _M_writing && ( __testvalid = _M_terminate_output ( ) ) ) 
{__CvT__record_line____(__CvT_miT,108,1040);_M_set_buffer ( - 1 ) ; 
}}} 
}} 

}__CvT__record_line____(__CvT_miT,108,1044);if ( __testvalid ) 
{__CvT__record_line____(__CvT_miT,108,1045);_M_codecvt = _M_codecvt_tmp ; 
}else {
__CvT__record_line____(__CvT_miT,108,1047);_M_codecvt = 0 ; 
}} 




extern template class basic_filebuf < char > ; 
extern template class basic_ifstream < char > ; 
extern template class basic_ofstream < char > ; 
extern template class basic_fstream < char > ; 


extern template class basic_filebuf < wchar_t > ; 
extern template class basic_ifstream < wchar_t > ; 
extern template class basic_ofstream < wchar_t > ; 
extern template class basic_fstream < wchar_t > ; 




} 
# 1082 "/usr/include/c++/5/fstream" 2 3 
# 3 "hard.c" 2 
# 1 "/usr/include/c++/5/iostream" 1 3 
# 36 "/usr/include/c++/5/iostream" 3 

# 37 "/usr/include/c++/5/iostream" 3 





namespace std 
{ 

# 60 "/usr/include/c++/5/iostream" 3 
extern istream cin ; 
extern ostream cout ; 
extern ostream cerr ; 
extern ostream clog ; 


extern wistream wcin ; 
extern wostream wcout ; 
extern wostream wcerr ; 
extern wostream wclog ; 




static ios_base :: Init __ioinit ; 


} 
# 4 "hard.c" 2 


# 5 "hard.c" 
using namespace std ; 

int main ( ) 
{ extern void CvT_StartRecording____(); CvT_StartRecording____(); __CvT__record_line____(__CvT_miT,0,8);

__CvT__record_line____(__CvT_miT,0,10);string x ( "crap" ) ; 
__CvT__record_line____(__CvT_miT,0,11);string y ( "junk" ) ; 

__CvT__record_line____(__CvT_miT,0,13);string z = x + y ; 

__CvT__record_line____(__CvT_miT,0,15);cout << z << endl ; 

} 

# 1 "Instrumentation code ending"
static char const *__CvT__file_name____[]={
"/mnt/c/Users/L01113464/GitAgoDic17/cypss17_2/Coverage/CovTool/tests/hard.c",
"/mnt/c/Users/L01113464/GitAgoDic17/cypss17_2/Coverage/CovTool/tests/<built-in>",
"/mnt/c/Users/L01113464/GitAgoDic17/cypss17_2/Coverage/CovTool/tests/<command-line>",
"/usr/include/stdc-predef.h",
"/usr/include/c++/5/string",
"/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h",
"/usr/include/x86_64-linux-gnu/c++/5/bits/os_defines.h",
"/usr/include/features.h",
"/usr/include/x86_64-linux-gnu/sys/cdefs.h",
"/usr/include/x86_64-linux-gnu/bits/wordsize.h",
"/usr/include/x86_64-linux-gnu/gnu/stubs.h",
"/usr/include/x86_64-linux-gnu/gnu/stubs-64.h",
"/usr/include/x86_64-linux-gnu/c++/5/bits/cpu_defines.h",
"/usr/include/c++/5/bits/stringfwd.h",
"/usr/include/c++/5/bits/memoryfwd.h",
"/usr/include/c++/5/bits/char_traits.h",
"/usr/include/c++/5/bits/stl_algobase.h",
"/usr/include/c++/5/bits/functexcept.h",
"/usr/include/c++/5/bits/exception_defines.h",
"/usr/include/c++/5/bits/cpp_type_traits.h",
"/usr/include/c++/5/ext/type_traits.h",
"/usr/include/c++/5/ext/numeric_traits.h",
"/usr/include/c++/5/bits/stl_pair.h",
"/usr/include/c++/5/bits/move.h",
"/usr/include/c++/5/bits/concept_check.h",
"/usr/include/c++/5/bits/stl_iterator_base_types.h",
"/usr/include/c++/5/bits/stl_iterator_base_funcs.h",
"/usr/include/c++/5/debug/debug.h",
"/usr/include/c++/5/bits/stl_iterator.h",
"/usr/include/c++/5/bits/ptr_traits.h",
"/usr/include/c++/5/bits/predefined_ops.h",
"/usr/include/c++/5/bits/postypes.h",
"/usr/include/c++/5/cwchar",
"/usr/include/wchar.h",
"/usr/include/stdio.h",
"/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h",
"/usr/include/x86_64-linux-gnu/bits/wchar.h",
"/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h",
"/usr/include/xlocale.h",
"/usr/include/c++/5/bits/allocator.h",
"/usr/include/x86_64-linux-gnu/c++/5/bits/c++allocator.h",
"/usr/include/c++/5/ext/new_allocator.h",
"/usr/include/c++/5/new",
"/usr/include/c++/5/exception",
"/usr/include/c++/5/bits/atomic_lockfree_defines.h",
"/usr/include/c++/5/bits/localefwd.h",
"/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h",
"/usr/include/c++/5/clocale",
"/usr/include/locale.h",
"/usr/include/x86_64-linux-gnu/bits/locale.h",
"/usr/include/c++/5/iosfwd",
"/usr/include/c++/5/cctype",
"/usr/include/ctype.h",
"/usr/include/x86_64-linux-gnu/bits/types.h",
"/usr/include/x86_64-linux-gnu/bits/typesizes.h",
"/usr/include/endian.h",
"/usr/include/x86_64-linux-gnu/bits/endian.h",
"/usr/include/x86_64-linux-gnu/bits/byteswap.h",
"/usr/include/x86_64-linux-gnu/bits/byteswap-16.h",
"/usr/include/c++/5/bits/ostream_insert.h",
"/usr/include/c++/5/bits/cxxabi_forced.h",
"/usr/include/c++/5/bits/stl_function.h",
"/usr/include/c++/5/backward/binders.h",
"/usr/include/c++/5/bits/range_access.h",
"/usr/include/c++/5/bits/basic_string.h",
"/usr/include/c++/5/ext/atomicity.h",
"/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h",
"/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h",
"/usr/include/pthread.h",
"/usr/include/sched.h",
"/usr/include/time.h",
"/usr/include/x86_64-linux-gnu/bits/sched.h",
"/usr/include/x86_64-linux-gnu/bits/time.h",
"/usr/include/x86_64-linux-gnu/bits/timex.h",
"/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h",
"/usr/include/x86_64-linux-gnu/bits/setjmp.h",
"/usr/include/x86_64-linux-gnu/c++/5/bits/atomic_word.h",
"/usr/include/c++/5/ext/alloc_traits.h",
"/usr/include/c++/5/bits/basic_string.tcc",
"/usr/include/c++/5/fstream",
"/usr/include/c++/5/istream",
"/usr/include/c++/5/ios",
"/usr/include/c++/5/bits/ios_base.h",
"/usr/include/c++/5/bits/locale_classes.h",
"/usr/include/c++/5/bits/locale_classes.tcc",
"/usr/include/c++/5/stdexcept",
"/usr/include/c++/5/streambuf",
"/usr/include/c++/5/bits/streambuf.tcc",
"/usr/include/c++/5/bits/basic_ios.h",
"/usr/include/c++/5/bits/locale_facets.h",
"/usr/include/c++/5/cwctype",
"/usr/include/wctype.h",
"/usr/include/x86_64-linux-gnu/c++/5/bits/ctype_base.h",
"/usr/include/c++/5/bits/streambuf_iterator.h",
"/usr/include/x86_64-linux-gnu/c++/5/bits/ctype_inline.h",
"/usr/include/c++/5/bits/locale_facets.tcc",
"/usr/include/c++/5/bits/basic_ios.tcc",
"/usr/include/c++/5/ostream",
"/usr/include/c++/5/bits/ostream.tcc",
"/usr/include/c++/5/bits/istream.tcc",
"/usr/include/c++/5/bits/codecvt.h",
"/usr/include/c++/5/cstdio",
"/usr/include/libio.h",
"/usr/include/_G_config.h",
"/usr/include/x86_64-linux-gnu/bits/stdio_lim.h",
"/usr/include/x86_64-linux-gnu/bits/sys_errlist.h",
"/usr/include/x86_64-linux-gnu/c++/5/bits/basic_file.h",
"/usr/include/x86_64-linux-gnu/c++/5/bits/c++io.h",
"/usr/include/c++/5/bits/fstream.tcc",
"/usr/include/c++/5/iostream",
0};
static int __CvT__logged_lines___[] = {
0,8,
0,10,
0,11,
0,13,
0,15,
5,222,
15,93,
15,97,
15,101,
15,123,
15,127,
15,131,
15,135,
15,139,
15,146,
15,147,
15,148,
15,149,
15,150,
15,151,
15,152,
15,159,
15,160,
15,161,
15,162,
15,163,
15,170,
15,171,
15,172,
15,173,
15,174,
15,181,
15,182,
15,190,
15,192,
15,193,
15,200,
15,202,
15,203,
15,243,
15,247,
15,251,
15,253,
15,259,
15,260,
15,261,
15,262,
15,267,
15,271,
15,272,
15,273,
15,274,
15,279,
15,280,
15,281,
15,282,
15,287,
15,288,
15,289,
15,290,
15,295,
15,296,
15,297,
15,298,
15,303,
15,309,
15,313,
15,317,
15,321,
15,338,
15,342,
15,346,
15,350,
15,351,
15,352,
15,353,
15,358,
15,362,
15,363,
15,364,
15,365,
15,370,
15,371,
15,372,
15,373,
15,378,
15,379,
15,380,
15,381,
15,386,
15,387,
15,388,
15,389,
15,394,
15,398,
15,402,
15,406,
15,410,
16,102,
16,103,
16,121,
16,143,
16,168,
16,176,
16,177,
16,178,
16,196,
16,200,
16,201,
16,202,
16,220,
16,224,
16,225,
16,226,
16,244,
16,246,
16,247,
16,248,
16,266,
16,268,
16,269,
16,270,
16,283,
16,294,
16,308,
16,309,
16,310,
16,311,
16,336,
16,338,
16,340,
16,341,
16,342,
16,344,
16,374,
16,382,
16,383,
16,384,
16,385,
16,392,
16,396,
16,401,
16,437,
16,438,
16,463,
16,470,
16,518,
16,519,
16,520,
16,521,
16,546,
16,547,
16,548,
16,549,
16,550,
16,576,
16,584,
16,585,
16,586,
16,587,
16,594,
16,598,
16,603,
16,612,
16,613,
16,639,
16,648,
16,699,
16,700,
16,701,
16,709,
16,710,
16,711,
16,712,
16,720,
16,721,
16,722,
16,723,
16,741,
16,747,
16,755,
16,756,
16,758,
16,759,
16,766,
16,767,
16,768,
16,770,
16,771,
16,778,
16,779,
16,780,
16,801,
16,805,
16,814,
16,815,
16,816,
16,817,
16,818,
16,828,
16,829,
16,830,
16,831,
16,838,
16,841,
16,847,
16,856,
16,861,
16,871,
16,872,
16,874,
16,876,
16,882,
16,890,
16,895,
16,896,
16,899,
16,900,
16,901,
16,902,
16,904,
16,919,
16,920,
16,932,
16,933,
16,934,
16,935,
16,936,
16,937,
16,938,
16,946,
16,949,
16,956,
16,964,
16,968,
16,970,
16,972,
16,973,
16,974,
16,975,
16,977,
16,978,
16,979,
16,982,
16,984,
16,1002,
16,1009,
16,1017,
16,1021,
16,1025,
16,1029,
16,1033,
16,1037,
16,1058,
16,1067,
16,1091,
16,1097,
16,1098,
16,1099,
16,1100,
16,1219,
16,1232,
16,1255,
16,1262,
16,1272,
16,1273,
16,1275,
16,1276,
16,1278,
16,1298,
16,1307,
16,1332,
16,1338,
20,151,
20,156,
22,109,
22,113,
22,119,
22,215,
22,221,
22,228,
22,234,
22,240,
22,246,
22,287,
23,48,
23,49,
23,199,
23,200,
23,201,
31,124,
31,134,
31,137,
31,142,
31,147,
31,155,
31,156,
31,157,
31,166,
31,167,
31,168,
31,179,
31,180,
31,181,
31,182,
31,193,
31,194,
31,195,
31,196,
31,206,
31,217,
31,222,
39,113,
39,116,
39,119,
39,121,
39,130,
39,136,
39,142,
39,148,
39,165,
39,172,
39,174,
39,175,
39,185,
39,193,
41,79,
41,81,
41,84,
41,86,
41,90,
41,94,
41,100,
41,101,
41,102,
41,104,
41,110,
41,114,
41,130,
41,133,
41,140,
41,145,
42,56,
42,130,
42,132,
42,135,
42,136,
43,76,
46,73,
46,75,
46,88,
46,89,
46,92,
46,97,
46,100,
46,108,
57,46,
57,47,
57,110,
57,111,
59,58,
59,62,
59,63,
59,65,
59,66,
59,68,
59,69,
59,78,
59,82,
59,83,
59,85,
59,87,
59,88,
59,90,
59,93,
59,94,
59,95,
59,96,
59,97,
59,98,
59,101,
59,102,
59,106,
59,107,
59,110,
59,112,
61,172,
61,182,
61,192,
61,202,
61,212,
61,222,
61,357,
61,367,
61,377,
61,387,
61,397,
61,407,
61,530,
61,540,
61,550,
61,623,
61,632,
61,641,
61,650,
61,751,
61,756,
61,764,
61,778,
61,784,
61,792,
61,825,
61,829,
61,833,
61,840,
61,851,
61,855,
61,859,
61,866,
61,875,
61,879,
61,888,
61,892,
61,913,
61,917,
61,944,
61,948,
61,962,
61,966,
61,980,
61,984,
61,998,
61,1002,
61,1016,
61,1020,
61,1034,
61,1038,
61,1052,
61,1056,
61,1070,
61,1074,
61,1085,
61,1090,
61,1095,
61,1100,
61,1105,
61,1110,
61,1115,
61,1120,
62,119,
62,123,
62,129,
62,136,
62,138,
62,154,
62,158,
62,164,
62,171,
62,173,
64,109,
64,127,
64,131,
64,135,
64,139,
64,143,
64,149,
64,153,
64,159,
64,163,
64,164,
64,165,
64,170,
64,178,
64,179,
64,180,
64,185,
64,193,
64,195,
64,203,
64,207,
64,212,
64,214,
64,235,
64,239,
64,259,
64,260,
64,261,
64,264,
64,269,
64,270,
64,271,
64,278,
64,279,
64,280,
64,286,
64,287,
64,295,
64,296,
64,297,
64,299,
64,304,
64,305,
64,306,
64,308,
64,313,
64,314,
64,315,
64,317,
64,325,
64,326,
64,327,
64,332,
64,337,
64,341,
64,346,
64,350,
64,351,
64,353,
64,354,
64,355,
64,356,
64,358,
64,384,
64,392,
64,400,
64,413,
64,414,
64,416,
64,429,
64,430,
64,432,
64,447,
64,456,
64,466,
64,537,
64,543,
64,551,
64,559,
64,570,
64,571,
64,572,
64,612,
64,620,
64,628,
64,636,
64,645,
64,654,
64,663,
64,672,
64,716,
64,722,
64,727,
64,754,
64,779,
64,780,
64,809,
64,817,
64,832,
64,834,
64,849,
64,855,
64,870,
64,871,
64,872,
64,876,
64,891,
64,892,
64,893,
64,897,
64,942,
64,951,
64,960,
64,961,
64,962,
64,983,
64,1000,
64,1012,
64,1014,
64,1015,
64,1025,
64,1027,
64,1028,
64,1029,
64,1042,
64,1071,
64,1079,
64,1080,
64,1081,
64,1082,
64,1083,
64,1084,
64,1094,
64,1095,
64,1096,
64,1132,
64,1148,
64,1150,
64,1164,
64,1166,
64,1181,
64,1199,
64,1252,
64,1296,
64,1328,
64,1352,
64,1374,
64,1393,
64,1395,
64,1417,
64,1435,
64,1437,
64,1438,
64,1439,
64,1459,
64,1460,
64,1462,
64,1475,
64,1478,
64,1479,
64,1480,
64,1494,
64,1497,
64,1498,
64,1499,
64,1532,
64,1555,
64,1580,
64,1582,
64,1604,
64,1606,
64,1628,
64,1647,
64,1667,
64,1670,
64,1688,
64,1690,
64,1710,
64,1713,
64,1753,
64,1758,
64,1767,
64,1771,
64,1778,
64,1782,
64,1789,
64,1793,
64,1800,
64,1804,
64,1833,
64,1888,
64,1898,
64,1905,
64,1935,
64,1949,
64,1951,
64,1980,
64,2009,
64,2011,
64,2041,
64,2070,
64,2072,
64,2089,
64,2105,
64,2134,
64,2136,
64,2153,
64,2168,
64,2198,
64,2200,
64,2231,
64,2261,
64,2263,
64,2294,
64,2313,
64,2314,
64,2315,
64,2316,
64,2318,
64,2319,
64,2320,
64,2321,
64,4822,
64,4823,
64,4824,
64,4825,
64,4837,
64,4840,
64,4841,
64,4842,
64,4906,
64,4913,
64,4927,
64,4939,
64,4952,
64,4964,
64,4976,
64,4989,
64,5001,
64,5013,
64,5026,
64,5038,
64,5050,
64,5063,
64,5075,
64,5087,
64,5100,
64,5112,
64,5124,
64,5137,
64,5174,
64,5177,
64,5214,
65,49,
65,53,
65,66,
65,67,
65,68,
65,69,
65,74,
65,79,
65,81,
65,82,
65,84,
65,93,
65,95,
65,96,
65,98,
67,248,
67,249,
67,251,
67,661,
67,662,
67,667,
67,668,
67,673,
67,674,
67,679,
67,680,
67,685,
67,686,
67,691,
67,692,
67,697,
67,698,
67,699,
67,701,
67,706,
67,707,
67,712,
67,713,
67,718,
67,719,
67,724,
67,725,
67,730,
67,731,
67,732,
67,737,
67,738,
67,739,
67,741,
67,746,
67,747,
67,748,
67,750,
67,755,
67,756,
67,757,
67,759,
67,766,
67,767,
67,768,
67,770,
67,776,
67,777,
67,778,
67,780,
67,809,
67,810,
67,815,
67,816,
67,823,
67,824,
67,830,
67,831,
67,836,
67,837,
67,851,
67,852,
67,857,
67,858,
67,863,
67,864,
67,870,
67,871,
67,877,
67,878,
67,883,
67,884,
68,560,
68,561,
68,562,
68,563,
68,565,
77,182,
77,185,
77,189,
77,192,
77,195,
77,197,
77,200,
77,203,
78,60,
78,61,
78,62,
78,67,
78,70,
78,71,
78,73,
78,75,
78,76,
78,78,
78,80,
78,83,
78,85,
78,87,
78,88,
78,89,
78,91,
78,93,
78,95,
78,96,
78,97,
78,102,
78,103,
78,105,
78,106,
78,107,
78,111,
78,112,
78,114,
78,116,
78,117,
78,121,
78,122,
78,123,
78,124,
78,126,
78,129,
78,130,
78,131,
78,138,
78,141,
78,142,
78,147,
78,149,
78,151,
78,152,
78,157,
78,170,
78,171,
78,172,
78,174,
78,176,
78,177,
78,180,
78,182,
78,184,
78,187,
78,188,
78,189,
78,190,
78,191,
78,192,
78,194,
78,195,
78,200,
78,201,
78,204,
78,213,
78,215,
78,216,
78,219,
78,221,
78,223,
78,224,
78,228,
78,229,
78,232,
78,233,
78,236,
78,243,
78,244,
78,246,
78,247,
78,250,
78,251,
78,253,
78,260,
78,261,
78,263,
78,264,
78,266,
78,268,
78,269,
78,270,
78,271,
78,272,
78,275,
78,276,
78,278,
78,286,
78,288,
78,289,
78,291,
78,292,
78,294,
78,297,
78,298,
78,299,
78,300,
78,301,
78,303,
78,305,
78,306,
78,307,
78,317,
78,318,
78,320,
78,321,
78,323,
78,324,
78,325,
78,326,
78,327,
78,328,
78,331,
78,332,
78,333,
78,340,
78,341,
78,343,
78,344,
78,346,
78,353,
78,354,
78,355,
78,356,
78,357,
78,358,
78,365,
78,366,
78,368,
78,370,
78,371,
78,374,
78,376,
78,377,
78,387,
78,388,
78,389,
78,390,
78,399,
78,400,
78,402,
78,403,
78,405,
78,407,
78,409,
78,410,
78,411,
78,414,
78,416,
78,417,
78,419,
78,420,
78,428,
78,429,
78,431,
78,432,
78,434,
78,436,
78,438,
78,439,
78,441,
78,442,
78,443,
78,444,
78,449,
78,450,
78,451,
78,452,
78,453,
78,455,
78,456,
78,457,
78,458,
78,461,
78,462,
78,463,
78,470,
78,472,
78,473,
78,480,
78,481,
78,482,
78,484,
78,485,
78,487,
78,1153,
78,1157,
78,1158,
78,1159,
78,1160,
78,1161,
78,1162,
78,1168,
78,1171,
78,1172,
78,1173,
78,1174,
78,1175,
78,1176,
78,1183,
78,1185,
78,1186,
78,1188,
78,1189,
78,1191,
78,1193,
78,1194,
78,1197,
78,1199,
78,1206,
78,1207,
78,1208,
78,1209,
78,1211,
78,1212,
78,1213,
78,1214,
78,1215,
78,1217,
78,1224,
78,1226,
78,1227,
78,1229,
78,1230,
78,1231,
78,1233,
78,1234,
78,1238,
78,1245,
78,1246,
78,1247,
78,1249,
78,1250,
78,1251,
78,1252,
78,1253,
78,1255,
78,1262,
78,1264,
78,1266,
78,1267,
78,1268,
78,1270,
78,1277,
78,1279,
78,1280,
78,1282,
78,1283,
78,1284,
78,1286,
78,1287,
78,1291,
78,1298,
78,1300,
78,1301,
78,1302,
78,1303,
78,1310,
78,1311,
78,1312,
78,1313,
78,1314,
78,1321,
78,1323,
78,1324,
78,1326,
78,1327,
78,1328,
78,1330,
78,1331,
78,1335,
78,1342,
78,1343,
78,1344,
78,1346,
78,1347,
78,1348,
78,1350,
78,1351,
78,1355,
78,1362,
78,1363,
78,1364,
78,1365,
78,1366,
78,1367,
78,1368,
78,1369,
78,1370,
78,1378,
78,1379,
78,1380,
78,1381,
78,1382,
78,1383,
78,1384,
78,1386,
78,1387,
78,1388,
78,1395,
78,1397,
78,1398,
78,1399,
78,1400,
78,1401,
78,1402,
78,1403,
78,1410,
78,1412,
78,1413,
78,1414,
78,1415,
78,1416,
78,1417,
78,1418,
78,1419,
78,1427,
78,1429,
78,1430,
78,1431,
78,1432,
78,1433,
78,1434,
78,1435,
78,1443,
78,1452,
78,1453,
78,1454,
78,1455,
78,1457,
78,1460,
78,1461,
78,1462,
78,1463,
78,1464,
78,1466,
78,1467,
78,1468,
78,1470,
78,1475,
78,1477,
78,1478,
78,1480,
78,1481,
78,1482,
78,1484,
78,1486,
78,1487,
78,1488,
78,1492,
78,1493,
78,1500,
78,1504,
78,1505,
78,1506,
78,1507,
78,1508,
78,1515,
78,1522,
78,1523,
78,1524,
78,1525,
78,1526,
78,1528,
78,1530,
78,1531,
78,1532,
78,1533,
78,1535,
78,1539,
78,1540,
78,1541,
78,1544,
78,1545,
78,1546,
78,1548,
78,1549,
78,1552,
78,1556,
78,1557,
78,1564,
78,1567,
78,1568,
78,1569,
78,1570,
78,1571,
79,192,
79,193,
79,195,
79,196,
79,197,
79,198,
79,209,
79,210,
79,213,
79,214,
79,215,
79,239,
79,253,
79,423,
79,424,
79,425,
79,428,
79,429,
79,431,
79,433,
79,434,
79,436,
79,482,
79,497,
79,498,
79,499,
79,534,
79,567,
79,575,
79,581,
79,596,
79,597,
79,598,
79,602,
79,634,
79,635,
79,636,
79,683,
79,700,
79,701,
79,702,
79,738,
79,771,
79,779,
79,785,
79,801,
79,802,
79,803,
79,807,
79,840,
79,841,
79,842,
79,891,
79,905,
79,906,
79,907,
79,940,
79,973,
79,981,
79,987,
79,1003,
79,1004,
79,1005,
79,1009,
79,1042,
79,1043,
79,1044,
80,95,
80,104,
80,121,
80,125,
80,126,
80,127,
80,132,
80,133,
80,134,
80,169,
80,176,
80,183,
80,187,
80,191,
80,196,
80,200,
80,215,
80,219,
80,223,
80,236,
80,270,
80,355,
80,388,
80,428,
80,608,
80,735,
80,757,
80,762,
80,804,
80,809,
80,850,
80,856,
80,860,
82,84,
82,88,
82,92,
82,96,
82,100,
82,104,
82,108,
82,126,
82,130,
82,134,
82,138,
82,142,
82,146,
82,150,
82,166,
82,170,
82,174,
82,178,
82,182,
82,186,
82,190,
82,238,
82,538,
82,541,
82,546,
82,549,
82,550,
82,554,
82,571,
82,620,
82,631,
82,632,
82,633,
82,634,
82,647,
82,648,
82,649,
82,650,
82,664,
82,665,
82,666,
82,667,
82,668,
82,679,
82,690,
82,699,
82,700,
82,701,
82,702,
82,713,
82,722,
82,723,
82,724,
82,725,
82,764,
82,775,
82,810,
82,811,
82,813,
82,831,
82,832,
82,834,
82,879,
82,880,
82,881,
82,887,
82,888,
82,889,
82,895,
82,896,
82,897,
82,903,
82,904,
82,905,
82,911,
82,912,
82,913,
82,919,
82,920,
82,921,
82,927,
82,928,
82,929,
82,935,
82,936,
82,937,
82,943,
82,944,
82,945,
82,951,
82,952,
82,953,
82,959,
82,960,
82,961,
82,967,
82,968,
82,969,
82,975,
82,976,
82,977,
82,983,
82,984,
82,985,
82,992,
82,993,
82,994,
82,1000,
82,1001,
82,1002,
82,1008,
82,1009,
82,1010,
82,1017,
82,1018,
82,1019,
82,1025,
82,1026,
82,1027,
82,1033,
82,1034,
82,1035,
82,1042,
82,1043,
82,1044,
82,1050,
82,1051,
82,1052,
83,265,
83,404,
83,434,
83,438,
83,441,
83,444,
83,445,
83,505,
83,548,
83,552,
83,555,
83,558,
83,559,
83,578,
83,579,
83,580,
83,582,
83,583,
83,584,
83,602,
83,607,
83,608,
83,609,
83,662,
83,676,
83,693,
83,711,
83,725,
83,738,
83,819,
83,820,
83,823,
83,824,
83,836,
84,46,
84,47,
84,49,
84,50,
84,53,
84,54,
84,56,
84,57,
84,64,
84,65,
84,66,
84,68,
84,72,
84,73,
84,75,
84,83,
84,85,
84,86,
84,105,
84,106,
84,107,
84,108,
84,133,
84,134,
84,135,
84,136,
84,137,
84,139,
84,150,
84,156,
84,163,
84,166,
84,167,
84,169,
84,170,
84,171,
84,172,
84,177,
84,179,
84,180,
84,181,
84,183,
84,184,
84,185,
84,186,
84,187,
84,188,
84,189,
84,190,
84,192,
84,193,
84,201,
84,202,
84,205,
84,207,
84,208,
84,210,
84,212,
84,214,
84,219,
84,222,
84,225,
84,227,
84,228,
84,229,
84,230,
84,233,
84,234,
84,235,
84,236,
84,238,
84,239,
84,244,
84,245,
84,248,
84,250,
84,257,
84,258,
84,259,
84,260,
84,264,
86,198,
86,210,
86,211,
86,212,
86,213,
86,214,
86,227,
86,240,
86,253,
86,265,
86,271,
86,285,
86,286,
86,287,
86,299,
86,300,
86,301,
86,303,
86,304,
86,317,
86,318,
86,319,
86,321,
86,322,
86,325,
86,326,
86,339,
86,340,
86,341,
86,342,
86,344,
86,345,
86,358,
86,373,
86,374,
86,375,
86,376,
86,378,
86,381,
86,382,
86,384,
86,398,
86,399,
86,400,
86,402,
86,403,
86,406,
86,407,
86,425,
86,426,
86,427,
86,429,
86,430,
86,431,
86,434,
86,435,
86,451,
86,467,
86,482,
86,485,
86,488,
86,498,
86,510,
86,511,
86,512,
86,513,
86,529,
86,532,
86,535,
86,545,
86,556,
86,557,
86,558,
86,577,
86,592,
86,604,
86,616,
86,627,
86,649,
86,688,
86,701,
86,702,
86,703,
86,705,
86,707,
86,708,
86,710,
86,725,
86,769,
86,784,
86,785,
86,786,
86,788,
86,794,
86,797,
87,47,
87,48,
87,49,
87,51,
87,52,
87,54,
87,55,
87,56,
87,57,
87,58,
87,59,
87,62,
87,64,
87,65,
87,67,
87,68,
87,71,
87,74,
87,81,
87,82,
87,83,
87,85,
87,86,
87,88,
87,89,
87,90,
87,91,
87,92,
87,93,
87,96,
87,98,
87,99,
87,101,
87,102,
87,105,
87,108,
87,119,
87,120,
87,121,
87,122,
87,123,
87,125,
87,126,
87,128,
87,129,
87,131,
87,132,
87,134,
87,141,
87,142,
87,143,
88,121,
88,126,
88,138,
88,158,
88,165,
88,168,
88,169,
88,170,
88,181,
88,191,
88,202,
88,212,
88,223,
88,258,
88,259,
88,260,
88,273,
88,282,
88,296,
88,308,
88,309,
88,310,
88,311,
88,322,
88,371,
88,372,
88,374,
88,375,
88,377,
88,391,
88,392,
88,393,
88,394,
88,431,
88,450,
88,463,
89,120,
89,121,
89,122,
89,130,
89,131,
89,132,
89,133,
89,170,
89,187,
89,203,
89,219,
89,233,
89,248,
89,262,
89,277,
89,294,
89,313,
89,332,
89,355,
89,359,
89,362,
89,623,
89,803,
89,820,
89,836,
89,853,
89,873,
89,874,
89,875,
89,876,
89,877,
89,900,
89,901,
89,903,
89,904,
89,906,
89,907,
89,908,
89,931,
89,932,
89,933,
89,934,
89,935,
89,936,
89,937,
89,965,
89,966,
89,968,
89,969,
89,971,
89,972,
89,973,
89,982,
89,1083,
89,1106,
89,1107,
89,1108,
89,1132,
89,1159,
89,1160,
89,1161,
89,1490,
89,1623,
89,1640,
89,1641,
89,1643,
89,1644,
89,1645,
89,1692,
89,1706,
89,1720,
89,1733,
89,1746,
89,1777,
89,1790,
89,1803,
89,1820,
89,1832,
89,1845,
89,1858,
89,1871,
89,1908,
89,1909,
89,1912,
89,1913,
89,1914,
89,1915,
89,1927,
89,1969,
89,1997,
89,2034,
89,2039,
89,2044,
89,2049,
89,2055,
89,2060,
89,2094,
89,2099,
89,2104,
89,2137,
89,2141,
89,2157,
89,2158,
89,2159,
89,2161,
89,2162,
89,2166,
89,2167,
89,2168,
89,2169,
89,2170,
89,2171,
89,2173,
89,2180,
89,2181,
89,2182,
89,2183,
89,2185,
89,2186,
89,2187,
89,2189,
89,2213,
89,2218,
89,2223,
89,2228,
89,2234,
89,2239,
89,2310,
89,2329,
89,2371,
89,2376,
89,2381,
89,2386,
89,2434,
89,2439,
89,2460,
89,2489,
89,2510,
89,2515,
89,2521,
89,2526,
89,2566,
89,2572,
89,2578,
89,2584,
89,2590,
89,2596,
89,2602,
89,2608,
89,2614,
89,2620,
89,2626,
89,2640,
89,2646,
93,103,
93,113,
93,117,
93,124,
93,132,
93,138,
93,142,
93,144,
93,145,
93,147,
93,153,
93,158,
93,159,
93,161,
93,162,
93,164,
93,173,
93,178,
93,179,
93,180,
93,181,
93,183,
93,184,
93,185,
93,187,
93,189,
93,191,
93,196,
93,197,
93,198,
93,206,
93,212,
93,242,
93,246,
93,251,
93,252,
93,254,
93,255,
93,261,
93,266,
93,271,
93,276,
93,280,
93,281,
93,284,
93,285,
93,296,
93,297,
93,299,
93,300,
93,301,
93,302,
93,304,
93,312,
93,313,
93,314,
93,315,
93,316,
93,324,
93,325,
93,326,
93,327,
93,328,
93,336,
93,342,
93,344,
93,345,
93,346,
93,348,
93,349,
93,351,
93,352,
93,353,
93,354,
93,358,
93,359,
93,363,
93,371,
93,377,
93,379,
93,380,
93,381,
93,382,
93,385,
93,386,
93,388,
93,390,
93,391,
93,392,
93,393,
93,396,
93,399,
93,400,
93,402,
93,404,
94,44,
94,49,
94,50,
94,51,
94,52,
94,58,
94,59,
94,61,
94,62,
94,68,
94,69,
94,71,
94,72,
95,54,
95,55,
95,56,
95,57,
95,59,
95,60,
95,62,
95,63,
95,67,
95,68,
95,70,
95,72,
95,79,
95,80,
95,82,
95,83,
95,84,
95,85,
95,87,
95,88,
95,89,
95,90,
95,91,
95,96,
95,97,
95,98,
95,99,
95,101,
95,102,
95,103,
95,104,
95,106,
95,107,
95,109,
95,110,
95,113,
95,117,
95,118,
95,119,
95,120,
95,124,
95,125,
95,126,
95,127,
95,151,
95,154,
95,155,
95,156,
95,157,
95,158,
95,161,
95,164,
95,166,
95,167,
95,168,
95,172,
95,173,
95,174,
95,176,
95,181,
95,182,
95,183,
95,185,
95,187,
95,188,
95,190,
95,192,
95,193,
95,195,
95,197,
95,198,
95,200,
95,203,
95,207,
95,208,
95,209,
95,210,
95,211,
95,212,
95,214,
95,216,
95,218,
95,219,
95,221,
95,222,
95,224,
95,227,
95,228,
95,230,
95,235,
95,236,
95,239,
95,241,
95,242,
95,243,
95,244,
95,246,
95,250,
95,251,
95,255,
95,257,
95,258,
95,260,
95,263,
95,267,
95,269,
95,273,
95,275,
95,276,
95,282,
95,283,
95,287,
95,289,
95,291,
95,296,
95,297,
95,298,
95,299,
95,302,
95,306,
95,308,
95,310,
95,311,
95,312,
95,314,
95,319,
95,320,
95,321,
95,322,
95,325,
95,327,
95,328,
95,329,
95,333,
95,335,
95,339,
95,340,
95,344,
95,347,
95,348,
95,350,
95,355,
95,358,
95,359,
95,361,
95,364,
95,367,
95,377,
95,382,
95,383,
95,384,
95,385,
95,386,
95,389,
95,391,
95,392,
95,395,
95,398,
95,399,
95,401,
95,402,
95,403,
95,407,
95,408,
95,410,
95,416,
95,417,
95,418,
95,420,
95,422,
95,423,
95,426,
95,427,
95,428,
95,429,
95,430,
95,431,
95,433,
95,437,
95,438,
95,439,
95,441,
95,442,
95,445,
95,448,
95,450,
95,452,
95,453,
95,454,
95,457,
95,462,
95,466,
95,467,
95,468,
95,469,
95,470,
95,471,
95,475,
95,476,
95,477,
95,478,
95,480,
95,482,
95,484,
95,485,
95,486,
95,488,
95,489,
95,492,
95,493,
95,494,
95,495,
95,498,
95,499,
95,501,
95,504,
95,508,
95,512,
95,514,
95,515,
95,519,
95,520,
95,523,
95,524,
95,527,
95,529,
95,530,
95,532,
95,533,
95,534,
95,535,
95,536,
95,539,
95,540,
95,541,
95,542,
95,546,
95,547,
95,549,
95,554,
95,557,
95,559,
95,562,
95,567,
95,570,
95,571,
95,573,
95,575,
95,577,
95,579,
95,580,
95,583,
95,585,
95,586,
95,587,
95,597,
95,598,
95,603,
95,604,
95,605,
95,606,
95,611,
95,612,
95,613,
95,614,
95,621,
95,622,
95,623,
95,625,
95,626,
95,627,
95,628,
95,629,
95,630,
95,631,
95,633,
95,635,
95,636,
95,639,
95,641,
95,642,
95,644,
95,645,
95,647,
95,648,
95,650,
95,651,
95,653,
95,654,
95,656,
95,657,
95,659,
95,660,
95,662,
95,664,
95,665,
95,666,
95,668,
95,670,
95,672,
95,673,
95,679,
95,680,
95,681,
95,682,
95,685,
95,693,
95,694,
95,695,
95,696,
95,697,
95,698,
95,699,
95,700,
95,708,
95,709,
95,710,
95,711,
95,712,
95,713,
95,714,
95,715,
95,740,
95,741,
95,742,
95,743,
95,744,
95,745,
95,746,
95,747,
95,755,
95,758,
95,759,
95,765,
95,766,
95,769,
95,771,
95,772,
95,782,
95,785,
95,787,
95,796,
95,797,
95,798,
95,801,
95,803,
95,804,
95,808,
95,811,
95,813,
95,814,
95,821,
95,822,
95,824,
95,826,
95,827,
95,831,
95,841,
95,842,
95,844,
95,853,
95,857,
95,858,
95,859,
95,860,
95,861,
95,864,
95,865,
95,870,
95,871,
95,873,
95,876,
95,877,
95,880,
95,884,
95,887,
95,889,
95,893,
95,896,
95,898,
95,900,
95,903,
95,905,
95,907,
95,908,
95,912,
95,913,
95,915,
95,916,
95,921,
95,922,
95,924,
95,926,
95,927,
95,929,
95,933,
95,942,
95,946,
95,947,
95,952,
95,953,
95,955,
95,956,
95,958,
95,977,
95,979,
95,980,
95,981,
95,984,
95,986,
95,990,
95,992,
95,993,
95,997,
95,1002,
95,1003,
95,1004,
95,1005,
95,1008,
95,1012,
95,1014,
95,1015,
95,1016,
95,1017,
95,1020,
95,1044,
95,1046,
95,1048,
95,1051,
95,1052,
95,1053,
95,1055,
95,1056,
95,1062,
95,1068,
95,1071,
95,1072,
95,1074,
95,1075,
95,1076,
95,1079,
95,1082,
95,1084,
95,1088,
95,1089,
95,1091,
95,1093,
95,1094,
95,1096,
95,1100,
95,1107,
95,1108,
95,1109,
95,1111,
95,1112,
95,1117,
95,1118,
95,1119,
95,1121,
95,1123,
95,1126,
95,1127,
95,1129,
95,1130,
95,1134,
95,1135,
95,1137,
95,1139,
95,1140,
95,1144,
95,1145,
95,1147,
95,1149,
95,1150,
95,1152,
95,1159,
95,1174,
95,1181,
95,1182,
95,1183,
95,1185,
95,1191,
95,1193,
95,1194,
95,1211,
95,1212,
95,1213,
95,1216,
95,1218,
95,1219,
95,1220,
95,1223,
95,1224,
95,1229,
95,1230,
95,1232,
95,1235,
95,1236,
95,1237,
95,1239,
95,1244,
95,1245,
95,1246,
95,1247,
95,1251,
95,1252,
95,1260,
95,1261,
95,1262,
95,1264,
95,1268,
95,1269,
95,1272,
95,1273,
95,1275,
95,1277,
95,1278,
95,1279,
95,1282,
95,1284,
95,1285,
95,1286,
95,1289,
96,42,
96,43,
96,44,
96,46,
96,47,
96,48,
96,54,
96,55,
96,56,
96,57,
96,58,
96,64,
96,67,
96,73,
96,77,
96,78,
96,79,
96,80,
96,81,
96,83,
96,84,
96,86,
96,89,
96,90,
96,91,
96,92,
96,93,
96,95,
96,96,
96,97,
96,98,
96,99,
96,100,
96,101,
96,103,
96,106,
96,108,
96,115,
96,116,
96,117,
96,118,
96,119,
96,120,
96,121,
96,127,
96,129,
96,132,
96,146,
96,147,
96,149,
96,150,
96,151,
96,152,
96,158,
96,159,
96,160,
96,162,
96,164,
96,165,
96,167,
96,169,
96,170,
96,172,
97,85,
97,93,
97,109,
97,113,
97,118,
97,122,
97,123,
97,128,
97,132,
97,133,
97,167,
97,171,
97,175,
97,182,
97,185,
97,193,
97,196,
97,202,
97,206,
97,221,
97,225,
97,228,
97,233,
97,246,
97,312,
97,313,
97,314,
97,315,
97,385,
97,455,
97,457,
97,460,
97,461,
97,476,
97,498,
97,503,
97,509,
97,515,
97,520,
97,540,
97,541,
97,542,
97,544,
97,546,
97,557,
97,558,
97,559,
97,561,
97,563,
97,570,
97,575,
97,591,
97,603,
97,613,
98,49,
98,51,
98,52,
98,54,
98,55,
98,57,
98,65,
98,66,
98,67,
98,69,
98,70,
98,72,
98,73,
98,74,
98,78,
98,79,
98,82,
98,83,
98,84,
98,86,
98,93,
98,96,
98,97,
98,98,
98,100,
98,107,
98,110,
98,111,
98,112,
98,114,
98,121,
98,122,
98,123,
98,124,
98,126,
98,128,
98,129,
98,133,
98,134,
98,137,
98,139,
98,140,
98,141,
98,142,
98,143,
98,150,
98,157,
98,158,
98,160,
98,161,
98,163,
98,164,
98,165,
98,169,
98,170,
98,173,
98,174,
98,175,
98,177,
98,184,
98,192,
98,193,
98,195,
98,196,
98,199,
98,200,
98,203,
98,205,
98,212,
98,216,
98,217,
98,219,
98,220,
98,224,
98,225,
98,228,
98,229,
98,230,
98,231,
98,238,
98,239,
98,240,
98,242,
98,243,
98,247,
98,248,
98,251,
98,252,
98,259,
98,260,
98,261,
98,263,
98,267,
98,271,
98,272,
98,277,
98,278,
98,281,
98,282,
98,283,
98,284,
98,291,
98,292,
98,293,
98,295,
98,299,
98,303,
98,304,
98,309,
98,310,
98,313,
98,314,
98,315,
98,316,
98,322,
98,323,
98,324,
98,329,
98,330,
98,332,
98,335,
98,336,
98,337,
98,340,
98,341,
98,342,
98,343,
98,347,
98,348,
98,351,
98,353,
99,48,
99,49,
99,50,
99,52,
99,53,
99,54,
99,56,
99,57,
99,58,
99,60,
99,61,
99,64,
99,69,
99,70,
99,74,
99,75,
99,78,
99,79,
99,88,
99,89,
99,90,
99,92,
99,93,
99,95,
99,96,
99,100,
99,101,
99,104,
99,105,
99,106,
99,108,
99,115,
99,118,
99,119,
99,121,
99,122,
99,124,
99,125,
99,126,
99,130,
99,132,
99,133,
99,135,
99,137,
99,138,
99,141,
99,145,
99,146,
99,149,
99,150,
99,151,
99,153,
99,160,
99,163,
99,164,
99,166,
99,167,
99,169,
99,170,
99,171,
99,175,
99,177,
99,178,
99,180,
99,182,
99,183,
99,186,
99,190,
99,191,
99,194,
99,195,
99,196,
99,198,
99,205,
99,206,
99,207,
99,208,
99,210,
99,212,
99,213,
99,214,
99,215,
99,216,
99,220,
99,221,
99,224,
99,226,
99,227,
99,228,
99,229,
99,230,
99,237,
99,238,
99,239,
99,240,
99,241,
99,242,
99,243,
99,245,
99,247,
99,249,
99,250,
99,252,
99,256,
99,257,
99,260,
99,262,
99,263,
99,264,
99,265,
99,266,
99,273,
99,274,
99,275,
99,276,
99,277,
99,279,
99,281,
99,283,
99,285,
99,286,
99,289,
99,293,
99,294,
99,297,
99,299,
99,300,
99,301,
99,302,
99,303,
99,310,
99,311,
99,312,
99,313,
99,314,
99,316,
99,318,
99,319,
99,320,
99,321,
99,323,
99,327,
99,328,
99,329,
99,331,
99,332,
99,336,
99,337,
99,340,
99,344,
99,345,
99,346,
99,347,
99,348,
99,349,
99,350,
99,357,
99,358,
99,359,
99,360,
99,361,
99,363,
99,365,
99,366,
99,367,
99,368,
99,369,
99,371,
99,375,
99,376,
99,377,
99,379,
99,380,
99,384,
99,385,
99,388,
99,390,
99,391,
99,392,
99,393,
99,394,
99,401,
99,402,
99,403,
99,404,
99,405,
99,407,
99,409,
99,410,
99,411,
99,412,
99,414,
99,418,
99,419,
99,420,
99,422,
99,423,
99,426,
99,428,
99,429,
99,432,
99,437,
99,438,
99,441,
99,445,
99,446,
99,447,
99,448,
99,449,
99,450,
99,451,
99,461,
99,462,
99,463,
99,464,
99,466,
99,467,
99,469,
99,470,
99,472,
99,473,
99,475,
99,479,
99,480,
99,483,
99,484,
99,485,
99,487,
99,494,
99,495,
99,496,
99,497,
99,499,
99,500,
99,502,
99,503,
99,504,
99,513,
99,514,
99,516,
99,519,
99,520,
99,522,
99,525,
99,527,
99,530,
99,533,
99,534,
99,536,
99,537,
99,541,
99,542,
99,545,
99,546,
99,547,
99,549,
99,556,
99,557,
99,558,
99,559,
99,561,
99,562,
99,564,
99,565,
99,566,
99,569,
99,570,
99,572,
99,576,
99,577,
99,579,
99,583,
99,585,
99,588,
99,591,
99,592,
99,594,
99,595,
99,596,
99,598,
99,600,
99,601,
99,606,
99,607,
99,610,
99,611,
99,612,
99,614,
99,621,
99,622,
99,623,
99,624,
99,625,
99,627,
99,628,
99,630,
99,631,
99,632,
99,636,
99,637,
99,640,
99,641,
99,642,
99,644,
99,651,
99,652,
99,653,
99,654,
99,656,
99,657,
99,659,
99,660,
99,661,
99,665,
99,666,
99,669,
99,670,
99,671,
99,673,
99,680,
99,681,
99,682,
99,683,
99,685,
99,686,
99,689,
99,690,
99,691,
99,692,
99,693,
99,697,
99,698,
99,701,
99,702,
99,703,
99,705,
99,712,
99,715,
99,717,
99,718,
99,719,
99,721,
99,722,
99,724,
99,725,
99,726,
99,728,
99,732,
99,733,
99,736,
99,737,
99,738,
99,740,
99,747,
99,750,
99,752,
99,753,
99,754,
99,756,
99,757,
99,759,
99,760,
99,761,
99,763,
99,767,
99,768,
99,771,
99,772,
99,773,
99,775,
99,782,
99,785,
99,786,
99,787,
99,789,
99,790,
99,792,
99,793,
99,795,
99,796,
99,798,
99,803,
99,804,
99,807,
99,808,
99,809,
99,811,
99,818,
99,821,
99,822,
99,823,
99,825,
99,827,
99,828,
99,833,
99,834,
99,837,
99,839,
99,846,
99,850,
99,851,
99,852,
99,854,
99,855,
99,857,
99,860,
99,864,
99,865,
99,870,
99,871,
99,874,
99,875,
99,876,
99,878,
99,885,
99,889,
99,890,
99,891,
99,893,
99,894,
99,896,
99,899,
99,903,
99,904,
99,909,
99,910,
99,913,
99,914,
99,915,
99,917,
99,924,
99,928,
99,929,
99,931,
99,932,
99,934,
99,935,
99,936,
99,938,
99,942,
99,943,
99,946,
99,947,
99,948,
99,950,
99,956,
99,963,
99,964,
99,965,
99,966,
99,968,
99,971,
99,972,
99,973,
99,975,
99,977,
99,978,
99,979,
99,981,
99,986,
99,987,
99,988,
99,990,
99,991,
99,995,
99,996,
99,1000,
99,1001,
99,1004,
99,1006,
99,1007,
99,1008,
99,1009,
99,1010,
99,1017,
99,1023,
99,1024,
99,1025,
99,1026,
99,1028,
99,1030,
99,1032,
99,1033,
99,1034,
100,120,
100,121,
100,157,
100,200,
100,201,
100,207,
100,211,
100,216,
100,220,
100,224,
100,227,
100,294,
100,301,
100,588,
100,589,
100,592,
100,593,
100,605,
108,50,
108,53,
108,55,
108,56,
108,64,
108,65,
108,67,
108,68,
108,69,
108,71,
108,72,
108,73,
108,74,
108,75,
108,87,
108,88,
108,89,
108,180,
108,181,
108,182,
108,184,
108,185,
108,187,
108,188,
108,191,
108,192,
108,193,
108,196,
108,199,
108,202,
108,204,
108,207,
108,214,
108,215,
108,216,
108,218,
108,221,
108,224,
108,226,
108,227,
108,228,
108,229,
108,230,
108,231,
108,232,
108,233,
108,237,
108,239,
108,240,
108,244,
108,245,
108,248,
108,251,
108,252,
108,254,
108,255,
108,257,
108,264,
108,265,
108,266,
108,267,
108,271,
108,279,
108,281,
108,283,
108,290,
108,291,
108,292,
108,293,
108,295,
108,297,
108,298,
108,299,
108,300,
108,305,
108,307,
108,308,
108,311,
108,314,
108,316,
108,317,
108,318,
108,320,
108,322,
108,323,
108,329,
108,330,
108,331,
108,332,
108,333,
108,336,
108,337,
108,339,
108,340,
108,344,
108,345,
108,349,
108,351,
108,352,
108,353,
108,355,
108,356,
108,357,
108,359,
108,360,
108,362,
108,363,
108,364,
108,366,
108,368,
108,373,
108,375,
108,379,
108,380,
108,381,
108,382,
108,383,
108,384,
108,387,
108,388,
108,389,
108,393,
108,395,
108,396,
108,397,
108,400,
108,403,
108,408,
108,409,
108,411,
108,416,
108,418,
108,419,
108,420,
108,422,
108,427,
108,428,
108,431,
108,432,
108,435,
108,436,
108,439,
108,442,
108,449,
108,450,
108,451,
108,452,
108,454,
108,456,
108,457,
108,458,
108,459,
108,463,
108,464,
108,465,
108,466,
108,468,
108,469,
108,471,
108,473,
108,474,
108,475,
108,484,
108,489,
108,490,
108,491,
108,492,
108,493,
108,495,
108,496,
108,497,
108,498,
108,501,
108,508,
108,509,
108,510,
108,511,
108,513,
108,515,
108,517,
108,518,
108,519,
108,521,
108,523,
108,526,
108,528,
108,529,
108,534,
108,537,
108,538,
108,541,
108,546,
108,547,
108,548,
108,550,
108,551,
108,553,
108,558,
108,559,
108,561,
108,562,
108,566,
108,573,
108,575,
108,576,
108,577,
108,579,
108,580,
108,586,
108,587,
108,589,
108,590,
108,591,
108,592,
108,595,
108,596,
108,597,
108,600,
108,601,
108,604,
108,607,
108,608,
108,611,
108,613,
108,614,
108,615,
108,618,
108,620,
108,621,
108,622,
108,625,
108,629,
108,636,
108,638,
108,639,
108,641,
108,643,
108,644,
108,645,
108,646,
108,648,
108,650,
108,652,
108,653,
108,654,
108,655,
108,661,
108,662,
108,664,
108,668,
108,669,
108,671,
108,672,
108,673,
108,675,
108,676,
108,681,
108,682,
108,684,
108,686,
108,687,
108,689,
108,690,
108,692,
108,693,
108,694,
108,695,
108,697,
108,700,
108,702,
108,703,
108,705,
108,710,
108,711,
108,715,
108,717,
108,724,
108,725,
108,729,
108,731,
108,735,
108,736,
108,739,
108,740,
108,742,
108,743,
108,745,
108,746,
108,747,
108,750,
108,752,
108,753,
108,755,
108,756,
108,758,
108,761,
108,764,
108,765,
108,772,
108,773,
108,775,
108,776,
108,777,
108,787,
108,788,
108,791,
108,801,
108,802,
108,803,
108,804,
108,805,
108,806,
108,808,
108,809,
108,810,
108,816,
108,820,
108,821,
108,828,
108,829,
108,830,
108,832,
108,833,
108,835,
108,836,
108,839,
108,840,
108,842,
108,843,
108,845,
108,846,
108,850,
108,861,
108,862,
108,863,
108,866,
108,867,
108,869,
108,876,
108,877,
108,878,
108,880,
108,881,
108,883,
108,884,
108,885,
108,886,
108,887,
108,888,
108,889,
108,892,
108,901,
108,902,
108,903,
108,909,
108,912,
108,920,
108,922,
108,923,
108,925,
108,926,
108,927,
108,931,
108,937,
108,938,
108,939,
108,940,
108,942,
108,944,
108,945,
108,947,
108,948,
108,949,
108,952,
108,953,
108,955,
108,956,
108,957,
108,963,
108,969,
108,970,
108,971,
108,974,
108,981,
108,984,
108,985,
108,987,
108,988,
108,989,
108,991,
108,998,
108,999,
108,1001,
108,1002,
108,1003,
108,1005,
108,1008,
108,1010,
108,1013,
108,1015,
108,1017,
108,1019,
108,1025,
108,1029,
108,1030,
108,1031,
108,1033,
108,1034,
108,1035,
108,1036,
108,1039,
108,1040,
108,1044,
108,1045,
108,1047,
0};
static int __CvT__instrumented_lines___[]={
5,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
92,
175,
0,
0,
0,
2,
0,
10,
5,
0,
0,
0,
0,
0,
0,
0,
22,
0,
0,
0,
0,
0,
0,
0,
14,
0,
16,
5,
1,
0,
0,
8,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
0,
26,
0,
63,
10,
0,
253,
15,
0,
72,
5,
0,
0,
0,
0,
0,
0,
0,
0,
8,
398,
67,
33,
0,
128,
34,
81,
0,
95,
51,
36,
154,
0,
0,
0,
95,
13,
523,
63,
54,
131,
484,
18,
0,
0,
0,
0,
0,
0,
0,
415,
0,
0};
static __CvT__module_info____
__CvT_miTBODY(
              __CvT__file_name____,
              sizeof(__CvT__file_name____)/sizeof(char*) -1,
              __CvT__logged_lines___,
              (sizeof(__CvT__logged_lines___)/sizeof(int) -1) / 2
              ,__CvT__instrumented_lines___);
static __CvT__module_info____* __CvT_miTINIT = __CvT_miT = &__CvT_miTBODY;
