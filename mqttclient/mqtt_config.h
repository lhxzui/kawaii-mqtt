/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2019-12-15 00:42:16
 * @LastEditTime: 2020-02-23 23:50:03
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */
#ifndef _MQTT_CONFIG_H_
#define _MQTT_CONFIG_H_

#ifndef MQTT_MAX_PACKET_ID
    #define     MQTT_MAX_PACKET_ID                  (0xFFFF - 1)
#endif // !MQTT_MAX_PACKET_ID

#ifndef MQTT_TOPIC_LEN_MAX
    #define     MQTT_TOPIC_LEN_MAX                  64
#endif // !MQTT_TOPIC_LEN_MAX

#ifndef MQTT_ACK_HANDLER_NUM_MAX
    #define     MQTT_ACK_HANDLER_NUM_MAX            64
#endif // !MQTT_ACK_HANDLER_NUM_MAX

#ifndef MQTT_DEFAULT_BUF_SIZE
    #define     MQTT_DEFAULT_BUF_SIZE               1024
#endif // !MQTT_DEFAULT_BUF_SIZE

#ifndef MQTT_DEFAULT_CMD_TIMEOUT
    #define     MQTT_DEFAULT_CMD_TIMEOUT            4000
#endif // !MQTT_DEFAULT_CMD_TIMEOUT

#ifndef MQTT_MAX_CMD_TIMEOUT
    #define     MQTT_MAX_CMD_TIMEOUT                20000
#endif // !MQTT_MAX_CMD_TIMEOUT

#ifndef MQTT_MIN_CMD_TIMEOUT
    #define     MQTT_MIN_CMD_TIMEOUT                1000
#endif // !MQTT_MIN_CMD_TIMEOUT

#ifndef MQTT_KEEP_ALIVE_INTERVAL
    #define     MQTT_KEEP_ALIVE_INTERVAL            100      // unit: second
#endif // !MQTT_KEEP_ALIVE_INTERVAL

#ifndef MQTT_VERSION
    #define     MQTT_VERSION                        4      // 4 is mqtt 3.1.1
#endif // !MQTT_VERSION

#ifndef MQTT_RECONNECT_DEFAULT_DURATION
    #define     MQTT_RECONNECT_DEFAULT_DURATION     1000
#endif // !MQTT_RECONNECT_DEFAULT_DURATION

#ifndef MQTT_THREAD_STACK_SIZE
    #define     MQTT_THREAD_STACK_SIZE              4096
#endif // !MQTT_THREAD_STACK_SIZE

#ifndef MQTT_THREAD_PRIO
    #define     MQTT_THREAD_PRIO                    5
#endif // !MQTT_THREAD_PRIO

#ifndef MQTT_THREAD_TICK
    #define     MQTT_THREAD_TICK                    50
#endif // !MQTT_THREAD_TICK


#ifdef MQTT_NETWORK_TYPE_TLS

#ifndef MQTT_TLS_HANDSHAKE_TIMEOUT
    #define MQTT_TLS_HANDSHAKE_TIMEOUT  (5 * 1000)
#endif // !MQTT_TLS_HANDSHAKE_TIMEOUT
    
    #include "mbedtls/config.h"
    #include "mbedtls/ssl.h"
    #include "mbedtls/entropy.h"
    #include "mbedtls/net_sockets.h"
    #include "mbedtls/ctr_drbg.h"
    #include "mbedtls/error.h"
    #include "mbedtls/debug.h"
#endif /* MQTT_NETWORK_TYPE_TLS */

#endif /* _MQTT_CONFIG_H_ */
