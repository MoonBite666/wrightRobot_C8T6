#include "pid.h"

void pid_init(struct PID *pid, double Kp, double Ti, double Td, double setpoint)
{
  pid->Kp = Kp;
  pid->Ti = Ti;
  pid->Td = Td;
  pid->setpoint = setpoint;
  pid->feedback = 0.0;
  pid->error = 0.0;
  pid->error_prev = 0.0;
  pid->error_next = 0.0;
  pid->output = 0.0;
}

void pid_update(struct PID *pid)
{
  pid->error = pid->setpoint - pid->feedback;
  double increment = pid->Kp * (pid->error - pid->error_next) + 
  pid->Ti * pid->error + 
  pid->Td * (pid->error - 2 * pid->error_next + pid->error_prev);
  pid->output += increment;
  pid->error_prev = pid->error_next;
  pid->error_next = pid->error;
  pid->feedback = pid->output;
}