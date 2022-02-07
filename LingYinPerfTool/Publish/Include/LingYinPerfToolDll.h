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

#include "../../framework.h"

namespace LingYinPerfTool {
	/*! @fn HRESULT GetPidFromAppNameAndSuspend(LPWSTR& pszAppProcessName, HANDLE& hProcessHandle);
	*  @brief �����������������ض�Ӧ����� Pid
	*  @param[in]  pszAppProcessName	������Ҫ���� Pid �ĳ��������
	*  @param[out] hProcessHandle		���ش򿪳���ľ��
	*  @return							���ʧ�ܣ����� E_FAIL
	*/
	HRESULT GetPidFromAppName(LPWSTR& pszAppProcessName, DWORD& nProcessId);

	// HRESULT CheckEIPAndSuspendByProcessID(DWORD& nProcessID, DWORD nAddress, size_t nSize);
} 