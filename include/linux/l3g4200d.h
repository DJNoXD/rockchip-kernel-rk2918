/******************** (C) COPYRIGHT 2010 STMicroelectronics ********************
*
* File Name          : l3g4200d.c
* Authors            : MH - C&I BU - Application Team
*		     : Carmine Iascone (carmine.iascone@st.com)
*		     : Matteo Dameno (matteo.dameno@st.com)
* Version            : V 0.2
* Date               : 09/04/2010
* Description        : L3G4200D digital output gyroscope sensor API
*
********************************************************************************
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*
* THE PRESENT SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES
* OR CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED, FOR THE SOLE
* PURPOSE TO SUPPORT YOUR APPLICATION DEVELOPMENT.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*
* THIS SOFTWARE IS SPECIFICALLY DESIGNED FOR EXCLUSIVE USE WITH ST PARTS.
*
********************************************************************************
* REVISON HISTORY
*
* VERSION | DATE 	| AUTHORS	     | DESCRIPTION
*
* 0.1	  | 29/01/2010	| Carmine Iascone    | First Release
* 
* 0.2	  | 09/04/2010  | Carmine Iascone    | Updated the struct l3g4200d_t
*
*******************************************************************************/

#ifndef __L3G4200D_H__
#define __L3G4200D_H__

#include <linux/ioctl.h>  /* For IOCTL macros */

/** This define controls compilation of the master device interface */
/*#define L3G4200D_MASTER_DEVICE*/

#define L3G4200D_IOCTL_BASE 'g'
/* The following define the IOCTL command values via the ioctl macros */
#define L3G4200D_SET_RANGE		_IOW(L3G4200D_IOCTL_BASE, 1, int)
#define L3G4200D_SET_MODE		_IOW(L3G4200D_IOCTL_BASE, 2, int)
#define L3G4200D_SET_BANDWIDTH		_IOW(L3G4200D_IOCTL_BASE, 3, int)
#define L3G4200D_READ_GYRO_VALUES	_IOW(L3G4200D_IOCTL_BASE, 4, int)

#define L3G4200D_FS_250DPS	0x00
#define L3G4200D_FS_500DPS	0x10
#define L3G4200D_FS_2000DPS	0x30

#define PM_OFF		0x00
#define PM_NORMAL	0x08
#define ENABLE_ALL_AXES	0x07

/*status*/
#define L3G4200D_SUSPEND           2
#define L3G4200D_OPEN           1
#define L3G4200D_CLOSE          0

#define ODR100_BW12_5	0x00  /* ODR = 100Hz; BW = 12.5Hz */
#define ODR100_BW25	0x10  /* ODR = 100Hz; BW = 25Hz   */
#define ODR200_BW12_5	0x40  /* ODR = 200Hz; BW = 12.5Hz */
#define ODR200_BW25	0x50  /* ODR = 200Hz; BW = 25Hz   */
#define ODR200_BW50	0x60  /* ODR = 200Hz; BW = 50Hz   */
#define ODR400_BW25	0x90  /* ODR = 400Hz; BW = 25Hz   */
#define ODR400_BW50	0xA0  /* ODR = 400Hz; BW = 50Hz   */
#define ODR400_BW110	0xB0  /* ODR = 400Hz; BW = 110Hz  */
#define ODR800_BW50	0xE0  /* ODR = 800Hz; BW = 50Hz   */
#define ODR800_BW100	0xF0  /* ODR = 800Hz; BW = 100Hz  */

#define L3G4200D_REG_WHO_AM_I 0x0f
#define L3G4200D_REG_CTRL_REG1 0x20
#define ACTIVE_MASK 0x08

#ifdef __KERNEL__
struct l3g4200d_platform_data {
	u8 fs_range;

	u8 axis_map_x;
	u8 axis_map_y;
	u8 axis_map_z;

	u8 negate_x;
	u8 negate_y;
	u8 negate_z;

	int (*init)(void);
	void (*exit)(void);
	int (*power_on)(void);
	int (*power_off)(void);

};

#endif /* __KERNEL__ */

#define MMAIO				0xA1

/* IOCTLs for MMA8452 library */
#define ECS_IOCTL_INIT                  _IO(MMAIO, 0x01)
#define ECS_IOCTL_RESET      	          _IO(MMAIO, 0x04)
#define ECS_IOCTL_CLOSE		           _IO(MMAIO, 0x02)
#define ECS_IOCTL_START		             _IO(MMAIO, 0x03)
#define ECS_IOCTL_GETDATA               _IOR(MMAIO, 0x08, char[RBUFF_SIZE+1])

#define GYROSENSOR_IOCTL_MAGIC 'l'
#define GYROSENSOR_IOCTL_GET_ENABLED _IOR(GYROSENSOR_IOCTL_MAGIC, 1, int *)
#define GYROSENSOR_IOCTL_ENABLE _IOW(GYROSENSOR_IOCTL_MAGIC, 2, int *)

/* IOCTLs for APPs */
#define ECS_IOCTL_APP_SET_RATE		_IOW(MMAIO, 0x10, char)

#define EVENT_TYPE_GYRO_X           ABS_RY
#define ECS_IOCTL_APP_GET_ABS EVIOCGABS(EVENT_TYPE_GYRO_X)		


struct l3g4200d_data {
    char  status;
    char  curr_tate;
	struct input_dev *input_dev;
	struct i2c_client *client;
	struct work_struct work;
	struct delayed_work delaywork;	/*report second event*/
	struct l3g4200d_platform_data *pdata;
};

struct l3g4200d_axis {
	int x;
	int y;
	int z;
};

#define  GSENSOR_DEV_PATH    "/dev/gyrosensors"


#endif  /* __L3G4200D_H__ */
