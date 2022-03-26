/****************************************************************************************
*  LingYinPerfToolDll.h																	*
*																						*
*  Copyright (c) 2022 Ricardo2001zg All Rights Reserved.								*
*																						*
*  @file  KHagsRegeditDll.h																*
*  @brief readme:																		*
*  1.C++ 11																				*
*  	(1) nullptr																			*
*  	Use nullptr instead of NULL .														*
*  	(2) auto																			*
*  	(3) constexpr																		*
*  																						*
*  2.rules																				*
*  	(1) Semantic Versioning 2.0.0														*
*  	Use Semantic Versioning to write version number(x.y.z).								*
*  	Docs: https://semver.org/lang/zh-CN/												*
*  	(2) Doxygen																			*
*  	Use Doxygen to write annotation.													*
*  																						*
*  @author   Ricardo2001zg																*
*  @email    miao@ricardo2001zg.moe														*
*  @license  MIT																		*
*  																						*
*  @version  0.1.0																		*
*																						*
****************************************************************************************/

#include "pch.h"

/****************************************************************************************
* TODO list:
* ��1������ PID ��ͣ�߳�
* ��2���ж� EIP
* ��3������ PID �ָ��߳�
* ��4�����ű�ע��
* 5��KG_PrintLog Hook
* 6��AGS �滻 device
* 7��AGS ����첽��������
* 
****************************************************************************************/

namespace LingYinPerfTool {
	/*! @fn HRESULT GetPidFromAppName(std::wstring& pszAppProcessName, DWORD& pnProcessID);
	*  @brief �����������������ز��ҵ��ĵ�һ����Ӧ����� Pid����ʱ��ʵ�ֵ���ͬ�����̻�ȡ��
	*  @param[in]  pszAppProcessName ������Ҫ���� Pid �ĳ��������
	*  @param[out] pnProcessID		 ���ش򿪳���� Pid
	*  @return						 ���ʧ�ܣ����� E_FAIL
	*/
	HRESULT GetPidFromAppName(std::wstring& pszAppProcessName, DWORD& pnProcessID);

	// TODO: std::wstring �����ԸĶ�

	/*! @fn HRESULT GetFunctionAddressFromSymbol(DWORD& pnProcessID, PCSTR pszFunctionName, ULONG64& pnFunctionAddress);
	*  @brief ������� Pid ����Ҫ��ȡ��ַ�ĺ�������ͨ�����ű���Һ�����ַ
	*  @param[in]  nProcessID	      ������Ҫ���Һ�����Ӧ���̵� Pid
	*  @param[in]  pszFunctionDllName ������Ҫ���Һ������ڵ� DLL
	*  @param[in]  pszFunctionName    ������Ҫ���ҵĺ�����
	*  @param[out] nProcessID	      ���ض�Ӧ�ĺ�����ַ
	*  @return					      ���ʧ�ܣ����� E_FAIL
	*/
	HRESULT GetFunctionAddressFromSymbol(DWORD& pnProcessID, LPWSTR& pszFunctionDllName, PCSTR pszFunctionName, ULONG64& pnFunctionAddress);

	/*! @fn HRESULT CheckEIPAndSuspendByProcessID(DWORD& nProcessID, DWORD nAddress, size_t nSize);
	*  @brief ���� Pid ��ͣ��Ӧ���̵������߳�
	*  @param[in] nProcessID ���� Pid
	*  @param[in] nAddress	 ע��Ŀ�꺯����ַ
	*  @param[in] nSize		 Ŀ�꺯����С
	*  @return				 ���ʧ�ܣ����� E_FAIL
	*/
	HRESULT CheckEIPAndSuspendByProcessID(DWORD& pnProcessID, DWORD& pnAddress, size_t nSize);

	/*! @fn HRESULT RusumeByProcessID(DWORD& nProcessId);
	*  @brief ���� Pid �ָ���Ӧ���̱���ͣ�������߳�
	*  @param[in] nProcessID ���� Pid
	*  @return				 ���ʧ�ܣ����� E_FAIL
	*/
	HRESULT RusumeByProcessID(DWORD& pnProcessId);

} 