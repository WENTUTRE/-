# 十點半

一種賭博遊戲,玩法類似二十一點,但規則更簡單

### 規則

A ~ 10 的牌計為1~10點,JQK計為0.5點
超過10.5點就輸了,抽到5張還沒超過10.5點直接勝利,再來跟莊家比大小(同點莊家贏)

1. 其中一名玩家做莊家
2. 開始時每個人抽一張牌作為底牌,底牌只有自己能看
3. 玩家依順序輪流要牌,要得的牌要打開給所有人看

### 進度

- Card
    - [x] rank
        - [x] getRank
    - [x] suit
        - [x] getSuit
    - [x] point
        - [x] getPoint
- Poker 
    - [x] 52 Card in vector 
        - [x] cardCount
    - [x] `shuffle`
    - [x] `drawCard`

- Player
    - [x] name
        - [x] `setName`
        - [x] `getName`
    - [x] 1 ~ 5 Card in vector
        - [x] cardCount
    - [x] `printCard`
    - [x] `drawCard`
        - [x] `getPoint`
        - [x] `overflow`
    - [x] `getMoney`

- main
    - [x] compare
        - [x] `setMoney`
    
    ---------------------------------------

