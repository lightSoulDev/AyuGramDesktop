// This is the source code of AyuGram for Desktop.
//
// We do not and cannot prevent the use of our code,
// but be respectful and credit the original author.
//
// Copyright @Radolyn, 2025
#pragma once

#define ICON(name, value) const auto name##_ICON = QStringLiteral(value)

namespace AyuAssets {

ICON(DEFAULT, "default");

void loadAppIco();

QImage loadPreview(QString name);

QString currentAppLogoName();
QImage currentAppLogo();
QImage currentAppLogoNoMargin();

} // namespace AyuAssets
