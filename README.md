# Text RPG

콘솔 기반 텍스트 RPG 게임 팀 프로젝트입니다. C++로 구현되었으며, 캐릭터 생성부터 전투, 아이템, 제작까지 RPG의 핵심 요소를 다룹니다.

## 프로젝트 개요

플레이어는 캐릭터를 생성하고 직업을 선택한 뒤, 몬스터와 전투하며 아이템을 수집하고 강화·제작하는 RPG를 플레이합니다.

## 주요 기능

- **캐릭터 생성** — 이름, HP/MP, 스탯 입력 및 상태 확인
- **직업 선택** — 궁수(Archer), 마법사(Magician), 도적(Thief) 중 선택
- **전투 시스템** — 몬스터와의 턴제 전투, 드롭 아이템 획득
- **인벤토리** — 아이템 보관 및 관리
- **강화** — 캐릭터 스탯 업그레이드
- **연금술 제작** — 재료를 모아 포션 레시피에 따라 아이템 제작

## 기술 스택

| 항목 | 내용 |
|------|------|
| 언어 | C++ |
| IDE | Visual Studio 2022 |
| 플랫폼 | Windows (Win32 / x64) |

## 프로젝트 구조

```
NBC_STS_TEXTRPG_TEAMPROJECT/
├── Text RPG.sln          # Visual Studio 솔루션
└── Text RPG/
    ├── Main.h            # 메인 게임 로직
    ├── Character.h       # 캐릭터 생성·직업 선택
    ├── Battle.h          # 전투 시스템
    ├── Monster.h         # 몬스터
    ├── Item.h            # 아이템
    ├── Crafting.h        # 연금술 제작소
    ├── AllRecipes.h/cpp  # 포션 레시피
    ├── Archer.h          # 궁수 직업
    ├── Magician.h        # 마법사 직업
    └── Thief.h           # 도적 직업
```

## 실행 방법

1. [Visual Studio 2022](https://visualstudio.microsoft.com/)를 설치합니다. (C++ 데스크톱 개발 워크로드 필요)
2. `Text RPG.sln`을 Visual Studio에서 엽니다.
3. 빌드 구성(Debug/Release)과 플랫폼(Win32/x64)을 선택합니다.
4. **빌드 → 솔루션 빌드** (Ctrl+Shift+B) 후 실행합니다.

## 개발 환경

- Visual Studio 2022 (v143 toolset)
- Windows 10 이상

## 라이선스

이 프로젝트는 NBC STS 팀 프로젝트용으로 제작되었습니다.
