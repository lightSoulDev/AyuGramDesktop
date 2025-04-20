// This is the source code of ViGram for Desktop.
//
// We do not and cannot prevent the use of our code,
// but be respectful and credit the original author.
//
// Copyright @Radolyn, 2025
#pragma once

#include "ui/effects/animations.h"
#include "ui/rp_widget.h"

class IconPicker : public Ui::RpWidget
{
public:
	IconPicker(QWidget *parent);

protected:
	void paintEvent(QPaintEvent *e) override;
	void mousePressEvent(QMouseEvent *e) override;

	Ui::Animations::Simple animation;
	QString wasSelected;
};
