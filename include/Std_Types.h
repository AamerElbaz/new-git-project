/******************************************************************************
 * File Name   : Std_Types                                                    *
 * Description : Header file of used Common Standard Types                    *
 * Created on  : April 6, 2020                                                *
 ******************************************************************************/

#ifndef INCLUDE_STD_TYPES_H_
#define INCLUDE_STD_TYPES_H_

/* Boolean Values */
#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif

#define HIGH        (1u)
#define LOW         (0u)

/* Boolean Data Type */
typedef unsigned char           boolean;
typedef unsigned char           uint8;          /*           0 .. 255             */
typedef unsigned short          uint16;         /*           0 .. 65535           */
typedef unsigned long           uint32;         /*           0 .. 4294967295      */
typedef signed char             sint8;          /*        -128 .. +127            */
typedef signed short            sint16;         /*      -32768 .. +32767          */
typedef signed long             sint32;         /* -2147483648 .. +2147483647     */
typedef signed long long        sint64;
typedef unsigned long long      uint64;         /*       0..18446744073709551615  */
typedef float                   float32;
typedef double                  float64;

#define NULL ((void*)0)

typedef uint8 Std_ReturnType;
#define E_OK            ((Std_ReturnType)0x00)
#define E_NOT_OK        ((Std_ReturnType)0x01)

#endif /* INCLUDE_STD_TYPES_H_ */
