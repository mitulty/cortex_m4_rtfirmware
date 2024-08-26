/**
 * @Author: Mitul Tyagi
 * @Date:   2024-08-26 21:16:52
 * @Description: global macro defintions, enums and structures
 * @Last Modified time: 2024-08-26 23:19:15
 */
#ifndef _GLOBAL_DEFINES_
#define _GLOBAL_DEFINES_

#include <stdio.h>
#include <stdint.h>
/**
 * MACRO Defintions
 */

/**
 * \brief indicates SUCCESS status
 *
 */
#define PASS 0x0000ACED

/**
 * \brief indicates FAILURE status
 */
#define FAIL 0x0000DEAD

/**
 * \brief memory address holding status
 */
#define MONITOR

/**
 * \brief api success return status
 */
#define SUCCESS ((int32_t)0)

/**
 * \brief api failure return status
 */
#define FAILURE ((int32_t)(-1))

/**
 * \brief api timout return status
 */
#define TIMEOUT ((int32_t)(-2))

/**
 * \brief NULL defintion
 */
#ifndef NULL
#define NULL (void *)0
#endif

/**
 * \brief NULLPTR defintion
 */
#ifndef NULLPTR
#define NULLPTR (void *)0
#endif

/**
 * \brief read register 64-bit
 */
#define RD_REG64(x) (*(int64_t *)(x))

/**
 * \brief read register 32-bit
 */
#define RD_REG32(x) (*(int32_t *)(x))

/**
 * \brief read register 16-bit
 */
#define RD_REG16(x) (*(int16_t *)(x))

/**
 * \brief read register 8-bit
 */
#define RD_REG8(x) (*(int8_t *)(x))

/**
 * \brief write register 64-bit
 */
#define WR_REG64(x, d) (*(int64_t *)(x)) = (int64_t)(d)

/**
 * \brief write register 32-bit
 */
#define WR_REG32(x, d) (*(int32_t *)(x)) = (int32_t)(d)

/**
 * \brief write register 16-bit
 */
#define WR_REG16(x, d) (*(int16_t *)(x)) = (int16_t)(d)

/**
 * \brief write register 8-bit
 */
#define WR_REG8(x, d) (*(int8_t *)(x)) = (int8_t)(d)

/**
 * \brief read memory 64-bit
 */
#define RD_MEM64(x) (*(int64_t *)(x))

/**
 * \brief read memory 32-bit
 */
#define RD_MEM32(x) (*(int32_t *)(x))

/**
 * \brief read memory 16-bit
 */
#define RD_MEM16(x) (*(int16_t *)(x))

/**
 * \brief read memory 8-bit
 */
#define RD_MEM8(x) (*(int8_t *)(x))

/**
 * \brief write memory 64-bit
 */
#define WR_MEM64(x, d) (*(int64_t *)(x)) = (int64_t)(d)

/**
 * \brief write memory 32-bit
 */
#define WR_MEM32(x, d) (*(int32_t *)(x)) = (int32_t)(d)

/**
 * \brief write memory 16-bit
 */
#define WR_MEM16(x, d) (*(int16_t *)(x)) = (int16_t)(d)

/**
 * \brief write memory 8-bit
 */
#define WR_MEM8(x, d) (*(int8_t *)(x)) = (int8_t)(d)

/**
 * \brief enumeration for boolean data type
 */
typedef enum boolean_e
{
    FALSE = 0,
    TRUE
} boolean_t,
    *ptrBool;
/**
 * \brief BOOL data type
 */
#ifndef BOOL
#define BOOL boolean_t
#endif

#endif