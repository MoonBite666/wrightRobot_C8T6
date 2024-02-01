#include "main.h"
#ifndef PID_H
#define PID_H
struct PID {
  double Kp;
  double Ti;
  double Td;
  double setpoint;
  double feedback;
  double error;
  double error_prev;
  double error_next;
  double output;
};

void pid_init(struct PID *pid, double Kp, double Ti, double Td, double setpoint);

void pid_update(struct PID *pid);

#endif