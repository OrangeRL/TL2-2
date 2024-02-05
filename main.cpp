#include<cstdio>
#include<cstdlib>
#include"DirectXTex/DirectXTex.h"
#include"TextureConverter.h"

//�R�}���h���C������
enum Argument {
	kApplicationPath,//�A�v���P�[�V�����̃p�X
	kFilePath,		//�n���ꂽ�t�@�C���̃p�X
	NumArgment
};

int main(int argc, char* argv[]) {
	assert(argc >= NumArgment);

	//COM���C�u�����̏�����
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//�e�X�N�`���R���o�[�^�[
	TextureConverter converter;

	//�e�N�X�`���ϊ�
	converter.ConverTextureWICToDDS(argv[kFilePath]);

	//COM���C�u�����̏I��
	CoUninitialize();

	system("pause");
	return 0;
}