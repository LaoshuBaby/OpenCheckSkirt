#include "../Header/Basic.hpp"

////ͨ������Ͱٷ��������ͼ�������������
//
//CanvasDrawL = (int)WINDOW_W * 0.000;
//CanvasDrawU = (int)WINDOW_H * 0.000;
//CanvasDrawR = (int)WINDOW_W * 1.000;
//CanvasDrawD = (int)WINDOW_H * 0.900;
//CanvasDrawNum = CanvasDrawR;
//
//
//SystemDrawL = (int)WINDOW_W * 0.000;
//SystemDrawU = (int)WINDOW_H * 0.901;
//SystemDrawR = (int)WINDOW_W * 1.000;
//SystemDrawD = (int)WINDOW_H * 1.000;
//
////�������ٲ���֮ǰ���õ�ȫ��ˢ�µĲ��ԣ������þֲ�ˢ�£���ս�������Եĵط�
//
//CanvasDrawHRGN = CreateRectRgn(CanvasDrawL, CanvasDrawU, CanvasDrawR, CanvasDrawD);
//SystemDrawHRGN = CreateRectRgn(SystemDrawL, SystemDrawU, SystemDrawR, SystemDrawD);
//
////�Ѹ��Ʒ�����Ϊȫ�ֱ���
//
//DrawDuplicate = 0;
//#define DUPLICATE_SINGLE 1001
//#define DUPLICATE_SQUARE 1002
//#define DUPLICATE_MULTIPLY 1003
//
//CanvasOriginalDrawL = 0;
//CanvasOriginalDrawU = 0;
//CanvasOriginalDrawR = 0;
//CanvasOriginalDrawD = 0;
//CanvasOriginalDrawNum = 0;