#ifndef NODOCUSDELEGATE_H
#define NOFOCUSDELEGATE_H
#include<qstyleditemdelegate.h>
#include<qpainter.h>
#include<QStyleOptionViewItem>
class NoFocusDelegate:public QStyledItemDelegate
{
protected:
	void paint(QPainter* painter,const QStyleOptionViewItem& option,const QModelIndex& index)const;
};
#endif
