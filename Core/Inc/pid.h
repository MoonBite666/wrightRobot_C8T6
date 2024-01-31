#include "main.h"
#ifndef PID_H
#define PID_H
struct PID {
  uint16_t Kp;
  uint16_t Ki;
  uint16_t Kd;
  uint16_t setpoint;
  uint16_t feedback;
  uint16_t error;
  uint16_t integral;
  uint16_t derivative;
  uint16_t output;
};

void pid_init(struct PID *pid, uint16_t Kp, uint16_t Ki, uint16_t Kd, uint16_t setpoint);

void pid_update(struct PID *pid, uint16_t feedback);

#endif