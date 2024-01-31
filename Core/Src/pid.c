#include "pid.h"

void pid_init(struct PID *pid, uint16_t Kp, uint16_t Ki, uint16_t Kd, uint16_t setpoint)
{
  pid->Kp = Kp;
  pid->Ki = Ki;
  pid->Kd = Kd;
  pid->setpoint = setpoint;
  pid->feedback = 0;
  pid->error = 0;
  pid->integral = 0;
  pid->derivative = 0;
  pid->output = 0;
}

void pid_update(struct PID *pid, uint16_t feedback)
{
  pid->feedback = feedback;
  pid->error = pid->setpoint - pid->feedback;
  pid->integral += pid->error;
  pid->derivative = pid->error - pid->derivative;
  pid->output = (pid->Kp * pid->error) + (pid->Ki * pid->integral) + (pid->Kd * pid->derivative);
}