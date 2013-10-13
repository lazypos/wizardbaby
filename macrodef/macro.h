#ifndef MACRO_H_INCLUDED
#define MACRO_H_INCLUDED

// 持续状态
#define STATUS_CONTINUED_NAME                 0x10001000
#define STATUS_CONTINUED_PARALYSIS            (STATUS_CONTINUED_NAME|0x1)       //< 麻痹
#define STATUS_CONTINUED_DEFENSE              (STATUS_CONTINUED_NAME|0X2)       //< 防御
#define STATUS_CONTINUED_SLEEP                (STATUS_CONTINUED_NAME|0X3)       //< 睡觉
#define STATUS_CONTINUED_LITHE                (STATUS_CONTINUED_NAME|0X4)       //< 轻盈
#define status_CONTINUED_SWIFT                (STATUS_CONTINUED_NAME|0X5)       //< 迅疾
#define status_CONTINUED_ANGER                (STATUS_CONTINUED_NAME|0X6)       //< 愤怒
#define status_CONTINUED_STRIVE               (STATUS_CONTINUED_NAME|0X7)       //< 努力
#define status_CONTINUED_EXPERTISE            (STATUS_CONTINUED_NAME|0X8)       //< 精准
#define STATUS_CONTINUED_TOUGH                (STATUS_CONTINUED_NAME|0X9)       //< 坚韧
#define status_CONTINUED_Burning              (STATUS_CONTINUED_NAME|0X5)       //<

// 回合状态
#define STATUS_GAP_NAME                 0x10002000
#define STATUS_GAP_DIZZINESS            (STATUS_GAP_NAME|0X1)       //< 眩晕
#define STATUS_GAP_POISONING            (STATUS_GAP_NAME|0X2)       //< 中毒
#define STATUS_GAP_FREEZE               (STATUS_GAP_NAME|0X3)       //< 冰冻
#define STATUS_GAP_BURNING              (STATUS_GAP_NAME|0X4)       //< 灼烧
#define STATUS_GAP_CONFUSION            (STATUS_GAP_NAME|0X5)       //< 混乱
#define STATUS_GAP_WEAK                 (STATUS_GAP_NAME|0X6)       //< 虚弱
#define STATUS_GAP_SHIELD               (STATUS_GAP_NAME|0X7)       //< 护盾
#define STATUS_GAP_SACRIFICE            (STATUS_GAP_NAME|0X8)       //< 舍身
#define STATUS_GAP_BLOOD                (STATUS_GAP_NAME|0X9)       //< 回血
#define STATUS_GAP_ABUNDANT             (STATUS_GAP_NAME|0Xa)       //< 充沛

// 性格

#endif // MACRO_H_INCLUDED
