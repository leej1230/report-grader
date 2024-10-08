#pragma once

#include <Windows.h>
#include <string>

// 参考元
// https://sayahamitt.net/utf8%E3%81%AAstring%E5%85%A5%E3%82%8C%E3%81%9F%E3%82%89shiftjis%E3%81%AAstring%E5%87%BA%E3%81%A6%E3%81%8F%E3%82%8B%E9%96%A2%E6%95%B0%E4%BD%9C%E3%81%A3%E3%81%9F/

namespace Utility {
	// 文字化けした文字列を戻す
	std::string DecodeGarble(std::string garbleStr);
	// 文字列を文字化けさせる
	std::string EncodeGarble(std::string rawStr);
}