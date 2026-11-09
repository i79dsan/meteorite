#pragma once
#include "DxLib.h"
#include "Vector.h"
#include <vector>

class Meteoroid;
class Bullet;

class GameScene {
private:
    std::vector<Meteoroid*> meteors;  // 隕石の保管
    std::vector<Bullet*> bullets;     // 弾の保管

public:
    void Init(Vector2 pos, double size, int health); // 初期化
    void Update();                                   // アップデート
    void LoadStage();                                // ステージ読み込み
};