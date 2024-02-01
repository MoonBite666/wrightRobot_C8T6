#include "motor.h"

void motor_forward(bool *dir)
{
  dir[0] = 1; dir[1] = 0; dir[2] = 1; dir[3] = 0;
}
void motor_backward(bool *dir)
{
  dir[0] = 0; dir[1] = 1; dir[2] = 0; dir[3] = 1;
}
void motor_stop(bool *dir)
{
  dir[0] = 0; dir[1] = 0; dir[2] = 0; dir[3] = 0;
}

void motor_shift(struct PID *pid, const uint16_t speed)
{
  pid->setpoint += speed;
}

void motor_turn(struct PID *pid1, struct PID *pid2, const uint16_t speed)
{
  motor_shift(pid1, speed);
  motor_shift(pid2, -speed);
}

void motor_edgeturn(int *edge_trigger, const uint16_t *speed)
{
  //caculations needed
  edge_trigger[0] = speed[0];
  edge_trigger[1] = 0;
}