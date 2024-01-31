#include "motor.h"

void motor_forward(void)
{
  HAL_GPIO_WritePin(motor1_CTL1_GPIO_Port, motor1_CTL1_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(motor1_CTL2_GPIO_Port, motor1_CTL2_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(motor1_CTL1_GPIO_Port, motor2_CTL1_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(motor1_CTL2_GPIO_Port, motor2_CTL2_Pin, GPIO_PIN_RESET);
}
void motor_backward(void)
{
  HAL_GPIO_WritePin(motor1_CTL1_GPIO_Port, motor1_CTL1_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(motor1_CTL2_GPIO_Port, motor1_CTL2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(motor1_CTL1_GPIO_Port, motor2_CTL1_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(motor1_CTL2_GPIO_Port, motor2_CTL2_Pin, GPIO_PIN_SET);
}
void motor_stop(void)
{
  HAL_GPIO_WritePin(motor1_CTL1_GPIO_Port, motor1_CTL1_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(motor1_CTL2_GPIO_Port, motor1_CTL2_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(motor1_CTL1_GPIO_Port, motor2_CTL1_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(motor1_CTL2_GPIO_Port, motor2_CTL2_Pin, GPIO_PIN_RESET);
}

void motor_edgeturn(int *edge_trigger, const uint16_t *speed)
{
  //caculations needed
  edge_trigger[0] = 0;
  edge_trigger[1] = 0;
}