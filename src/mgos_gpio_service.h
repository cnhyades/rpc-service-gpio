/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_FW_SRC_MGOS_GPIO_SERVICE_H_
#define CS_FW_SRC_MGOS_GPIO_SERVICE_H_

#include "fw/src/mgos_features.h"

#include "fw/src/mgos_init.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

bool mgos_rpc_service_gpio_init(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CS_FW_SRC_MGOS_GPIO_SERVICE_H_ */
