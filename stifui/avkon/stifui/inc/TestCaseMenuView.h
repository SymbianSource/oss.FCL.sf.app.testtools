/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies). 
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
* 
* Description: This file contains CTestCaseMenuView class 
* declaration.
*
*/

#ifndef TESTCASEMENUVIEW_H
#define TESTCASEMENUVIEW_H

// INCLUDES
#include "View.h"
#include <aknnavide.h> 


// CONSTANTS
// UID of view
const TUid KTestCaseMenuViewId = {2};

// FORWARD DECLARATIONS
class CTestCaseMenuContainer;

// CLASS DECLARATION

/**
*  CTestCaseMenuView view class.
* 
*/
class CTestCaseMenuView : public CView //CAknView
    {
    public: // Constructors and destructor

        /**
        * Symbian OS default constructor.
        */
        void ConstructL();

        /**
        * Destructor.
        */
        ~CTestCaseMenuView();

    public: // Functions from base classes
        
        /**
        * Returns view�s id.
        * @return View id.
        */
        TUid Id() const;

        /**
        * Handles a command.
        * @param aCommand A command ID.
        */
        void HandleCommandL( TInt aCommand );

        /**
        * Handles client rect changes.
        */
        void HandleClientRectChange();

    private:

        /**
        * Initializes view when activated.
        * @param aPrevViewId Id of the previous view (not used).
        * @param aCustomMessageId Custom message id (not used).
        * @param aCustomMessage Custom message (not used).
        */
        void DoActivateL(const TVwsViewId& aPrevViewId,TUid aCustomMessageId,
            const TDesC8& aCustomMessage);

        /**
        * Deactivates view.
        */
        void DoDeactivate();
        
    private: // Data
        CAknNavigationDecorator*    iNaviDecorator;
        CTestCaseMenuContainer*     iContainer;
    };

#endif

// End of File
