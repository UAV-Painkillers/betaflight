/*
 * This file is part of Cleanflight, Betaflight and INAV.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight, Betaflight and INAV are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#define MSP2_BETAFLIGHT_BIND                0x3000
#define MSP2_MOTOR_OUTPUT_REORDERING        0x3001
#define MSP2_SET_MOTOR_OUTPUT_REORDERING    0x3002
#define MSP2_SEND_DSHOT_COMMAND             0x3003
#define MSP2_GET_VTX_DEVICE_STATUS          0x3004
#define MSP2_GET_OSD_WARNINGS               0x3005  // returns active OSD warning message text
#define MSP2_GET_TEXT                       0x3006
#define MSP2_SET_TEXT                       0x3007
#define MSP2_GET_LED_STRIP_CONFIG_VALUES    0x3008
#define MSP2_SET_LED_STRIP_CONFIG_VALUES    0x3009
#define MSP2_SENSOR_CONFIG_ACTIVE           0x300A

// MSP2_SET_TEXT and MSP2_GET_TEXT variable types
#define MSP2TEXT_PILOT_NAME                      1
#define MSP2TEXT_CRAFT_NAME                      2
#define MSP2TEXT_PID_PROFILE_NAME                3
#define MSP2TEXT_RATE_PROFILE_NAME               4
#define MSP2TEXT_BUILDKEY                        5
#define MSP2TEXT_RELEASENAME                     6

// RACETIMER
#define MSP2_RACETIMER_SET_ENABLE               0x4000
#define MSP2_RACETIMER_GET_ENABLE               0x4001
#define MSP2_RACETIMER_SET_LAST_LAP_TIME        0x4002
#define MSP2_RACETIMER_GET_LAST_LAP_TIME        0x4003
#define MSP2_RACETIMER_SET_BEST_LAP_TIME        0x4004
#define MSP2_RACETIMER_GET_BEST_LAP_TIME        0x4005
#define MSP2_RACETIMER_SET_LAST_GAP_TIME        0x4006
#define MSP2_RACETIMER_GET_LAST_GAP_TIME        0x4007
#define MSP2_RACETIMER_SET_LAP_COUNT            0x4008
#define MSP2_RACETIMER_GET_LAP_COUNT            0x4009
#define MSP2_RACETIMER_SET_CURRENT_POSITION     0x400A
#define MSP2_RACETIMER_GET_CURRENT_POSITION     0x400B
#define MSP2_RACETIMER_SET_NOTIFICATION         0x400C
#define MSP2_RACETIMER_GET_NOTIFICATION         0x400D