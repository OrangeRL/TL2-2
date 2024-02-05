#include<cstdio>
#include<string>
#pragma once
class TextureConverter
{
public:
	/// <summary>
	/// �e�X�N�`����WIC����DDS�ɕϊ�
	/// </summary>
	/// <param name="filePath">�t�@�C���p�X</param>
	void ConverTextureWICToDDS(const std::string& filePath);
private:
	/// <summary>
	/// �e�X�N�`���t�@�C���ǂݍ���
	/// </summary>
	/// <param name="filePath">�t�@�C���p�X</param>
	void LoadWICTextureFromFile(const std::string& filePath);

	/// <summary>
	/// �}���`�o�C�g����������C�h������ɕϊ�
	/// </summary>
	/// <param name="mString">�}���`�o�C�g������</param>
	/// <returns>���C�h������</returns>
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

};