/*
 * global.h
 *
 *  Created on: Oct 27, 2024
 *      Author: USER
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define RED_INIT		10
#define YELLOW_INIT		3
#define GREEN_INIT		7

void LedTimeDurationInit();
extern int mode;
extern int red_value, yellow_value, green_value;
extern int red_draft, yellow_draft, green_draft;

#endif /* INC_GLOBAL_H_ */
