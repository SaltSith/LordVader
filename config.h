#pragma once

#include "zmq_plugin/zmq_plugin_socket/zmq_plugin_socket.h"

#define zmq_plugin_task_QUEUE_NAME  "/zmq_plugin_vader_queue"

#define PLUGIN_ADDR "tcp://localhost:5558"
#define PLUGIN_ROLE REQUESTER

#define wakeup_message "Arised\r\n"
