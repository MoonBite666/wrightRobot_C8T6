#include "main.h"
void motor_forward(void);
void motor_backward(void);
void motor_stop(void);
void motor_edgeturn(int *edge_trigger, const uint16_t *speed);