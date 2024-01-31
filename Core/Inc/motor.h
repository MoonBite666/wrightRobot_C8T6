#include "main.h"
void motor_forward(bool *dir);
void motor_backward(bool *dir);
void motor_stop(bool *dir);
void motor_edgeturn(int *edge_trigger, const uint16_t *speed);