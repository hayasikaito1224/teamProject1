//=============================================================================
//
// テクスチャクラス [texture.h]
// Author : 小笠原　彪我
//
//=============================================================================
#ifndef _TEXTURE_H_
#define _TEXTURE_H_

//*****************************************************************************
// ヘッダファイルのインクルード
//*****************************************************************************
#include "manager.h"

//=============================================================================
// マクロ定義
//=============================================================================
#define FILENAME_TEX "data/SCRIPT/texture.txt"

//*****************************************************************************
//	テクスチャクラス
//*****************************************************************************
class CTexture
{
public:
	//テクスチャの種類
	typedef enum
	{
		TEXTURETYPE_PUSH = 0,
		TEXTURETYPE_NAME,
		TEXTURETYPE_TIME,		
		TEXTURETYPE_MACHINE,
		TEXTURETYPE_EFFECT,
		TEXTURETYPE_MAX
	} TEXTURETYPE;

	CTexture();						// コンストラクタ
	~CTexture();					// デストラクタ

	HRESULT Init(void);				// 初期化処理
	void Uninit(void);				// 終了処理
	void Update(void);				// 更新処理
	void Draw(void);				// 描画処理

	static CTexture *Create(void);		// 生成処理
	LPDIRECT3DTEXTURE9 SetTextureType(int nType);				// テクスチャの種類を設定

private:
	static LPDIRECT3DTEXTURE9	m_pTexture[MAX_TEXTURE];		// テクスチャのポインタ
	static int m_nType;
	int m_nNumTexture;
	int m_nTextType;


};
#endif //!_TEXTURE_H_